// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasketballAITypes.h"
#include "BasketballTeammateController.generated.h"

class UBehaviorTree;
class ABasketBall;
class ABasketballTeammateCharacter;

/**
 * ABasketballTeammateController
 *
 * Drives ABasketballTeammateCharacter via a Behavior Tree.
 *
 * Blackboard keys written by this controller (C++ side):
 *   BallActor       (Object)  – ABasketBall reference
 *   TargetLocation  (Vector)  – current move destination
 *   TeammateState   (Enum)    – ETeammateState as uint8
 *   BallIsLoose     (Bool)    – true when ball is not held
 *
 * The BT asset is assigned in the Blueprint child class via BehaviorTreeAsset.
 */
UCLASS(Blueprintable, BlueprintType)
class BASKETBALLGAME_API ABasketballTeammateController : public AAIController
{
	GENERATED_BODY()

public:

	ABasketballTeammateController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaTime) override;

	// =========================================================
	// Behavior Tree
	// =========================================================

	/** Assign the BT asset in the Blueprint CDO. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Teammate|AI")
	TObjectPtr<UBehaviorTree> BehaviorTreeAsset;

	// =========================================================
	// State transitions (called from BT tasks or C++ logic)
	// =========================================================

	UFUNCTION(BlueprintCallable, Category = "Teammate|State")
	void SetTeammateState(ETeammateState NewState);

	UFUNCTION(BlueprintPure, Category = "Teammate|State")
	ETeammateState GetTeammateState() const { return CurrentState; }

	// =========================================================
	// Movement helpers (called by BT tasks)
	// =========================================================

	/** Move to the best offensive spacing spot. */
	UFUNCTION(BlueprintCallable, Category = "Teammate|Movement")
	void MoveToOffensiveSpot();

	/** Move directly toward the ball to retrieve it. */
	UFUNCTION(BlueprintCallable, Category = "Teammate|Movement")
	void MoveToBall();

	// =========================================================
	// Blackboard key names (public so BT tasks can reference them)
	// =========================================================

	static const FName BB_BallActor;
	static const FName BB_TargetLocation;
	static const FName BB_TeammateState;
	static const FName BB_BallIsLoose;

private:

	ETeammateState CurrentState = ETeammateState::Idle;

	// Tick-rate throttle: re-evaluate state every N seconds
	float StateUpdateInterval  = 0.5f;
	float TimeSinceLastUpdate  = 0.f;

	void UpdateBlackboard();
	void EvaluateState();

	ABasketballTeammateCharacter* GetTeammateCharacter() const;
};