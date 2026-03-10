// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BasketballAITypes.h"
#include "BasketballOpponentCharacter.generated.h"

class ABasketBall;

/**
 * ABasketballOpponentCharacter
 *
 * AI-controlled opponent pawn.
 * Possessed by ABasketballOpponentController which runs a Behavior Tree.
 *
 * Responsibilities:
 *   - Hold a reference to the ball
 *   - Know which player to guard
 *   - Expose current AI state for animation / debugging
 */
UCLASS(Blueprintable, BlueprintType)
class BASKETBALLGAME_API ABasketballOpponentCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	ABasketballOpponentCharacter();

	virtual void BeginPlay() override;

	// =========================================================
	// References
	// =========================================================

	/** Ball tracked by this opponent. Auto-found in BeginPlay. */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Opponent|References")
	TObjectPtr<ABasketBall> TrackedBall;

	/**
	 * The player (or character) this opponent is assigned to guard.
	 * Set from GameMode / Blueprint after teams are assigned.
	 */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Opponent|References")
	TObjectPtr<AActor> GuardTarget;

	/**
	 * Rim / basket location used for box-out positioning.
	 * Assign an ATargetPoint placed at the hoop in the level.
	 */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Opponent|References")
	TObjectPtr<AActor> RimTarget;

	// =========================================================
	// State
	// =========================================================

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Opponent|State")
	EOpponentState CurrentState = EOpponentState::GuardPlayer;

	UFUNCTION(BlueprintCallable, Category = "Opponent|State")
	void SetOpponentState(EOpponentState NewState);

	// =========================================================
	// Configurable distances
	// =========================================================

	/** How close the opponent stays to its guard target (cm). */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Opponent|Behavior")
	float GuardDistance = 150.f;

	/** How far from rim the opponent boxes out (cm). */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Opponent|Behavior")
	float BoxOutDistance = 200.f;
};
