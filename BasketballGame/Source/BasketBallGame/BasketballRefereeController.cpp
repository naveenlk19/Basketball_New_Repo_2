// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballRefereeController.h"
#include "BasketballRefereeCharacter.h"
#include "Basketball.h"
#include "Engine/TargetPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BlackboardData.h"
#include "Navigation/PathFollowingComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

// ---------------------------------------------------------------------------
// Blackboard key names
// ---------------------------------------------------------------------------
const FName ABasketballRefereeController::BB_BallActor   = FName("BallActor");
const FName ABasketballRefereeController::BB_CourtCenter = FName("CourtCenter");
const FName ABasketballRefereeController::BB_MatchPhase  = FName("MatchPhase");

// ---------------------------------------------------------------------------
// Constructor
// ---------------------------------------------------------------------------

ABasketballRefereeController::ABasketballRefereeController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	bSetControlRotationFromPawnOrientation = false;
}

// ---------------------------------------------------------------------------
// BeginPlay
// ---------------------------------------------------------------------------

void ABasketballRefereeController::BeginPlay()
{
	Super::BeginPlay();

	// Auto-find ball if not assigned
	if (!TrackedBall)
	{
		AActor* Found = UGameplayStatics::GetActorOfClass(GetWorld(), ABasketBall::StaticClass());
		TrackedBall = Cast<ABasketBall>(Found);

		if (TrackedBall) {
			UE_LOG(LogTemp, Log, TEXT("RefereeController: Auto-found ball: %s"), *TrackedBall->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("RefereeController: No ABasketBall found in world."));
		}
	}

	// Init blackboard if an asset was assigned
	if (BlackboardAsset)
	{
		UBlackboardComponent* RawBB = nullptr;
		UseBlackboard(BlackboardAsset, RawBB);
		Blackboard = RawBB;
	}

	SyncBlackboard();
}

// ---------------------------------------------------------------------------
// OnPossess
// ---------------------------------------------------------------------------

void ABasketballRefereeController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	UE_LOG(LogTemp, Log, TEXT("RefereeController: Possessed %s"), InPawn ? *InPawn->GetName() : TEXT("null"));
}

// ---------------------------------------------------------------------------
// Tick
// ---------------------------------------------------------------------------

void ABasketballRefereeController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bWaitingForArrival)
	{
		return;
	}

	APawn* ControlledPawn = GetPawn();
	if (!ControlledPawn || !CourtCenterTarget)
	{
		bWaitingForArrival = false;
		return;
	}

	const FVector Destination = CourtCenterTarget->GetActorLocation();
	const float DistSq = FVector::DistSquaredXY(ControlledPawn->GetActorLocation(), Destination);

	if (DistSq <= FMath::Square(CourtCenterArrivalRadius))
	{
		bWaitingForArrival = false;
		OnArrivedAtCourtCenter();
	}

	// Keep updating ball-facing target during TipOff phase
	if (CurrentMatchPhase == EMatchPhase::TipOff && TrackedBall)
	{
		if (ABasketballRefereeCharacter* RefChar = GetRefereeCharacter())
		{
			RefChar->BallFacingTarget = TrackedBall->GetActorLocation();
		}
	}
}

// ---------------------------------------------------------------------------
// Public: StartMatchTipOff
// ---------------------------------------------------------------------------

void ABasketballRefereeController::StartMatchTipOff()
{
	if (CurrentMatchPhase != EMatchPhase::PreMatch)
	{
		UE_LOG(LogTemp, Warning, TEXT("RefereeController: StartMatchTipOff ignored — phase is not PreMatch."));
		return;
	}

	if (!CourtCenterTarget)
	{
		UE_LOG(LogTemp, Warning, TEXT("RefereeController: CourtCenterTarget is not assigned — tip-off aborted. Place an ATargetPoint at center court and assign it."));
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("RefereeController: Starting tip-off — moving to %s."), *CourtCenterTarget->GetName());
	MoveToCourtCenter();
}

// ---------------------------------------------------------------------------
// Internal: MoveToCourtCenter
// ---------------------------------------------------------------------------

void ABasketballRefereeController::MoveToCourtCenter()
{
	APawn* ControlledPawn = GetPawn();
	if (!ControlledPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("RefereeController: No possessed pawn — cannot navigate."));
		return;
	}

	const FVector Destination = CourtCenterTarget->GetActorLocation();
	const FAIMoveRequest MoveReq(Destination);
	MoveTo(MoveReq);

	bWaitingForArrival = true;

	// Push updated CourtCenter to blackboard immediately
	SyncBlackboard();
}

// ---------------------------------------------------------------------------
// Internal: OnArrivedAtCourtCenter
// ---------------------------------------------------------------------------

void ABasketballRefereeController::OnArrivedAtCourtCenter()
{
	UE_LOG(LogTemp, Log, TEXT("RefereeController: Arrived at court center. Waiting %.1fs..."), TipOffDelay);

	SetMatchPhase(EMatchPhase::TipOff);

	if (ABasketballRefereeCharacter* RefChar = GetRefereeCharacter())
	{
		RefChar->bFaceBall = true;
		if (TrackedBall)
		{
			RefChar->BallFacingTarget = TrackedBall->GetActorLocation();
		}
	}

	GetWorldTimerManager().SetTimer(
		TipOffDelayHandle,
		this,
		&ABasketballRefereeController::BeginTipOffSequence,
		TipOffDelay,
		false
	);
}

// ---------------------------------------------------------------------------
// Internal: BeginTipOffSequence
// ---------------------------------------------------------------------------

void ABasketballRefereeController::BeginTipOffSequence()
{
	UE_LOG(LogTemp, Log, TEXT("RefereeController: BeginTipOffSequence."));

	if (ABasketballRefereeCharacter* RefChar = GetRefereeCharacter())
	{
		RefChar->PlayTossAnimation();
	}

	TossBall();
}

// ---------------------------------------------------------------------------
// Public: TossBall
// ---------------------------------------------------------------------------

void ABasketballRefereeController::TossBall()
{
	if (!TrackedBall)
	{
		UE_LOG(LogTemp, Warning, TEXT("RefereeController: TossBall — TrackedBall is null."));
		return;
	}

	UStaticMeshComponent* BallMesh = TrackedBall->BallMesh;
	if (!BallMesh)
	{
		UE_LOG(LogTemp, Warning, TEXT("RefereeController: TossBall — BallMesh is null."));
		return;
	}

	TrackedBall->EnablePhysics();

	const FVector Impulse(0.f, 0.f, TipOffImpulseStrength);
	BallMesh->AddImpulse(Impulse);

	UE_LOG(LogTemp, Log, TEXT("RefereeController: Ball tossed — Z impulse %.0f."), TipOffImpulseStrength);

	SetMatchPhase(EMatchPhase::FirstHalf);

	if (ABasketballRefereeCharacter* RefChar = GetRefereeCharacter())
	{
		RefChar->bFaceBall = false;
	}
}

// ---------------------------------------------------------------------------
// Internal: SetMatchPhase
// ---------------------------------------------------------------------------

void ABasketballRefereeController::SetMatchPhase(EMatchPhase NewPhase)
{
	CurrentMatchPhase = NewPhase;
	UE_LOG(LogTemp, Log, TEXT("RefereeController: MatchPhase -> %s"), *UEnum::GetValueAsString(NewPhase));
	SyncBlackboard();
}

// ---------------------------------------------------------------------------
// Internal: SyncBlackboard
// ---------------------------------------------------------------------------

void ABasketballRefereeController::SyncBlackboard()
{
	UBlackboardComponent* BB = GetBlackboardComponent();
	if (!BB)
	{
		return;
	}

	if (TrackedBall)
	{
		BB->SetValueAsObject(BB_BallActor, TrackedBall);
	}

	// Derive CourtCenter from the TargetPoint if assigned
	if (CourtCenterTarget)
	{
		BB->SetValueAsVector(BB_CourtCenter, CourtCenterTarget->GetActorLocation());
	}

	BB->SetValueAsEnum(BB_MatchPhase, static_cast<uint8>(CurrentMatchPhase));
}

// ---------------------------------------------------------------------------
// Helper: GetRefereeCharacter
// ---------------------------------------------------------------------------

ABasketballRefereeCharacter* ABasketballRefereeController::GetRefereeCharacter() const
{
	return Cast<ABasketballRefereeCharacter>(GetPawn());
}