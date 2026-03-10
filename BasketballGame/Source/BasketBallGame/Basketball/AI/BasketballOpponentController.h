// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasketballAITypes.h"
#include "BasketballOpponentController.generated.h"

class UBehaviorTree;
class ABasketBall;
class ABasketballOpponentCharacter;

/**
 * ABasketballOpponentController
 *
 * Drives ABasketballOpponentCharacter via a Behavior Tree.
 *
 * Blackboard keys written by this controller:
 *   BallActor       (Object)  – ABasketBall reference
 *   GuardTarget     (Object)  – actor being guarded
 *   RimTarget       (Object)  – basket actor for box-out
 *   TargetLocation  (Vector)  – current move destination
 *   OpponentState   (Enum)    – EOpponentState as uint8
 *   BallIsLoose     (Bool)    – true when ball is not held
 */
UCLASS(Blueprintable, BlueprintType)
class BASKETBALLGAME_API ABasketballOpponentController : public AAIController
{
	GENERATED_BODY()

public:

	ABasketballOpponentController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaTime) override;

	// =========================================================
	// Behavior Tree
	// =========================================================

	/** Assign in the Blueprint CDO. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Opponent|AI")
	TObjectPtr<UBehaviorTree> BehaviorTreeAsset;

	// =========================================================
	// State transitions
	// =========================================================

	UFUNCTION(BlueprintCallable, Category = "Opponent|State")
	void SetOpponentState(EOpponentState NewState);

	UFUNCTION(BlueprintPure, Category = "Opponent|State")
	EOpponentState GetOpponentState() const { return CurrentState; }

	// =========================================================
	// Blackboard key names
	// =========================================================

	static const FName BB_BallActor;
	static const FName BB_GuardTarget;
	static const FName BB_RimTarget;
	static const FName BB_TargetLocation;
	static const FName BB_OpponentState;
	static const FName BB_BallIsLoose;

private:

	EOpponentState CurrentState = EOpponentState::GuardPlayer;

	float StateUpdateInterval = 0.4f;
	float TimeSinceLastUpdate = 0.f;

	void EvaluateState();
	void UpdateBlackboard();

	ABasketballOpponentCharacter* GetOpponentCharacter() const;
};