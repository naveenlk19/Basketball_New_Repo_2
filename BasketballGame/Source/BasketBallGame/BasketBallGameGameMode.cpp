// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketBallGameGameMode.h"
#include "BasketballMatchComponent.h"
#include "BasketBAllGamePlayerController.h"
#include "BasketBAllGameCharacter.h"

ABasketBallGameGameMode::ABasketBallGameGameMode()
{
	MatchComponent = CreateDefaultSubobject<UBasketballMatchComponent>(TEXT("MatchComponent"));
}

void ABasketBallGameGameMode::BeginPlay()
{
	Super::BeginPlay();

	MatchComponent->SetMatchPhase(EMatchPhase::PreMatch);

	// 🔥 Push initial state to UI
	BroadcastSnapshot(MatchComponent->GetGameSnapshot());

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
	RefreshAllPlayerHUD();
	UE_LOG(LogTemp, Warning, TEXT("GameMode: Shot Success | Points: %d"), PointValue);
}

void ABasketBallGameGameMode::RegisterShotMiss()
{
	if (!MatchComponent) return;
	MatchComponent->RegisterShotMiss();
	RefreshAllPlayerHUD();
	UE_LOG(LogTemp, Warning, TEXT("GameMode: Shot Miss"));
}

// ========================
// Match System
// ========================

void ABasketBallGameGameMode::StartMatch()
{
	if (!MatchComponent) return;

	if (MatchComponent->GetMatchPhase() != EMatchPhase::PreMatch)
		return;

	MatchComponent->SetMatchPhase(EMatchPhase::FirstHalf);
	MatchComponent->SetTimeRemaining(MatchComponent->HalfDuration);

	ActivateAllPlayers(true);

	GetWorldTimerManager().SetTimer(
		MatchTimerHandle,
		this,
		&ABasketBallGameGameMode::HandleMatchTick,
		1.0f,
		true
	);

	BroadcastSnapshot(MatchComponent->GetGameSnapshot());
}

void ABasketBallGameGameMode::RestartMatch()
{
	if (!MatchComponent) return;

	// Stop any running timers first
	GetWorldTimerManager().ClearTimer(MatchTimerHandle);
	GetWorldTimerManager().ClearTimer(HalftimeTimerHandle);

	// Reset all statistics (streaks, score, attempts, etc.)
	MatchComponent->ResetStats();

	// Force phase back to PreMatch.
	// SetMatchPhase blocks GameOver->anything transitions,
	// so we call ForceSetMatchPhase which bypasses that guard.
	MatchComponent->ForceSetMatchPhase(EMatchPhase::PreMatch);

	// Reset timer display
	MatchComponent->SetTimeRemaining(0.f);

	// Push updated snapshot so HUD shows MainMenuPanel
	BroadcastSnapshot(MatchComponent->GetGameSnapshot());

	UE_LOG(LogTemp, Warning, TEXT("GameMode: Match restarted – back to PreMatch"));
}

void ABasketBallGameGameMode::ActivateAllPlayers(bool bActive)
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (APlayerController* PC = It->Get())
		{
			if (APawn* Pawn = PC->GetPawn())
			{
				if (ABasketBallGameCharacter* Character = Cast<ABasketBallGameCharacter>(Pawn))
				{
					Character->SetPlayerActive(bActive);
				}
			}
		}
	}
}

// ========================
// Match Timer
// ========================

void ABasketBallGameGameMode::HandleMatchTick()
{
	if (!MatchComponent) return;

	float NewTime = MatchComponent->GetTimeRemaining() - 1.f;
	MatchComponent->SetTimeRemaining(NewTime);

	if (NewTime <= 0.f)
	{
		GetWorldTimerManager().ClearTimer(MatchTimerHandle);

		if (MatchComponent->GetMatchPhase() == EMatchPhase::FirstHalf)
		{
			StartHalftime();
		}
		else if (MatchComponent->GetMatchPhase() == EMatchPhase::SecondHalf)
		{
			MatchComponent->SetMatchPhase(EMatchPhase::GameOver); 
			//BroadcastSnapshot(MatchComponent->GetGameSnapshot());
		}

		BroadcastSnapshot(MatchComponent->GetGameSnapshot());
		return;
	}

	BroadcastSnapshot(MatchComponent->GetGameSnapshot());
}

void ABasketBallGameGameMode::StartHalftime()
{
	MatchComponent->SetMatchPhase(EMatchPhase::Halftime);
	UE_LOG(LogTemp, Warning, TEXT("Halftime started"));

	GetWorldTimerManager().SetTimer(
		HalftimeTimerHandle,
		this,
		&ABasketBallGameGameMode::StartSecondHalf,
		HalftimePerformanceDuration,
		false
	);

	BroadcastSnapshot(MatchComponent->GetGameSnapshot());
}

void ABasketBallGameGameMode::StartSecondHalf()
{
	UE_LOG(LogTemp, Warning, TEXT("Second half started"));

	MatchComponent->SetMatchPhase(EMatchPhase::SecondHalf);
	MatchComponent->SetTimeRemaining(MatchComponent->HalfDuration);

	GetWorldTimerManager().SetTimer(
		MatchTimerHandle,
		this,
		&ABasketBallGameGameMode::HandleMatchTick,
		1.0f,
		true
	);

	BroadcastSnapshot(MatchComponent->GetGameSnapshot());
}

void ABasketBallGameGameMode::BroadcastSnapshot(const FBasketballGameSnapshot& Snapshot)
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (ABasketBallGamePlayerController* PC = Cast<ABasketBallGamePlayerController>(It->Get()))
		{
			PC->HandleServerHUDUpdate(Snapshot);
		}
	}
}

// ========================
// Team
// ========================

int32 ABasketBallGameGameMode::AssignTeamToPlayer(APlayerController* PC)
{
	return int32();
}

// ========================
// Snapshot / Read-Only
// ========================

FBasketballGameSnapshot ABasketBallGameGameMode::GetGameSnapshot() const
{
	if (!MatchComponent)
		return FBasketballGameSnapshot();

	return MatchComponent->GetGameSnapshot();
}

void ABasketBallGameGameMode::RefreshAllPlayerHUD()
{
	FBasketballGameSnapshot Snapshot = GetGameSnapshot();

	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (ABasketBallGamePlayerController* PC = Cast<ABasketBallGamePlayerController>(It->Get()))
		{
			PC->HandleServerHUDUpdate(Snapshot);
		}
	}
}

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
	return MatchComponent ? MatchComponent->CalculateEfficiency() : 0.f;
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

