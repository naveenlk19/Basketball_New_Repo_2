#include "BasketBallGameGameMode.h"
#include "BasketballMatchComponent.h"
#include "BasketBallGamePlayerController.h"

ABasketBallGameGameMode::ABasketBallGameGameMode()
{
	MatchComponent = CreateDefaultSubobject<UBasketballMatchComponent>(TEXT("MatchComponent"));
}

void ABasketBallGameGameMode::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("GameMode: BeginPlay"));
}

// ========================
// Authority Wrappers
// ========================

void ABasketBallGameGameMode::RegisterShotAttempt()
{
	if (!MatchComponent) return;

	MatchComponent->RegisterShotAttempt();

	UE_LOG(LogTemp, Warning, TEXT("GameMode: Shot Attempt"));
}

void ABasketBallGameGameMode::RegisterShotSuccess(int32 PointValue)
{
	if (!MatchComponent) return;

	MatchComponent->RegisterShotSuccess(PointValue);
	
	// Refresh HUD for all players
	RefreshAllPlayerHUD();
	UE_LOG(LogTemp, Warning, TEXT("GameMode: Shot Success | Points: %d"), PointValue);
}

void ABasketBallGameGameMode::RegisterShotMiss()
{
	if (!MatchComponent) return;

	MatchComponent->RegisterShotMiss();

	UE_LOG(LogTemp, Warning, TEXT("GameMode: Shot Miss"));
	
	// Refresh HUD for all players
	RefreshAllPlayerHUD();
}

// ========================
// Read-Only Access (UI)
// ========================

int32 ABasketBallGameGameMode::GetCurrentScore() const
{
	return MatchComponent ? MatchComponent->GetPoints() : 0;
}

int32 ABasketBallGameGameMode::GetTotalAttempts() const
{
	return MatchComponent ? MatchComponent->GetTotalAttempts() : 0;
}

int32 ABasketBallGameGameMode::GetSuccessfulShots() const
{
	return MatchComponent ? MatchComponent->GetSuccessfulShots() : 0;
}

int32 ABasketBallGameGameMode::GetCurrentStreak() const
{
	return MatchComponent ? MatchComponent->GetCurrentStreak() : 0;
}

int32 ABasketBallGameGameMode::GetBestStreak() const
{
	return MatchComponent ? MatchComponent->GetBestStreak() : 0;
}

float ABasketBallGameGameMode::GetEfficiency() const
{
	return MatchComponent ? MatchComponent->CalculateEfficiency() : 0.0f;
}

int32 ABasketBallGameGameMode::GetFinalScore() const
{
	return MatchComponent ? MatchComponent->CalculateFinalScore() : 0;
}

int32 ABasketBallGameGameMode::GetXP() const
{
	return MatchComponent ? MatchComponent->CalculateXP() : 0;
}

UBasketballMatchComponent* ABasketBallGameGameMode::GetMatchComponent() const
{
	return MatchComponent;
}

FBasketballGameSnapshot ABasketBallGameGameMode::GetGameSnapshot() const
{
	// Forward snapshot from MatchComponent (authority)
	// GameMode does NOT modify or compute anything
	if (!MatchComponent)
	{
		return FBasketballGameSnapshot(); // Return empty snapshot if no component
	}
	
	return MatchComponent->GetGameSnapshot();
}

void ABasketBallGameGameMode::RefreshAllPlayerHUD()
{
	FBasketballGameSnapshot Snapshot = GetGameSnapshot();

	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		ABasketBallGamePlayerController* PC =
			Cast<ABasketBallGamePlayerController>(It->Get());

		if (PC)
		{
			// Call a NON-RPC function
			PC->HandleServerHUDUpdate(Snapshot);
		}
	}
}

