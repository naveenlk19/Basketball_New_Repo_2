// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BasketballAITypes.h"
#include "BasketballTeammateCharacter.generated.h"

class ABasketBall;
class ABasketballTeammateController;

/**
 * ABasketballTeammateCharacter
 *
 * AI-controlled teammate pawn.
 * Possesed by ABasketballTeammateController which runs a Behavior Tree.
 *
 * Responsibilities (pawn-side only):
 *   - Expose current state for animation / debugging
 *   - Hold the list of offensive spacing spots
 *   - Know about the ball actor
 *
 * All decision logic lives in the controller / BT.
 */
UCLASS(Blueprintable, BlueprintType)
class BASKETBALLGAME_API ABasketballTeammateCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	ABasketballTeammateCharacter();

	virtual void BeginPlay() override;

	// =========================================================
	// Ball Reference
	// =========================================================

	/** The basketball tracked by this teammate. Auto-found in BeginPlay. */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Teammate|References")
	TObjectPtr<ABasketBall> TrackedBall;

	// =========================================================
	// Offensive Positioning
	// =========================================================

	/**
	 * Offensive spacing spots (ATargetPoints placed in the level).
	 * The controller picks the nearest unoccupied spot each decision cycle.
	 */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Teammate|Positioning")
	TArray<TObjectPtr<AActor>> OffensiveSpots;

	// =========================================================
	// State (read by animation BP and HUD/debug)
	// =========================================================

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Teammate|State")
	ETeammateState CurrentState = ETeammateState::Idle;

	/** Called by the controller to update the visible state. */
	UFUNCTION(BlueprintCallable, Category = "Teammate|State")
	void SetTeammateState(ETeammateState NewState);

	// =========================================================
	// Spot Selection (used by controller / BT tasks)
	// =========================================================

	/**
	 * Returns the nearest OffensiveSpot that is not currently occupied
	 * by another AI teammate. Returns nullptr if none available.
	 */
	UFUNCTION(BlueprintCallable, Category = "Teammate|Positioning")
	AActor* FindBestOffensiveSpot() const;
};