// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BasketballGlobalTypes.h"
#include "BasketballCommentarySubsystem.generated.h"

/**
 * UBasketballCommentarySubsystem
 *
 * A GameInstance-level subsystem that receives basketball match events
 * and reacts with commentary output.
 *
 * Architecture notes:
 * ─────────────────────────────────────────────────────────────────────
 *  • Lifetime  : Alive for the entire game session (GameInstance scope).
 *                Safe to call from GameMode, Blueprints, or any world actor.
 *
 *  • Access    : UGameInstance::GetSubsystem<UBasketballCommentarySubsystem>()
 *                or the Blueprint helper node "Get Subsystem".
 *
 *  • Expansion : Each public function is the integration point for a
 *                future voice/narrative engine.  Replace the UE_LOG body
 *                with a call to your TTS / dialogue manager without
 *                changing any call sites.
 *
 *  • Threading : All public functions must be called on the Game Thread.
 * ─────────────────────────────────────────────────────────────────────
 */
UCLASS()
class BASKETBALLGAME_API UBasketballCommentarySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	// -----------------------------------------------------------------------
	// USubsystem interface
	// -----------------------------------------------------------------------

	/** Called once when the GameInstance initialises. */
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	/** Called once when the GameInstance shuts down. */
	virtual void Deinitialize() override;

	// -----------------------------------------------------------------------
	// Match Event API
	// Call these from GameMode, BallHandler, Hoop, or any Blueprint.
	// -----------------------------------------------------------------------

	/**
	 * Called when the player successfully scores a basket.
	 * Future hook: trigger a "Nice shot!" voice line.
	 */
	UFUNCTION(BlueprintCallable, Category = "Basketball|Commentary")
	void OnShotMade();

	/**
	 * Called when a shot attempt fails to score.
	 * Future hook: trigger a "So close!" or crowd groan.
	 */
	UFUNCTION(BlueprintCallable, Category = "Basketball|Commentary")
	void OnShotMissed();

	/**
	 * Called when the player reaches a consecutive-makes streak.
	 * @param StreakCount  The current streak length (e.g. 3 = "On Fire!").
	 * Future hook: escalate commentary intensity based on StreakCount.
	 */
	UFUNCTION(BlueprintCallable, Category = "Basketball|Commentary")
	void OnStreakStarted(int32 StreakCount);

	/**
	 * Called when a new match begins (phase transitions to FirstHalf).
	 * Future hook: play an intro voice line or crowd ambience.
	 */
	UFUNCTION(BlueprintCallable, Category = "Basketball|Commentary")
	void OnGameStart();

	/**
	 * Called when the match ends (phase transitions to GameOver).
	 * Future hook: play a final score read-out or outro voice line.
	 */
	UFUNCTION(BlueprintCallable, Category = "Basketball|Commentary")
	void OnGameEnd();

private:

	// -----------------------------------------------------------------------
	// Internal state
	// Kept minimal — add fields here when integrating a voice engine.
	// -----------------------------------------------------------------------

	/** Counts total makes this session; reset on OnGameStart(). */
	int32 SessionMakes = 0;

	/** Counts total misses this session; reset on OnGameStart(). */
	int32 SessionMisses = 0;

	/** Tracks the peak streak seen this session; reset on OnGameStart(). */
	int32 PeakStreak = 0;
};