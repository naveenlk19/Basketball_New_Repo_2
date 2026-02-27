// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballMatchComponent.h"

UBasketballMatchComponent::UBasketballMatchComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	ResetStats();
}

void UBasketballMatchComponent::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Log, TEXT("BasketballMatchComponent: Initialized"));
}

// ======== Phase ========

void UBasketballMatchComponent::SetMatchPhase(EMatchPhase NewPhase)
{
	// Normal guard: once GameOver, only ForceSetMatchPhase can override.
	if (MatchPhase == EMatchPhase::GameOver)
	{
		UE_LOG(LogTemp, Warning, TEXT("BasketballMatchComponent: SetMatchPhase blocked – use ForceSetMatchPhase to exit GameOver"));
		return;
	}
	MatchPhase = NewPhase;
}

void UBasketballMatchComponent::ForceSetMatchPhase(EMatchPhase NewPhase)
{
	// Bypasses the GameOver guard. Only call from GameMode::RestartMatch().
	MatchPhase = NewPhase;
	UE_LOG(LogTemp, Warning, TEXT("BasketballMatchComponent: ForceSetMatchPhase -> %d"), (int32)NewPhase);
}

// ======== Shot Registration ========

void UBasketballMatchComponent::RegisterShotAttempt()
{
	TotalAttempts++;
	UE_LOG(LogTemp, Log, TEXT("BasketballMatchComponent: Shot attempt | TotalAttempts: %d"), TotalAttempts);
}

void UBasketballMatchComponent::RegisterShotSuccess(int32 PointValue)
{
	SuccessfulShots++;
	Points += PointValue;
	CurrentStreak++;

	if (CurrentStreak > BestStreak)
		BestStreak = CurrentStreak;

	HotHandMultiplier = 1.0f + (static_cast<float>(CurrentStreak) * 0.05f);

	UE_LOG(LogTemp, Log, TEXT("BasketballMatchComponent: Shot SUCCESS | Points: %d | Streak: %d | HotHand: %.2f | Efficiency: %.2f"),
		Points, CurrentStreak, HotHandMultiplier, CalculateEfficiency());
}

void UBasketballMatchComponent::RegisterShotMiss()
{
	FailedShots++;
	CurrentStreak = 0;
	HotHandMultiplier = 1.0f;

	UE_LOG(LogTemp, Log, TEXT("BasketballMatchComponent: Shot MISS | Streak reset | Efficiency: %.2f"),
		CalculateEfficiency());
}

// ======== Calculations ========

float UBasketballMatchComponent::CalculateEfficiency() const
{
	if (TotalAttempts == 0) return 0.f;
	return static_cast<float>(SuccessfulShots) / static_cast<float>(TotalAttempts);
}

int32 UBasketballMatchComponent::CalculateXP() const
{
	const float Efficiency = CalculateEfficiency();
	return (SuccessfulShots * 10) + (BestStreak * 5) + FMath::RoundToInt(Efficiency * 50.f);
}

int32 UBasketballMatchComponent::CalculateFinalScore() const
{
	const float Efficiency = CalculateEfficiency();
	return (Points * 10) + FMath::RoundToInt(Efficiency * 100.f) + (BestStreak * 5);
}

FBasketballGameSnapshot UBasketballMatchComponent::GetGameSnapshot() const
{
	FBasketballGameSnapshot Snapshot;
	Snapshot.Score          = Points;
	Snapshot.TotalAttempts  = TotalAttempts;
	Snapshot.SuccessfulShots = SuccessfulShots;
	Snapshot.CurrentStreak  = CurrentStreak;
	Snapshot.BestStreak     = BestStreak;
	Snapshot.Efficiency     = CalculateEfficiency();
	Snapshot.MatchPhase     = MatchPhase;
	Snapshot.TimeRemaining  = TimeRemaining;

	// Add this:
	if (MatchPhase == EMatchPhase::GameOver)
	{
		Snapshot.FinalScore = CalculateFinalScore();
		Snapshot.EarnedXP = CalculateXP();
	}
	return Snapshot;
}

// ======== Reset ========

void UBasketballMatchComponent::ResetStats()
{
	SuccessfulShots  = 0;
	FailedShots      = 0;
	TotalAttempts    = 0;
	Points           = 0;
	CurrentStreak    = 0;
	BestStreak       = 0;
	HotHandMultiplier = 1.f;
	TimeRemaining    = 0.f;

	UE_LOG(LogTemp, Log, TEXT("BasketballMatchComponent: Stats reset"));
}