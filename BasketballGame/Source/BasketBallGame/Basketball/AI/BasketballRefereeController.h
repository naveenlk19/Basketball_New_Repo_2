// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasketballGlobalTypes.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "BasketballRefereeController.generated.h"

//class UBehaviorTree;
//class UBlackboardData;
//class UBlackboardComponent;

/**
 * ABasketballRefereeController
 *
 * AI Controller that drives the basketball referee via a Behavior Tree.
 *
 * Blackboard keys (defined in BB_BasketballReferee):
 *  - BallActor    (Object)  : The basketball pawn/actor to watch.
 *  - CourtCenter  (Vector)  : World-space position the referee returns to.
 *  - MatchPhase   (Enum)    : Current EMatchPhase value.
 *
 * The controller:
 *  1. On possession, initialises the blackboard and starts the BT.
 *  2. Exposes Blueprint-callable helpers to update blackboard keys.
 *  3. Tells the possessed character to face the ball every tick.
 */
UCLASS(BlueprintType, Blueprintable)
class BASKETBALLGAME_API ABasketballRefereeController : public AAIController
{
	GENERATED_BODY()

public:

	ABasketballRefereeController();

	// -----------------------------------------------------------------------
	// Assets (assign in Blueprint child class or CDO Details panel)
	// -----------------------------------------------------------------------

	/** The Behavior Tree asset to run. Assign BB_BasketballReferee as its blackboard. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Referee|AI")
	TObjectPtr<UBehaviorTree> RefereebehaviorTree;

	/** The Blackboard asset. Must match the BT's blackboard. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Referee|AI")
	TObjectPtr<UBlackboardData> RefereeBlackboard;


	// -----------------------------------------------------------------------
	// Blackboard Key Names — single source of truth to avoid typos
	// -----------------------------------------------------------------------

	static const FName BBKey_BallActor;
	static const FName BBKey_CourtCenter;
	static const FName BBKey_MatchPhase;

	// -----------------------------------------------------------------------
	// Public API (callable from Game Mode / Blueprint)
	// -----------------------------------------------------------------------

	/** Set the ball actor the referee tracks. */
	UFUNCTION(BlueprintCallable, Category = "Referee|Blackboard")
	void SetBallActor(AActor* Ball);

	/** Set the court center position the referee homes to. */
	UFUNCTION(BlueprintCallable, Category = "Referee|Blackboard")
	void SetCourtCenter(FVector Location);

	/** Transition the match to a new phase, updating the blackboard and notifying the character. */
	UFUNCTION(BlueprintCallable, Category = "Referee|Blackboard")
	void SetMatchPhase(EMatchPhase NewPhase);

	/** Returns the currently tracked ball actor from the blackboard. */
	UFUNCTION(BlueprintPure, Category = "Referee|Blackboard")
	AActor* GetBallActor() const;

	/** Returns the current match phase from the blackboard. */
	UFUNCTION(BlueprintPure, Category = "Referee|Blackboard")
	EMatchPhase GetMatchPhase() const;

protected:

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	virtual void Tick(float DeltaTime) override;

private:

	/** Points the referee character at the ball every tick. */
	void UpdateBallFacing(float DeltaTime);
};