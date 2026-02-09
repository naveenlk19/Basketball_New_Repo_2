// Copyright Epic Games, Inc. All Rights Reserved.

#include "BallHandlerComponent.h"
#include "Basketball.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"

UBallHandlerComponent::UBallHandlerComponent()
{
	// Component doesn't need to tick
	PrimaryComponentTick.bCanEverTick = false;

	// Default values
	BallSocketName = FName(TEXT("hand_r_ball")); // Common socket name for right hand
	PickupRange = 200.0f; // 2 meters
	MaxShotPower = 1500.0f; // 15 meters/sec
	ChargeTime = 1.5f; // 1.5 seconds for full charge
	CurrentCharge = 0.0f;
	bIsCharging = false;
	CurrentBall = nullptr;
}

void UBallHandlerComponent::BeginPlay()
{
	Super::BeginPlay();
}

bool UBallHandlerComponent::TryPickupBall()
{
	// Already holding a ball
	if (HasBall())
	{
		return false;
	}

	// Find nearest ball
	ABasketball* NearestBall = FindNearestBall();
	if (!NearestBall)
	{
		return false;
	}

	// Check if ball can be picked up
	if (!NearestBall->CanBePickedUp())
	{
		return false;
	}

	// Get owning character
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (!Character)
	{
		return false;
	}

	USkeletalMeshComponent* Mesh = Character->GetMesh();
	if (!Mesh || !Mesh->DoesSocketExist(BallSocketName))
	{
		return false;
	}

	// Disable ball physics before attaching
	NearestBall->DisablePhysics();
	NearestBall->bIsHeld = true;

	// Attach ball to the HAND socket (not pelvis)
	NearestBall->AttachToComponent(
		Mesh,
		FAttachmentTransformRules::SnapToTargetNotIncludingScale,
		BallSocketName
	);
	UE_LOG(LogTemp, Warning, TEXT("Hand socket valid: %d"),
		Mesh->DoesSocketExist(BallSocketName));
	CurrentBall = NearestBall;
	return true;
}


void UBallHandlerComponent::DropBall()
{
	if (!HasBall())
	{
		return;
	}

	// Update ball state before detaching
	CurrentBall->bIsHeld = false;
	
	CurrentBall->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	CurrentBall->EnablePhysics(); // or your existing logic

	CurrentBall = nullptr;
}


ABasketball* UBallHandlerComponent::FindNearestBall()
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return nullptr;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		return nullptr;
	}

	// Get all basketball actors in world
	TArray<AActor*> FoundBalls;
	UGameplayStatics::GetAllActorsOfClass(World, ABasketball::StaticClass(), FoundBalls);

	if (FoundBalls.Num() == 0)
	{
		return nullptr;
	}

	// Find closest ball within range
	ABasketball* ClosestBall = nullptr;
	float ClosestDistance = PickupRange;
	FVector OwnerLocation = Owner->GetActorLocation();

	for (AActor* Actor : FoundBalls)
	{
		ABasketball* Ball = Cast<ABasketball>(Actor);
		if (!Ball || !Ball->CanBePickedUp())
		{
			continue;
		}

		float Distance = FVector::Dist(OwnerLocation, Ball->GetActorLocation());
		if (Distance < ClosestDistance)
		{
			ClosestDistance = Distance;
			ClosestBall = Ball;
		}
	}

	return ClosestBall;
}

void UBallHandlerComponent::SetBall(ABasketball* Ball)
{
	if (!Ball)
	{
		return;
	}

	// Drop current ball if holding one
	if (HasBall())
	{
		DropBall();
	}

	// Attach new ball
	Ball->AttachToCharacter(GetOwner(), BallSocketName);
	CurrentBall = Ball;
}

void UBallHandlerComponent::StartCharging()
{
	// Can only charge if holding a ball
	if (!HasBall())
	{
		return;
	}

	// Start charging
	bIsCharging = true;
	ChargeStartTime = GetWorld()->GetTimeSeconds();
	CurrentCharge = 0.0f;
}

void UBallHandlerComponent::ShootBall()
{
	// Must be charging and have a ball
	if (!bIsCharging || !HasBall())
	{
		return;
	}

	// Calculate final charge (0.0 to 1.0)
	float ElapsedTime = GetWorld()->GetTimeSeconds() - ChargeStartTime;
	CurrentCharge = FMath::Clamp(ElapsedTime / ChargeTime, 0.0f, 1.0f);

	// Get owner character
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (!Character)
	{
		return;
	}

	// Find camera component for aim direction
	UCameraComponent* Camera = Character->FindComponentByClass<UCameraComponent>();
	FVector LaunchDirection;
	
	if (Camera)
	{
		// Use camera forward vector for aim
		LaunchDirection = Camera->GetForwardVector();
	}
	else
	{
		// Fallback to actor forward if no camera
		LaunchDirection = Character->GetActorForwardVector();
	}

	// Add upward arc (45 degrees at full charge, 30 degrees at minimum)
	float ArcAngle = FMath::Lerp(30.0f, 45.0f, CurrentCharge);
	FRotator ArcRotation = FRotator(ArcAngle, 0.0f, 0.0f);
	LaunchDirection = ArcRotation.RotateVector(LaunchDirection);
	LaunchDirection.Normalize();

	// Calculate launch velocity based on charge
	float LaunchSpeed = MaxShotPower * FMath::Lerp(0.3f, 1.0f, CurrentCharge); // Minimum 30% power
	FVector LaunchVelocity = LaunchDirection * LaunchSpeed;

	// Get ball reference before dropping
	ABasketball* BallToShoot = CurrentBall;

	// Detach ball (but keep reference)
	CurrentBall->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	CurrentBall->bIsHeld = false;
	CurrentBall = nullptr;

	// Enable physics and apply launch velocity
	BallToShoot->EnablePhysics();
	BallToShoot->BallMesh->SetPhysicsLinearVelocity(LaunchVelocity);

	// Reset charge state
	bIsCharging = false;
	CurrentCharge = 0.0f;

	UE_LOG(LogTemp, Log, TEXT("Shot ball with %d%% power (%.0f cm/s)"), 
		FMath::RoundToInt(CurrentCharge * 100.0f), LaunchSpeed);
}
