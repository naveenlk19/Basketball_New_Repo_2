// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasketballGlobalTypes.h"
#include "BasketballRefereeController.generated.h"

class UBlackboardComponent;
class ABasketBall;
class ABasketballRefereeCharacter;
class ATargetPoint;

/**
 * ABasketballRefereeController
 *
 * AI Controller for the basketball referee.
 * Owns the match phase state machine: PreMatch -> TipOff -> FirstHalf.
 *
 * Blackboard keys (written from C++, readable by BT tasks):
 *   BallActor   (Object)  – tracked ABasketBall
 *   CourtCenter (Vector)  – tip-off world position (derived from CourtCenterTarget)
 *   MatchPhase  (Enum)    – current EMatchPhase as uint8
 */
UCLASS(Blueprintable, BlueprintType)
class BASKETBALLGAME_API ABasketballRefereeController : public AAIController
{
	GENERATED_BODY()

public:

	ABasketballRefereeController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void OnPossess(APawn* InPawn) override;

	// =========================================================
	// Match Phase API
	// =========================================================

	/** Kick off the tip-off sequence. Call this from GameMode or Blueprint. */
	UFUNCTION(BlueprintCallable, Category = "Referee|Match")
	void StartMatchTipOff();

	/** Toss the ball: enables physics and applies upward impulse. */
	UFUNCTION(BlueprintCallable, Category = "Referee|Match")
	void TossBall();

	/** Read-only access to the current match phase. */
	UFUNCTION(BlueprintPure, Category = "Referee|Match")
	EMatchPhase GetCurrentMatchPhase() const { return CurrentMatchPhase; }

	// =========================================================
	// Configurable Properties
	// =========================================================

	/** Upward impulse applied to the ball (Z axis). */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Referee|TipOff")
	float TipOffImpulseStrength = 80000.f;

	/** Seconds after arrival at court center before the toss fires. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Referee|TipOff")
	float TipOffDelay = 2.f;

	/** Arrival acceptance radius (cm). */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Referee|TipOff")
	float CourtCenterArrivalRadius = 80.f;

	// =========================================================
	// World References
	// =========================================================

	/** Basketball actor. Auto-found in BeginPlay if not assigned. */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Referee|References")
	TObjectPtr<ABasketBall> TrackedBall;

	/**
	 * Place an ATargetPoint at center court in the level and assign it here.
	 * The referee will navigate to this actor's location on tip-off.
	 */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Referee|TipOff")
	TObjectPtr<ATargetPoint> CourtCenterTarget;

	// =========================================================
	// Blackboard (optional BT integration)
	// =========================================================

	/** Assign a Blackboard asset if you want BT tasks to read referee state. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Referee|AI")
	TObjectPtr<UBlackboardData> BlackboardAsset;

private:

	// ---- Phase State ----
	EMatchPhase CurrentMatchPhase = EMatchPhase::PreMatch;
	void SetMatchPhase(EMatchPhase NewPhase);

	// ---- Tip-Off internal flow ----
	void MoveToCourtCenter();
	void OnArrivedAtCourtCenter();
	void BeginTipOffSequence();

	bool bWaitingForArrival = false;

	FTimerHandle TipOffDelayHandle;

	ABasketballRefereeCharacter* GetRefereeCharacter() const;

	// ---- Blackboard helpers ----
	void SyncBlackboard();

	static const FName BB_BallActor;
	static const FName BB_CourtCenter;
	static const FName BB_MatchPhase;
};