// Copyright Epic Games, Inc. All Rights Reserved.

#include "BallHandlerComponent.h"
#include "Basketball.h"
#include "BasketBallGameGameMode.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

UBallHandlerComponent::UBallHandlerComponent()
{
	// Enable tick for trajectory preview updates
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;

	// Ball handling defaults
	BallSocketName = FName(TEXT("hand_r_ball"));
	PickupRange = 200.0f;
	CurrentBall = nullptr;

	// Shooting defaults
	MaxShotPower = 1500.0f;
	MinPowerFraction = 0.4f;
	ChargeTime = 1.5f;
	CurrentCharge = 0.0f;
	bIsCharging = false;
	MinArcAngle = 45.0f;
	MaxArcAngle = 55.0f;

	// Trajectory preview defaults
	TrajectoryPointCount = 30;
	TrajectoryTimeStep = 0.05f; // 50ms between points
	bShowTrajectory = true;
}

void UBallHandlerComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UBallHandlerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsCharging && HasBall())
	{
		// Update charge value in real-time
		float ElapsedTime = GetWorld()->GetTimeSeconds() - ChargeStartTime;
		CurrentCharge = FMath::Clamp(ElapsedTime / ChargeTime, 0.0f, 1.0f);

		// Update trajectory preview
		if (bShowTrajectory)
		{
			UpdateTrajectoryPreview();
		}
	}
}

// ======== Ball Handling ========

bool UBallHandlerComponent::TryPickupBall()
{
	if (HasBall())
	{
		return false;
	}

	ABasketBall* NearestBall = FindNearestBall();
	if (!NearestBall)
	{
		return false;
	}

	if (!NearestBall->CanBePickedUp())
	{
		return false;
	}

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

	NearestBall->DisablePhysics();
	NearestBall->bIsHeld = true;

	NearestBall->AttachToComponent(
		Mesh,
		FAttachmentTransformRules::SnapToTargetNotIncludingScale,
		BallSocketName
	);

	CurrentBall = NearestBall;
	UE_LOG(LogTemp, Log, TEXT("Picked up ball: %s"), *NearestBall->GetName());
	return true;
}

void UBallHandlerComponent::DropBall()
{
	if (!HasBall())
	{
		return;
	}

	CurrentBall->bIsHeld = false;
	CurrentBall->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	CurrentBall->EnablePhysics();
	CurrentBall = nullptr;

	// Clear trajectory if showing
	ClearTrajectoryPreview();
}

ABasketBall* UBallHandlerComponent::FindNearestBall()
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

	TArray<AActor*> FoundBalls;
	UGameplayStatics::GetAllActorsOfClass(World, ABasketBall::StaticClass(), FoundBalls);

	if (FoundBalls.Num() == 0)
	{
		return nullptr;
	}

	ABasketBall* ClosestBall = nullptr;
	float ClosestDistance = PickupRange;
	FVector OwnerLocation = Owner->GetActorLocation();

	for (AActor* Actor : FoundBalls)
	{
		ABasketBall* Ball = Cast<ABasketBall>(Actor);
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

void UBallHandlerComponent::SetBall(ABasketBall* Ball)
{
	if (!Ball)
	{
		return;
	}

	if (HasBall())
	{
		DropBall();
	}

	Ball->AttachToCharacter(GetOwner(), BallSocketName);
	CurrentBall = Ball;
}

// ======== Shooting ========

void UBallHandlerComponent::StartCharging()
{
	if (!HasBall())
	{
		return;
	}

	bIsCharging = true;
	ChargeStartTime = GetWorld()->GetTimeSeconds();
	CurrentCharge = 0.0f;

	UE_LOG(LogTemp, Log, TEXT("Started charging shot"));
}

FVector UBallHandlerComponent::CalculateLaunchVelocity() const
{
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (!Character)
	{
		return FVector::ZeroVector;
	}

	// Get aim direction from camera
	UCameraComponent* Camera = Character->FindComponentByClass<UCameraComponent>();
	FVector AimDirection;

	if (Camera)
	{
		AimDirection = Camera->GetForwardVector();
	}
	else
	{
		AimDirection = Character->GetActorForwardVector();
	}

	// Flatten aim to horizontal plane
	FVector HorizontalAim = FVector(AimDirection.X, AimDirection.Y, 0.0f).GetSafeNormal();

	// Interpolate arc angle based on charge
	float ArcAngleDeg = FMath::Lerp(MinArcAngle, MaxArcAngle, CurrentCharge);
	float ArcAngleRad = FMath::DegreesToRadians(ArcAngleDeg);

	// Combine horizontal aim with upward component
	FVector LaunchDirection = HorizontalAim * FMath::Cos(ArcAngleRad) + FVector::UpVector * FMath::Sin(ArcAngleRad);

	// Calculate speed: interpolate between min and max power
	float LaunchSpeed = MaxShotPower * FMath::Lerp(MinPowerFraction, 1.0f, CurrentCharge);

	return LaunchDirection * LaunchSpeed;
}

void UBallHandlerComponent::ShootBall()
{
	if (!bIsCharging || !HasBall())
	{
		return;
	}

	// Final charge clamp
	const float ElapsedTime = GetWorld()->GetTimeSeconds() - ChargeStartTime;
	CurrentCharge = FMath::Clamp(ElapsedTime / ChargeTime, 0.0f, 1.0f);

	const FVector LaunchVelocity = CalculateLaunchVelocity();
	if (LaunchVelocity.IsNearlyZero())
	{
		bIsCharging = false;
		CurrentCharge = 0.0f;
		ClearTrajectoryPreview();
		return;
	}

	ABasketBall* BallToShoot = CurrentBall;
	if (!BallToShoot)
	{
		return;
	}

	// Detach ball from hand
	BallToShoot->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	BallToShoot->bIsHeld = false;

	BallToShoot->EnablePhysics();
	BallToShoot->BallMesh->SetPhysicsLinearVelocity(LaunchVelocity);

	BallToShoot->MarkAsShot();
	CurrentBall = nullptr;

	//// 🔥 CRITICAL: Mark shot state
	//BallToShoot->bWasShot = true;
	//BallToShoot->BallMesh->SetGenerateOverlapEvents(true);
	//BallToShoot->bHasScoredThisShot = false;

	// Apply physics
	BallToShoot->EnablePhysics();
	BallToShoot->BallMesh->SetPhysicsLinearVelocity(LaunchVelocity);

	UE_LOG(LogTemp, Warning,
		TEXT("Shot ball | Charge=%.2f | Speed=%.0f"),
		CurrentCharge,
		LaunchVelocity.Size());

	// Register attempt with authority
	if (UWorld* World = GetWorld())
	{
		if (ABasketBallGameGameMode* GM = World->GetAuthGameMode<ABasketBallGameGameMode>())
		{
			GM->RegisterShotAttempt();
		}
	}

	// Reset charging
	bIsCharging = false;
	CurrentCharge = 0.0f;

	ClearTrajectoryPreview();
}

// ======== Trajectory Preview ========

TArray<FVector> UBallHandlerComponent::CalculateTrajectoryPoints(const FVector& StartPos, const FVector& LaunchVelocity) const
{
	TArray<FVector> Points;
	Points.Reserve(TrajectoryPointCount);

	// Gravity (UE default is -980 cm/s^2)
	const float Gravity = GetWorld()->GetGravityZ(); // Typically -980

	for (int32 i = 0; i < TrajectoryPointCount; i++)
	{
		float Time = i * TrajectoryTimeStep;

		// Physics projectile formula: P = P0 + V*t + 0.5*g*t^2
		FVector Point = StartPos
			+ LaunchVelocity * Time
			+ FVector(0.0f, 0.0f, 0.5f * Gravity * Time * Time);

		Points.Add(Point);

		// Stop if point goes below start position (ball hit the ground)
		if (i > 5 && Point.Z < StartPos.Z - 200.0f)
		{
			break;
		}
	}

	return Points;
}

void UBallHandlerComponent::UpdateTrajectoryPreview()
{
	if (!HasBall() || !CurrentBall)
	{
		return;
	}

	// Get ball position as start of trajectory
	FVector StartPos = CurrentBall->GetActorLocation();

	// Get current launch velocity based on charge
	FVector LaunchVelocity = CalculateLaunchVelocity();

	if (LaunchVelocity.IsNearlyZero())
	{
		return;
	}

	// Calculate trajectory points
	CachedTrajectoryPoints = CalculateTrajectoryPoints(StartPos, LaunchVelocity);

	// Draw debug lines for trajectory
	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	for (int32 i = 0; i < CachedTrajectoryPoints.Num() - 1; i++)
	{
		// Fade color from white to orange along the arc
		float Alpha = 1.0f - (float(i) / float(CachedTrajectoryPoints.Num()));
		FColor LineColor = FColor(
			255,
			FMath::Lerp(165, 255, Alpha), // Orange to yellow
			FMath::Lerp(0, 100, Alpha),
			FMath::Clamp(int32(Alpha * 255), 50, 255)
		);

		DrawDebugLine(
			World,
			CachedTrajectoryPoints[i],
			CachedTrajectoryPoints[i + 1],
			LineColor,
			false,   // persistent
			0.0f,    // lifetime (0 = one frame)
			0,       // depth priority
			2.0f     // line thickness
		);
	}

	// Draw small sphere at predicted landing
	if (CachedTrajectoryPoints.Num() > 0)
	{
		DrawDebugSphere(
			World,
			CachedTrajectoryPoints.Last(),
			12.0f,   // radius
			8,       // segments
			FColor::Orange,
			false,
			0.0f     // one frame
		);
	}
}

void UBallHandlerComponent::ClearTrajectoryPreview()
{
	CachedTrajectoryPoints.Empty();
	// Debug lines with 0 lifetime auto-clear on next frame
}
