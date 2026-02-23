// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballMatchComponent.h"

UBasketballMatchComponent::UBasketballMatchComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	// Initialize stats
	ResetStats();
}

void UBasketballMatchComponent::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Log, TEXT("BasketballMatchComponent: Initialized"));
}

void UBasketballMatchComponent::RegisterShotAttempt()
{
	// Increment total attempts (ball was launched)
	TotalAttempts++;
	
	UE_LOG(LogTemp, Log, TEXT("BasketballMatchComponent: Shot attempt registered | TotalAttempts: %d"), TotalAttempts);
}

void UBasketballMatchComponent::RegisterShotSuccess(int32 PointValue)
{
	// Increment successful shots
	SuccessfulShots++;
	
	// Add points
	Points += PointValue;
	
	// Update streak
	CurrentStreak++;
	
	// Update best streak
	if (CurrentStreak > BestStreak)
	{
		BestStreak = CurrentStreak;
	}
	
	// Update hot hand multiplier
	// Formula: 1.0 + (CurrentStreak * 0.05)
	HotHandMultiplier = 1.0f + (static_cast<float>(CurrentStreak) * 0.05f);
	
	UE_LOG(LogTemp, Log, TEXT("BasketballMatchComponent: Shot SUCCESS | Points: %d | Streak: %d | HotHand: %.2f | Efficiency: %.2f"),
		Points, CurrentStreak, HotHandMultiplier, CalculateEfficiency());
	
}

void UBasketballMatchComponent::RegisterShotMiss()
{
	// Increment failed shots
	FailedShots++;
	
	// Reset streak
	CurrentStreak = 0;
	
	// Reset hot hand multiplier
	HotHandMultiplier = 1.0f;
	
	UE_LOG(LogTemp, Log, TEXT("BasketballMatchComponent: Shot MISS | Streak reset | Efficiency: %.2f"), 
		CalculateEfficiency());
}

float UBasketballMatchComponent::CalculateEfficiency() const
{
	if (TotalAttempts == 0)
	{
		return 0.0f;
	}
	
	return static_cast<float>(SuccessfulShots) / static_cast<float>(TotalAttempts);
}

int32 UBasketballMatchComponent::CalculateXP() const
{
	const float Efficiency = CalculateEfficiency();
	
	// XP Formula (PROGRESSION ONLY - DERIVED, NOT STORED):
	// XP = (SuccessfulShots * 10) + (BestStreak * 5) + (Efficiency * 50)
	// 
	// Validation Example:
	// SuccessfulShots=12, BestStreak=4, Efficiency=0.66
	// XP = (12*10) + (4*5) + (0.66*50) = 120 + 20 + 33 = 173
	const int32 CalculatedXP = 
		(SuccessfulShots * 10) 
		+ (BestStreak * 5) 
		+ FMath::RoundToInt(Efficiency * 50.0f);
	
	return CalculatedXP;
}

int32 UBasketballMatchComponent::CalculateFinalScore() const
{
	const float Efficiency = CalculateEfficiency();
	
	// FinalScore Formula (COMPETITIVE ONLY - LEADERBOARD):
	// FinalScore = (Points * 10) + (Efficiency * 100) + (BestStreak * 5)
	// NOTE: Does NOT include XP or HotHandMultiplier
	// 
	// Validation Example:
	// Points=24, Efficiency=0.66, BestStreak=4
	// FinalScore = (24*10) + (0.66*100) + (4*5) = 240 + 66 + 20 = 326
	const int32 FinalScore = 
		(Points * 10) 
		+ FMath::RoundToInt(Efficiency * 100.0f) 
		+ (BestStreak * 5);
	
	return FinalScore;
}

FBasketballGameSnapshot UBasketballMatchComponent::GetGameSnapshot() const
{
	FBasketballGameSnapshot Snapshot;
	
	// Pure data extraction - no side effects
	Snapshot.Score = Points;
	Snapshot.TotalAttempts = TotalAttempts;
	Snapshot.SuccessfulShots = SuccessfulShots;
	Snapshot.CurrentStreak = CurrentStreak;
	Snapshot.BestStreak = BestStreak;
	Snapshot.Efficiency = CalculateEfficiency();
	
	return Snapshot;
}

void UBasketballMatchComponent::ResetStats()
{
	SuccessfulShots = 0;
	FailedShots = 0;
	TotalAttempts = 0;
	Points = 0;
	CurrentStreak = 0;
	BestStreak = 0;
	HotHandMultiplier = 1.0f;
	
	UE_LOG(LogTemp, Log, TEXT("BasketballMatchComponent: Stats reset"));
}
