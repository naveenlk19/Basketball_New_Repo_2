// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballTeammateController.h"
#include "BasketballTeammateCharacter.h"
#include "Basketball.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

// ---------------------------------------------------------------------------
// Blackboard key names
// ---------------------------------------------------------------------------
const FName ABasketballTeammateController::BB_BallActor      = FName("BallActor");
const FName ABasketballTeammateController::BB_TargetLocation = FName("TargetLocation");
const FName ABasketballTeammateController::BB_TeammateState  = FName("TeammateState");
const FName ABasketballTeammateController::BB_BallIsLoose    = FName("BallIsLoose");

// ---------------------------------------------------------------------------
// Constructor
// ---------------------------------------------------------------------------

ABasketballTeammateController::ABasketballTeammateController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	bSetControlRotationFromPawnOrientation = false;
}

// ---------------------------------------------------------------------------
// BeginPlay
// ---------------------------------------------------------------------------

void ABasketballTeammateController::BeginPlay()
{
	Super::BeginPlay();
}

// ---------------------------------------------------------------------------
// OnPossess — start BT
// ---------------------------------------------------------------------------

void ABasketballTeammateController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (!BehaviorTreeAsset)
	{
		UE_LOG(LogTemp, Warning, TEXT("TeammateController: BehaviorTreeAsset is not assigned — assign it in the Blueprint CDO."));
		return;
	}

	// RunBehaviorTree initializes the Blackboard automatically from the BT asset
	if (RunBehaviorTree(BehaviorTreeAsset))
	{
		UE_LOG(LogTemp, Log, TEXT("TeammateController: BT started for %s."), *InPawn->GetName());
		UpdateBlackboard();
	}
}

// ---------------------------------------------------------------------------
// Tick — periodic state evaluation
// ---------------------------------------------------------------------------

void ABasketballTeammateController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeSinceLastUpdate += DeltaTime;
	if (TimeSinceLastUpdate >= StateUpdateInterval)
	{
		TimeSinceLastUpdate = 0.f;
		EvaluateState();
		UpdateBlackboard();
	}
}

// ---------------------------------------------------------------------------
// State evaluation
// ---------------------------------------------------------------------------

void ABasketballTeammateController::EvaluateState()
{
	ABasketballTeammateCharacter* Teammate = GetTeammateCharacter();
	if (!Teammate)
	{
		return;
	}

	ABasketBall* Ball = Teammate->TrackedBall.Get();

	if (!Ball)
	{
		SetTeammateState(ETeammateState::Idle);
		return;
	}

	const bool bBallLoose = !Ball->bIsHeld;

	if (bBallLoose)
	{
		// Ball is loose — chase it
		SetTeammateState(ETeammateState::RetrieveBall);
	}
	else if (Ball->BallOwner != nullptr)
	{
		// Someone has the ball — check if it's "us" (human player or this teammate)
		// Simple heuristic: if ball owner is not this pawn, go to support / off-ball spot
		if (Ball->BallOwner == Teammate)
		{
			// We have the ball — stay in current position or pass (future)
			SetTeammateState(ETeammateState::SupportBallHandler);
		}
		else
		{
			SetTeammateState(ETeammateState::OffBallMovement);
		}
	}
	else
	{
		SetTeammateState(ETeammateState::Idle);
	}
}

// ---------------------------------------------------------------------------
// SetTeammateState
// ---------------------------------------------------------------------------

void ABasketballTeammateController::SetTeammateState(ETeammateState NewState)
{
	CurrentState = NewState;

	if (ABasketballTeammateCharacter* Teammate = GetTeammateCharacter())
	{
		Teammate->SetTeammateState(NewState);
	}
}

// ---------------------------------------------------------------------------
// Blackboard update
// ---------------------------------------------------------------------------

void ABasketballTeammateController::UpdateBlackboard()
{
	UBlackboardComponent* BB = GetBlackboardComponent();
	if (!BB)
	{
		return;
	}

	ABasketballTeammateCharacter* Teammate = GetTeammateCharacter();
	if (!Teammate)
	{
		return;
	}

	ABasketBall* Ball = Teammate->TrackedBall.Get();

	// BallActor
	if (Ball)
	{
		BB->SetValueAsObject(BB_BallActor, Ball);
	}

	// BallIsLoose
	const bool bLoose = Ball ? !Ball->bIsHeld : false;
	BB->SetValueAsBool(BB_BallIsLoose, bLoose);

	// TeammateState
	BB->SetValueAsEnum(BB_TeammateState, static_cast<uint8>(CurrentState));

	// TargetLocation — derive based on state
	FVector TargetLoc = Teammate->GetActorLocation(); // default: stay put

	if (CurrentState == ETeammateState::RetrieveBall && Ball)
	{
		TargetLoc = Ball->GetActorLocation();
	}
	else if (CurrentState == ETeammateState::OffBallMovement)
	{
		if (AActor* BestSpot = Teammate->FindBestOffensiveSpot())
		{
			TargetLoc = BestSpot->GetActorLocation();
		}
	}

	BB->SetValueAsVector(BB_TargetLocation, TargetLoc);
}

// ---------------------------------------------------------------------------
// Movement helpers
// ---------------------------------------------------------------------------

void ABasketballTeammateController::MoveToOffensiveSpot()
{
	ABasketballTeammateCharacter* Teammate = GetTeammateCharacter();
	if (!Teammate)
	{
		return;
	}

	AActor* BestSpot = Teammate->FindBestOffensiveSpot();
	if (BestSpot)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, BestSpot->GetActorLocation());
	}
}

void ABasketballTeammateController::MoveToBall()
{
	ABasketballTeammateCharacter* Teammate = GetTeammateCharacter();
	if (!Teammate || !Teammate->TrackedBall)
	{
		return;
	}

	UAIBlueprintHelperLibrary::SimpleMoveToActor(this, Teammate->TrackedBall.Get());
}

// ---------------------------------------------------------------------------
// Helper
// ---------------------------------------------------------------------------

ABasketballTeammateCharacter* ABasketballTeammateController::GetTeammateCharacter() const
{
	return Cast<ABasketballTeammateCharacter>(GetPawn());
}