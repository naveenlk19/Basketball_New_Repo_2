// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballTeammateCharacter.h"
#include "Basketball.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

ABasketballTeammateCharacter::ABasketballTeammateCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
	{
		MoveComp->bOrientRotationToMovement = true;
		MoveComp->RotationRate               = FRotator(0.f, 400.f, 0.f);
	}

	bUseControllerRotationYaw = false;
}

void ABasketballTeammateCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Auto-find ball if not editor-assigned
	if (!TrackedBall)
	{
		AActor* Found = UGameplayStatics::GetActorOfClass(GetWorld(), ABasketBall::StaticClass());
		TrackedBall = Cast<ABasketBall>(Found);
	}
}

// ---------------------------------------------------------------------------

void ABasketballTeammateCharacter::SetTeammateState(ETeammateState NewState)
{
	CurrentState = NewState;
}

// ---------------------------------------------------------------------------

AActor* ABasketballTeammateCharacter::FindBestOffensiveSpot() const
{
	if (OffensiveSpots.IsEmpty())
	{
		return nullptr;
	}

	// Collect all teammate locations in the world to check occupancy
	TArray<FVector> OccupiedLocations;
	TArray<AActor*> AllTeammates;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABasketballTeammateCharacter::StaticClass(), AllTeammates);

	for (AActor* Teammate : AllTeammates)
	{
		if (Teammate && Teammate != this)
		{
			// Check if this teammate is currently near a spot
			for (const TObjectPtr<AActor>& Spot : OffensiveSpots)
			{
				if (Spot && FVector::DistSquared(Teammate->GetActorLocation(), Spot->GetActorLocation()) < FMath::Square(150.f))
				{
					OccupiedLocations.Add(Spot->GetActorLocation());
				}
			}
		}
	}

	// Pick the nearest unoccupied spot
	AActor* BestSpot       = nullptr;
	float   BestDistSq     = FLT_MAX;
	const FVector MyLoc    = GetActorLocation();

	for (const TObjectPtr<AActor>& Spot : OffensiveSpots)
	{
		if (!Spot)
		{
			continue;
		}

		const FVector SpotLoc = Spot->GetActorLocation();
		bool bOccupied        = false;

		for (const FVector& OccLoc : OccupiedLocations)
		{
			if (FVector::DistSquared(SpotLoc, OccLoc) < FMath::Square(50.f))
			{
				bOccupied = true;
				break;
			}
		}

		if (!bOccupied)
		{
			const float DistSq = FVector::DistSquared(MyLoc, SpotLoc);
			if (DistSq < BestDistSq)
			{
				BestDistSq = DistSq;
				BestSpot   = Spot.Get();
			}
		}
	}

	return BestSpot;
}