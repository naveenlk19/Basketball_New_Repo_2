// Copyright Epic Games, Inc. All Rights Reserved.

#include "BallHandlerComponent.h"
#include "Basketball.h"
#include "BasketBallGameGameMode.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "BasketBallHoop.h"
#include "BasketBallGameCharacter.h"

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
	CachedCharacter = Cast<ABasketBallGameCharacter>(GetOwner());

}

void UBallHandlerComponent::BeginPlay()
{
	Super::BeginPlay();

	CachedCharacter = Cast<ABasketBallGameCharacter>(GetOwner());
	if (!CachedCharacter)
		return;

	UStaticMeshComponent* DribbleMesh = CachedCharacter->DribbleVisualMesh;
	if (!DribbleMesh)
		return;

	// IMPORTANT:
	// Do NOT call RegisterComponent() here
	// because it was already created using CreateDefaultSubobject
	// in the Character constructor.

	DribbleMesh->AttachToComponent(
		CachedCharacter->GetMesh(),
		FAttachmentTransformRules::SnapToTargetNotIncludingScale,
		BallSocketName
	);

	DribbleMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	DribbleMesh->SetHiddenInGame(true);
}

FVector UBallHandlerComponent::CalculatePerfectShotVelocity() const
{
	AActor* Owner = GetOwner();
	if (!Owner) return FVector::ZeroVector;

	// Find hoop actor (simplest version)
	AActor* Hoop = UGameplayStatics::GetActorOfClass(
		GetWorld(),
		ABasketBallHoop::StaticClass());

	if (!Hoop) return FVector::ZeroVector;

	FVector Start = CurrentBall->GetActorLocation();
	FVector Target = Hoop->GetActorLocation();

	FVector Direction = (Target - Start).GetSafeNormal();

	float SuperSpeed = 1800.f;

	return Direction * SuperSpeed;
}

// ======== Ball Handling void UBallHandlerComponent::TickComponent

void UBallHandlerComponent::TickComponent(float DeltaTime,ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ===============================
	// Shot Charging Logic
	// ===============================

	if (bIsCharging && HasBall())
	{
		float ElapsedTime = GetWorld()->GetTimeSeconds() - ChargeStartTime;
		CurrentCharge = FMath::Clamp(ElapsedTime / ChargeTime, 0.0f, 1.0f);

		if (bShowTrajectory)
		{
			UpdateTrajectoryPreview();
		}
	}

	// ===============================
	// Fake Dribble Logic
	// ===============================

	if (!HasBall() || !IsDribbling() || !CurrentBall)
	{
		return;
	}

	// Time-based bounce (smooth & stable)
	const float Time = GetWorld()->GetTimeSeconds();

	constexpr float BounceFrequency = 8.f;
	constexpr float BounceAmplitude = 8.f;

	DribbleTime += DeltaTime;

	float Alpha = FMath::Sin(DribbleTime * BounceFrequency);

	// Make downward faster than upward
	float OffsetZ = (Alpha > 0.f)
		? Alpha * BounceAmplitude * 0.5f   // slow rise
		: Alpha * BounceAmplitude * 1.5f;  // fast drop

	FVector NewLocation = InitialBallRelativeLocation;
	NewLocation.Z += OffsetZ;

	USceneComponent* Root = CurrentBall->GetRootComponent();
	if (!Root) return;

	Root->SetRelativeLocation(NewLocation);
}




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
	InitialBallRelativeLocation = CurrentBall->GetRootComponent()->GetRelativeLocation();
	UE_LOG(LogTemp, Log, TEXT("Picked up ball: %s"), *NearestBall->GetName());
	return true;
}

void UBallHandlerComponent::DropBall()
{
	SetWantsToDribble(false);
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

void UBallHandlerComponent::SetWantsToDribble(bool bNewValue)
{
	if (bWantsToDribble == bNewValue)
		return;

	bWantsToDribble = bNewValue;

	ABasketBallGameCharacter* Character =
		Cast<ABasketBallGameCharacter>(GetOwner());

	if (!Character)
		return;

	if (bWantsToDribble && HasBall())
	{
		// Reset timing
		DribbleTime = 0.f;

		if (Character->DribbleVisualMesh && CurrentBall && CurrentBall->BallMesh)
		{
			Character->DribbleVisualMesh->SetStaticMesh(
				CurrentBall->BallMesh->GetStaticMesh()
			);

			Character->DribbleVisualMesh->SetHiddenInGame(false);
			Character->DribbleVisualMesh->SetVisibility(true);
		}
		
		InitialBallRelativeLocation =
			Character->DribbleVisualMesh->GetRelativeLocation();
		UE_LOG(LogTemp, Warning, TEXT("Dribble started"));
		// Hide real gameplay ball
		CurrentBall->SetActorHiddenInGame(true);
	}
	else
	{
		// STOP DRIBBLE

		if (Character->DribbleVisualMesh)
		{
			Character->DribbleVisualMesh->SetHiddenInGame(true);
			Character->DribbleVisualMesh->SetVisibility(false);
		}

		if (CurrentBall)
		{
			// Show real gameplay ball again
			CurrentBall->SetActorHiddenInGame(false);
			CurrentBall->BallMesh->SetVisibility(false);
		}
	}
}

bool UBallHandlerComponent::IsDribbling() const
{
	return HasBall() && bWantsToDribble;
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
	SetWantsToDribble(false);
	if (!bIsCharging || !HasBall())
		return;

	const float ElapsedTime =
		GetWorld()->GetTimeSeconds() - ChargeStartTime;

	CurrentCharge = FMath::Clamp(
		ElapsedTime / ChargeTime,
		0.0f,
		1.0f);

	ABasketBallGameGameMode* GM =
		GetWorld()->GetAuthGameMode<ABasketBallGameGameMode>();

	FVector LaunchVelocity =
		(GM && GM->ShootingMode == EShootingMode::SuperMode)
		? CalculatePerfectShotVelocity()
		: CalculateLaunchVelocity();

	if (LaunchVelocity.IsNearlyZero())
	{
		bIsCharging = false;
		CurrentCharge = 0.0f;
		ClearTrajectoryPreview();
		return;
	}

	ABasketBall* BallToShoot = CurrentBall;
	if (!BallToShoot)
		return;

	BallToShoot->DetachFromActor(
		FDetachmentTransformRules::KeepWorldTransform);

	BallToShoot->bIsHeld = false;
	BallToShoot->EnablePhysics();
	BallToShoot->BallMesh->SetPhysicsLinearVelocity(LaunchVelocity);
	BallToShoot->MarkAsShot();

	CurrentBall = nullptr;

	UE_LOG(LogTemp, Warning,
		TEXT("Shot ball | Charge=%.2f | Speed=%.0f"),
		CurrentCharge,
		LaunchVelocity.Size());

	if (GM)
	{
		GM->RegisterShotAttempt();
	}

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

void UBallHandlerComponent::TriggerDribbleVisual()
{
	if (!CachedCharacter) return;

	UStaticMeshComponent* Mesh = CachedCharacter->DribbleVisualMesh;
	if (!Mesh) return;

	// Always start from original base position
	FVector DownLocation = InitialBallRelativeLocation;
	DownLocation.Z -= 60.f;

	Mesh->SetRelativeLocation(DownLocation);

	// Snap back to exact base
	FTimerHandle TimerHandle;
	CachedCharacter->GetWorldTimerManager().SetTimer(
		TimerHandle,
		[Mesh, Base = InitialBallRelativeLocation]()
		{
			Mesh->SetRelativeLocation(Base);
		},
		0.08f,
		false
	);
}void UBallHandlerComponent::TriggerDribbleVisual()
{
	if (!CachedCharacter) return;

	UStaticMeshComponent* Mesh = CachedCharacter->DribbleVisualMesh;
	if (!Mesh) return;

	// Always reset to clean base first
	Mesh->SetRelativeLocation(InitialBallRelativeLocation);

	FVector BounceLocation = InitialBallRelativeLocation;
	BounceLocation.Z -= 60.f;

	Mesh->SetRelativeLocation(BounceLocation);

	FTimerHandle TimerHandle;

	CachedCharacter->GetWorldTimerManager().SetTimer(
		TimerHandle,
		[this, Mesh]()
		{
			Mesh->SetRelativeLocation(InitialBallRelativeLocation);
		},
		0.08f,
		false
	);
}