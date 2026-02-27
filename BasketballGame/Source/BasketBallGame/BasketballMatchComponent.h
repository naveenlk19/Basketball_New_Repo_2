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
 *   GameMode owns this component (authority).
 *   GameMode pushes snapshots to PlayerControllers for HUD refresh.
 *   UI reads snapshot only – never touches this component directly.
 *
 * Shot Flow (Two-Stage):
 *   1. BallHandler launches ball  -> RegisterShotAttempt()  -> TotalAttempts++
 *   2. Hoop detects outcome       -> RegisterShotSuccess()  OR  RegisterShotMiss()
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BASKETBALLGAME_API UBasketballMatchComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UBasketballMatchComponent();

	// ======== Shot Registration (Authority) ========

	void RegisterShotAttempt();
	void RegisterShotSuccess(int32 PointValue);
	void RegisterShotMiss();

	// ======== Calculation Functions (Const) ========

	UFUNCTION(BlueprintCallable, Category = "Basketball|Match Stats")
	float CalculateEfficiency() const;

	UFUNCTION(BlueprintCallable, Category = "Basketball|Match Stats")
	int32 CalculateXP() const;

	UFUNCTION(BlueprintCallable, Category = "Basketball|Match Stats")
	int32 CalculateFinalScore() const;

	/** Get complete gameplay snapshot for UI consumption. No side effects. */
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

	/** Reset all match statistics (called at match start / restart) */
	UFUNCTION(BlueprintCallable, Category = "Basketball|Match Stats")
	void ResetStats();

	// ======== Phase ========

	UFUNCTION(BlueprintPure)
	EMatchPhase GetMatchPhase() const { return MatchPhase; }

	/**
	 * Normal phase transition. Blocks exit from GameOver to prevent
	 * accidental progression. Use ForceSetMatchPhase for intentional restart.
	 */
	void SetMatchPhase(EMatchPhase NewPhase);

	/**
	 * Force phase to any value, including PreMatch when coming from GameOver.
	 * Only GameMode::RestartMatch() should call this.
	 */
	void ForceSetMatchPhase(EMatchPhase NewPhase);

	// ======== Timer Data ========

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Basketball|Match")
	float HalfDuration = 60.f;

	void SetTimeRemaining(float NewTime) { TimeRemaining = NewTime; }
	float GetTimeRemaining() const { return TimeRemaining; }

protected:
	virtual void BeginPlay() override;

private:

	int32 SuccessfulShots;
	int32 FailedShots;
	int32 TotalAttempts;
	int32 Points;
	int32 CurrentStreak;
	int32 BestStreak;
	float HotHandMultiplier;
	float TimeRemaining;

	UPROPERTY(VisibleAnywhere)
	EMatchPhase MatchPhase = EMatchPhase::PreMatch;
};