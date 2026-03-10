// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballScoreManager.h"
#include "BasketballHoop.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

UBasketballScoreManager::UBasketballScoreManager()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;

	// Score defaults
	TotalScore = 0;
	TotalMakes = 0;
	TotalAttempts = 0;
	CurrentStreak = 0;
	BestStreak = 0;

	// Timer defaults
	RoundDuration = 60.0f; // 60 second rounds
	RemainingTime = 0.0f;
	bGameActive = false;
	LastBroadcastedTime = 0.0f;
}

void UBasketballScoreManager::BeginPlay()
{
	Super::BeginPlay();

	// Find all hoops in level and bind to their score events
	BindToAllHoops();

	UE_LOG(LogTemp, Log, TEXT("BasketballScoreManager: Bound to %d hoops"), RegisteredHoops.Num());
}

void UBasketballScoreManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bGameActive || RoundDuration <= 0.0f)
	{
		return;
	}

	// Update timer
	RemainingTime -= DeltaTime;

	// Broadcast time updates every second
	float CurrentSecond = FMath::FloorToFloat(RemainingTime);
	if (CurrentSecond != LastBroadcastedTime)
	{
		LastBroadcastedTime = CurrentSecond;
		OnTimerUpdated.Broadcast(FMath::Max(0.0f, RemainingTime));
	}

	// Check if time is up
	if (RemainingTime <= 0.0f)
	{
		RemainingTime = 0.0f;
		EndGame();
	}
}

void UBasketballScoreManager::BindToAllHoops()
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	TArray<AActor*> FoundHoops;
	UGameplayStatics::GetAllActorsOfClass(World, ABasketBallHoop::StaticClass(), FoundHoops);

	for (AActor* Actor : FoundHoops)
	{
		ABasketBallHoop* Hoop = Cast<ABasketBallHoop>(Actor);
		if (Hoop)
		{
			/*Hoop->OnScored.AddDynamic(this, &UBasketballScoreManager::OnHoopScored);
			RegisteredHoops.Add(Hoop);*/

			UE_LOG(LogTemp, Log, TEXT("BasketballScoreManager: Bound to hoop: %s"), *Hoop->GetName());
		}
	}
}

void UBasketballScoreManager::OnHoopScored(int32 Points)
{
	// Update score
	TotalScore += Points;
	TotalMakes++;
	TotalAttempts++;

	// Update streak
	CurrentStreak++;
	if (CurrentStreak > BestStreak)
	{
		BestStreak = CurrentStreak;
	}

	// Broadcast score change
	OnScoreChanged.Broadcast(TotalScore, TotalMakes, TotalAttempts);

	UE_LOG(LogTemp, Warning, TEXT("SCORE! +%d | Total: %d | Makes: %d/%d (%.1f%%) | Streak: %d (Best: %d)"),
		Points, TotalScore, TotalMakes, TotalAttempts, GetShootingPercentage(), CurrentStreak, BestStreak);
}

float UBasketballScoreManager::GetShootingPercentage() const
{
	if (TotalAttempts == 0)
	{
		return 0.0f;
	}
	return (float)TotalMakes / (float)TotalAttempts * 100.0f;
}

void UBasketballScoreManager::StartGame()
{
	ResetScore();
	RemainingTime = RoundDuration;
	bGameActive = true;
	LastBroadcastedTime = FMath::FloorToFloat(RoundDuration);

	OnGameStarted.Broadcast();
	OnTimerUpdated.Broadcast(RemainingTime);

	UE_LOG(LogTemp, Warning, TEXT("GAME STARTED! Duration: %.0f seconds"), RoundDuration);
}

void UBasketballScoreManager::EndGame()
{
	bGameActive = false;

	OnGameEnded.Broadcast(TotalScore);

	UE_LOG(LogTemp, Warning, TEXT("GAME OVER! Final Score: %d | Makes: %d/%d (%.1f%%) | Best Streak: %d"),
		TotalScore, TotalMakes, TotalAttempts, GetShootingPercentage(), BestStreak);
}

void UBasketballScoreManager::ResetScore()
{
	TotalScore = 0;
	TotalMakes = 0;
	TotalAttempts = 0;
	CurrentStreak = 0;
	BestStreak = 0;

	OnScoreChanged.Broadcast(0, 0, 0);
}

void UBasketballScoreManager::RegisterAttempt()
{
	TotalAttempts++;
	CurrentStreak = 0; // Reset streak on miss

	OnScoreChanged.Broadcast(TotalScore, TotalMakes, TotalAttempts);

	UE_LOG(LogTemp, Log, TEXT("Shot missed. Makes: %d/%d (%.1f%%)"),
		TotalMakes, TotalAttempts, GetShootingPercentage());
}

void UBasketballScoreManager::AddScore(int32 Points)
{
	// Update score totals
	TotalScore += Points;
	TotalMakes++;

	// Update streak
	CurrentStreak++;
	if (CurrentStreak > BestStreak)
	{
		BestStreak = CurrentStreak;
	}

	// Broadcast score change
	OnScoreChanged.Broadcast(TotalScore, TotalMakes, TotalAttempts);

	UE_LOG(LogTemp, Display, TEXT("BasketballScoreManager: AddScore called - +%d points | Total: %d | Makes: %d/%d | Streak: %d"), Points, TotalScore, TotalMakes, TotalAttempts, CurrentStreak);
}
