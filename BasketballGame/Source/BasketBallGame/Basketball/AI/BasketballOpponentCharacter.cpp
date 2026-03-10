// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballOpponentCharacter.h"
#include "Basketball.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

ABasketballOpponentCharacter::ABasketballOpponentCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
	{
		MoveComp->bOrientRotationToMovement = true;
		MoveComp->RotationRate               = FRotator(0.f, 400.f, 0.f);
	}

	bUseControllerRotationYaw = false;
}

void ABasketballOpponentCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Auto-find ball if not editor-assigned
	if (!TrackedBall)
	{
		AActor* Found = UGameplayStatics::GetActorOfClass(GetWorld(), ABasketBall::StaticClass());
		TrackedBall = Cast<ABasketBall>(Found);
	}
}

void ABasketballOpponentCharacter::SetOpponentState(EOpponentState NewState)
{
	CurrentState = NewState;
}