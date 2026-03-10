// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballRefereeController.h"
#include "BasketballRefereeCharacter.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Enum.h"

// -----------------------------------------------------------------------
// Blackboard Key Name Definitions
// -----------------------------------------------------------------------
const FName ABasketballRefereeController::BBKey_BallActor   = TEXT("BallActor");
const FName ABasketballRefereeController::BBKey_CourtCenter  = TEXT("CourtCenter");
const FName ABasketballRefereeController::BBKey_MatchPhase   = TEXT("MatchPhase");

// -----------------------------------------------------------------------
// Constructor
// -----------------------------------------------------------------------
ABasketballRefereeController::ABasketballRefereeController()
{
	PrimaryActorTick.bCanEverTick = true;

	// Start behavior tree automatically when the pawn is possessed.
	bStartAILogicOnPossess = false; // We do it manually in OnPossess for control.

	// Attach the controller to the pawn so environment queries work correctly.
	bAttachToPawn = true;
}

// -----------------------------------------------------------------------
// Possession
// -----------------------------------------------------------------------
void ABasketballRefereeController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// Initialize blackboard BEFORE running the behavior tree.
	UBlackboardComponent* BlackboardComp = nullptr;

	if (IsValid(RefereeBlackboard))
	{
		UseBlackboard(RefereeBlackboard, BlackboardComp);
	}

	// Start the behavior tree.
	if (IsValid(RefereebehaviorTree))
	{
		RunBehaviorTree(RefereebehaviorTree);
	}

	// Tell the character to start facing the ball each tick.
	if (ABasketballRefereeCharacter* RefChar = Cast<ABasketballRefereeCharacter>(InPawn))
	{
		RefChar->bFaceBallEachTick = true;
	}
}

void ABasketballRefereeController::OnUnPossess()
{
	// Disable ball-facing before unpossessing.
	if (ABasketballRefereeCharacter* RefChar = Cast<ABasketballRefereeCharacter>(GetPawn()))
	{
		RefChar->bFaceBallEachTick = false;
	}

	Super::OnUnPossess();
}

// -----------------------------------------------------------------------
// Tick
// -----------------------------------------------------------------------
void ABasketballRefereeController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateBallFacing(DeltaTime);
}

void ABasketballRefereeController::UpdateBallFacing(float DeltaTime)
{
	if (!Blackboard) return;

	AActor* Ball = Cast<AActor>(Blackboard->GetValueAsObject(BBKey_BallActor));
	if (!IsValid(Ball)) return;

	if (ABasketballRefereeCharacter* RefChar = Cast<ABasketballRefereeCharacter>(GetPawn()))
	{
		// Sync the cached ball reference so the character tick can use it.
		RefChar->TrackedBallActor = Ball;
	}
}

// -----------------------------------------------------------------------
// Blackboard Setters / Getters
// -----------------------------------------------------------------------
void ABasketballRefereeController::SetBallActor(AActor* Ball)
{
	if (Blackboard)
	{
		Blackboard->SetValueAsObject(BBKey_BallActor, Ball);

		// Also update the character's cached reference immediately.
		if (ABasketballRefereeCharacter* RefChar = Cast<ABasketballRefereeCharacter>(GetPawn()))
		{
			RefChar->TrackedBallActor = Ball;
		}
	}
}

void ABasketballRefereeController::SetCourtCenter(FVector Location)
{
	if (Blackboard)
	{
		Blackboard->SetValueAsVector(BBKey_CourtCenter, Location);
	}
}

void ABasketballRefereeController::SetMatchPhase(EMatchPhase NewPhase)
{
	if (Blackboard)
	{
		Blackboard->SetValueAsEnum(BBKey_MatchPhase, static_cast<uint8>(NewPhase));
	}

	// Notify the physical character so it can react (play animations, sounds, etc.)
	if (ABasketballRefereeCharacter* RefChar = Cast<ABasketballRefereeCharacter>(GetPawn()))
	{
		RefChar->OnMatchPhaseChanged(NewPhase);
	}
}

AActor* ABasketballRefereeController::GetBallActor() const
{
	if (Blackboard)
	{
		return Cast<AActor>(Blackboard->GetValueAsObject(BBKey_BallActor));
	}
	return nullptr;
}

EMatchPhase ABasketballRefereeController::GetMatchPhase() const
{
	if (Blackboard)
	{
		return static_cast<EMatchPhase>(Blackboard->GetValueAsEnum(BBKey_MatchPhase));
	}
	return EMatchPhase::PreMatch;
}