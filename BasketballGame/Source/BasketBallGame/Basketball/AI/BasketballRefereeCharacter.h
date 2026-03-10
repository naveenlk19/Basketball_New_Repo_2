// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BasketballGlobalTypes.h"
//#include "Basketball.h"
#include "BasketballRefereeCharacter.generated.h"

class ABasketBall;

/**
 * ABasketballRefereeCharacter
 *
 * The physical representation of the basketball referee on the court.
 * Controlled by ABasketballRefereeController via Behavior Tree.
 *
 * Responsibilities:
 *  - Provides the pawn body for the referee AI.
 *  - Exposes an event for external systems to notify of game events (foul, tip-off, etc.).
 *  - Continuously faces the ball actor each tick (driven by the controller).
 */
UCLASS(BlueprintType, Blueprintable)
class BASKETBALLGAME_API ABasketballRefereeCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	ABasketballRefereeCharacter();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	// -----------------------------------------------------------------------
	// Game Event Interface
	// -----------------------------------------------------------------------

	/**
	 * Called by the Behavior Tree or game logic to notify this referee of a
	 * match event. Override in Blueprints to trigger whistle animations, sounds, etc.
	 *
	 * @param NewPhase  The match phase to transition into.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Referee|Events")
	void OnMatchPhaseChanged(EMatchPhase NewPhase);
	virtual void OnMatchPhaseChanged_Implementation(EMatchPhase NewPhase);

	// -----------------------------------------------------------------------
	// Configuration
	// -----------------------------------------------------------------------

	/** How fast (degrees/second) the referee rotates to face the ball. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Referee|Config")
	float FaceBallRotationSpeed = 360.f;

	/**
	 * If true the referee will rotate to face the BallActor every tick.
	 * The controller also drives this, but this flag allows Blueprint override.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Referee|Config")
	bool bFaceBallEachTick = false;

	/** Cached reference to the ball. Set by the controller after possessing. */
	UPROPERTY(BlueprintReadOnly, Category = "Referee|State")
	TObjectPtr<AActor> TrackedBallActor;

	// -----------------------------------------------------------------------
	// Helpers
	// -----------------------------------------------------------------------

	/** Smoothly rotates the character to face TargetActor. */
	void FaceActorSmooth(const AActor* TargetActor, float DeltaTime);
};