// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballRefereeCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimInstance.h"
#include "Kismet/KismetMathLibrary.h"

ABasketballRefereeCharacter::ABasketballRefereeCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// AI-friendly movement: orient body to movement direction
	if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
	{
		MoveComp->bOrientRotationToMovement = true;
		MoveComp->RotationRate = FRotator(0.f, 360.f, 0.f);
	}

	// Do not inherit controller yaw — AI handles rotation manually
	bUseControllerRotationYaw = false;
}

void ABasketballRefereeCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ABasketballRefereeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TickFaceBall(DeltaTime);
}

// ---------------------------------------------------------------------------
// Animation
// ---------------------------------------------------------------------------

void ABasketballRefereeCharacter::PlayTossAnimation()
{
	if (!TossAnimMontage)
	{
		UE_LOG(LogTemp, Warning, TEXT("RefereeCharacter: TossAnimMontage is not set — skipping anim."));
		return;
	}

	if (UAnimInstance* AnimInst = GetMesh()->GetAnimInstance())
	{
		AnimInst->Montage_Play(TossAnimMontage, 1.f);
		UE_LOG(LogTemp, Log, TEXT("RefereeCharacter: Playing toss animation."));
	}
}

// ---------------------------------------------------------------------------
// Facing
// ---------------------------------------------------------------------------

void ABasketballRefereeCharacter::TickFaceBall(float DeltaTime)
{
	if (!bFaceBall)
	{
		return;
	}

	const FVector MyLocation = GetActorLocation();
	const FVector ToTarget = (BallFacingTarget - MyLocation);

	// Only rotate if the target is meaningfully far away (avoids jitter)
	if (ToTarget.SizeSquared2D() < 1.f)
	{
		return;
	}

	const FRotator TargetRot = UKismetMathLibrary::FindLookAtRotation(MyLocation, BallFacingTarget);
	const FRotator FlatTarget(0.f, TargetRot.Yaw, 0.f); // Ignore pitch/roll

	const FRotator CurrentRot = GetActorRotation();
	const FRotator SmoothedRot = FMath::RInterpTo(CurrentRot, FlatTarget, DeltaTime, FacingInterpSpeed);

	SetActorRotation(SmoothedRot);
}