// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BasketballGlobalTypes.h"
#include "BasketballMatchComponent.generated.h"

/**
 * Basketball Match Component
 * 
 * Authority component for all match statistics and scoring logic.
 * Lives in GameMode. No replication, no UI references, no GameState references.
 * Pure gameplay logic only.
 * 
 * Architecture:
 * - GameMode owns this component (authority)
 * - GameMode pushes snapshots to GameState (future replication)
 * - UI reads from GameState only
 * - XP is DERIVED (calculated on-demand), not stored
 * 
 * Shot Flow (Two-Stage):
 * 1. BallHandler launches ball -> RegisterShotAttempt() -> TotalAttempts++
 * 2. Hoop detects outcome -> RegisterShotSuccess() OR RegisterShotMiss()
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BASKETBALLGAME_API UBasketballMatchComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBasketballMatchComponent();

	// ======== Shot Registration (Authority) ========
	
	/** Register a shot attempt (ball launched) - called by GameMode when BallHandler shoots */
	void RegisterShotAttempt();
	
	/** Register a successful shot (ball scored) - called by GameMode when Hoop detects make */
	void RegisterShotSuccess(int32 PointValue);
	
	/** Register a shot miss (ball missed hoop) - called by GameMode when shot fails */
	void RegisterShotMiss();

	// ======== Calculation Functions (Const) ========
	
	/** Calculate current shooting efficiency (0.0 - 1.0) */
	UFUNCTION(BlueprintCallable, Category = "Basketball|Match Stats")
	float CalculateEfficiency() const;
	
	/** 
	 * Calculate total XP earned (progression metric, end of match only)
	 * Formula: XP = (SuccessfulShots * 10) + (BestStreak * 5) + (Efficiency * 50)
	 * NOTE: XP is DERIVED, not stored. Call this at match end and persist externally.
	 */
	UFUNCTION(BlueprintCallable, Category = "Basketball|Match Stats")
	int32 CalculateXP() const;
	
	/** 
	 * Calculate final competitive score (leaderboard metric)
	 * Formula: FinalScore = (Points * 10) + (Efficiency * 100) + (BestStreak * 5)
	 * NOTE: Does NOT include XP or HotHandMultiplier
	 */
	UFUNCTION(BlueprintCallable, Category = "Basketball|Match Stats")
	int32 CalculateFinalScore() const;

	/**
	 * Get complete gameplay snapshot for UI consumption
	 * Returns pure data - no side effects
	 */
	FBasketballGameSnapshot GetGameSnapshot() const;

	// ======== Getters (Const, BlueprintPure) ========
	
	UFUNCTION(BlueprintPure, Category = "Basketball|Match Stats")
	int32 GetSuccessfulShots() const { return SuccessfulShots; }
	
	UFUNCTION(BlueprintPure, Category = "Basketball|Match Stats")
	int32 GetFailedShots() const { return FailedShots; }
	
	UFUNCTION(BlueprintPure, Category = "Basketball|Match Stats")
	int32 GetTotalAttempts() const { return TotalAttempts; }
	
	UFUNCTION(BlueprintPure, Category = "Basketball|Match Stats")
	int32 GetPoints() const { return Points; }
	
	UFUNCTION(BlueprintPure, Category = "Basketball|Match Stats")
	int32 GetCurrentStreak() const { return CurrentStreak; }
	
	UFUNCTION(BlueprintPure, Category = "Basketball|Match Stats")
	int32 GetBestStreak() const { return BestStreak; }
	
	UFUNCTION(BlueprintPure, Category = "Basketball|Match Stats")
	float GetHotHandMultiplier() const { return HotHandMultiplier; }

	// ======== Reset ========
	
	/** Reset all match statistics (called at match start) */
	UFUNCTION(BlueprintCallable, Category = "Basketball|Match Stats")
	void ResetStats();

protected:
	virtual void BeginPlay() override;

private:
	// ======== Core Statistics (Private, Authority Only) ========
	
	/** Total successful shots (makes) */
	int32 SuccessfulShots;
	
	/** Total failed shots (misses) */
	int32 FailedShots;
	
	/** Total shot attempts (incremented when ball is launched) */
	int32 TotalAttempts;
	
	/** Total points scored (SuccessfulShots * PointValue) */
	int32 Points;
	
	/** Current consecutive makes streak */
	int32 CurrentStreak;
	
	/** Best streak this match */
	int32 BestStreak;
	
	/** Hot hand multiplier (1.0 base + 0.05 per streak) */
	float HotHandMultiplier;
	
	// NOTE: XP is NOT stored here. It is derived via CalculateXP().
};
