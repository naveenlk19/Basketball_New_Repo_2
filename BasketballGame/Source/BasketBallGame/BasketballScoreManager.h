// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BasketballScoreManager.generated.h"

class ABasketBallHoop;

/** Delegate for score changes */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnScoreChanged, int32, NewScore, int32, TotalMakes, int32, TotalAttempts);

/** Delegate for timer updates */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimerUpdated, float, RemainingTime);

/** Delegate for game state changes */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameStarted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameEnded, int32, FinalScore);

/**
 * Manages basketball game scoring, timers, and statistics.
 * Attach to GameMode via CreateDefaultSubobject.
 * Automatically binds to all BasketballHoop actors in the level.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BASKETBALLGAME_API UBasketballScoreManager : public UActorComponent
{
	GENERATED_BODY()

public:
	UBasketballScoreManager();

	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// ======== Score Tracking ========

	/** Current total score */
	UPROPERTY(BlueprintReadOnly, Category = "Score")
	int32 TotalScore;

	/** Total successful baskets */
	UPROPERTY(BlueprintReadOnly, Category = "Score")
	int32 TotalMakes;

	/** Total shot attempts */
	UPROPERTY(BlueprintReadOnly, Category = "Score")
	int32 TotalAttempts;

	/** Shooting percentage (0-100) */
	UFUNCTION(BlueprintPure, Category = "Score")
	float GetShootingPercentage() const;

	/** Consecutive makes streak */
	UPROPERTY(BlueprintReadOnly, Category = "Score")
	int32 CurrentStreak;

	/** Best streak this session */
	UPROPERTY(BlueprintReadOnly, Category = "Score")
	int32 BestStreak;

	// ======== Round Timer ========

	/** Total round duration in seconds (0 = no timer) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer")
	float RoundDuration;

	/** Remaining time in current round */
	UPROPERTY(BlueprintReadOnly, Category = "Timer")
	float RemainingTime;

	/** Is the game currently active? */
	UPROPERTY(BlueprintReadOnly, Category = "Timer")
	bool bGameActive;

	// ======== Game Controls ========

	/** Start a new round */
	UFUNCTION(BlueprintCallable, Category = "Game")
	void StartGame();

	/** End the current round */
	UFUNCTION(BlueprintCallable, Category = "Game")
	void EndGame();

	/** Reset all scores and statistics */
	UFUNCTION(BlueprintCallable, Category = "Game")
	void ResetScore();

	/** Register a shot attempt (miss) */
	UFUNCTION(BlueprintCallable, Category = "Score")
	void RegisterAttempt();

	/** Add points to score (called by GameMode) */
	UFUNCTION(BlueprintCallable, Category = "Score")
	void AddScore(int32 Points);

	// ======== Events ========

	/** Called when score changes */
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnScoreChanged OnScoreChanged;

	/** Called every second with remaining time */
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnTimerUpdated OnTimerUpdated;

	/** Called when game starts */
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnGameStarted OnGameStarted;

	/** Called when game ends */
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnGameEnded OnGameEnded;

protected:
	/** Called when any hoop scores */
	UFUNCTION()
	void OnHoopScored(int32 Points);

	/** Find and bind to all hoops in the level */
	void BindToAllHoops();

	/** All hoops in the level */
	TArray<ABasketBallHoop*> RegisteredHoops;

	/** Timer tracking for broadcasting time updates */
	float LastBroadcastedTime;
};
