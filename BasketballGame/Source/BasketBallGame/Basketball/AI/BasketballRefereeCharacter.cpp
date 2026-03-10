// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballRefereeCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

ABasketballRefereeCharacter::ABasketballRefereeCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Referee does not rotate with the controller — rotation is handled
	// manually in Tick so the character smoothly faces the ball.
	bUseControllerRotationYaw   = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll  = false;

	// Use orient-to-movement when navigating; we override yaw manually when watching ball.
	if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
	{
		MoveComp->bOrientRotationToMovement = true;
		MoveComp->RotationRate              = FRotator(0.f, 360.f, 0.f);
		MoveComp->bUseControllerDesiredRotation = false;
	}
}

void ABasketballRefereeCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ABasketballRefereeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Only rotate toward the ball when the flag is set and we have a valid target.
	// The controller sets bFaceBallEachTick = true when in "watching" state.
	if (bFaceBallEachTick && IsValid(TrackedBallActor))
	{
		FaceActorSmooth(TrackedBallActor, DeltaTime);
	}
}

void ABasketballRefereeCharacter::FaceActorSmooth(const AActor* TargetActor, float DeltaTime)
{
	if (!TargetActor) return;

	const FVector ToTarget = (TargetActor->GetActorLocation() - GetActorLocation()).GetSafeNormal();
	if (ToTarget.IsNearlyZero()) return;

	const FRotator CurrentRot = GetActorRotation();
	const FRotator TargetRot  = UKismetMathLibrary::MakeRotFromX(ToTarget);

	// Interpolate only yaw so the referee stays upright.
	const FRotator NewRot = FMath::RInterpConstantTo(
		CurrentRot,
		FRotator(CurrentRot.Pitch, TargetRot.Yaw, CurrentRot.Roll),
		DeltaTime,
		FaceBallRotationSpeed
	);

	SetActorRotation(NewRot);
}

void ABasketballRefereeCharacter::OnMatchPhaseChanged_Implementation(EMatchPhase NewPhase)
{
	// Default C++ implementation — intentionally minimal.
	// Override in Blueprint to add whistle sounds, animations, UI feedback, etc.
	UE_LOG(LogTemp, Log, TEXT("[Referee] Match phase changed to: %d"), static_cast<int32>(NewPhase));
}