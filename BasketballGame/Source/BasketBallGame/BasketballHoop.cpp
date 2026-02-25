// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballHoop.h"
#include "Basketball.h"
#include "BasketBallGameGameMode.h"
#include "BasketBallGameState.h"
#include "Components/StaticMeshComponent.h"
#include "PhysicsEngine/BodySetup.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/World.h"

ABasketBallHoop::ABasketBallHoop()
{
	PrimaryActorTick.bCanEverTick = false;

	// ================= ROOT (Backboard as Pivot) =================

	Backboard = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Backboard"));
	RootComponent = Backboard;

	Backboard->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Backboard->SetCollisionResponseToAllChannels(ECR_Block);

	// ================= RIM =================


	Rim = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rim"));
	Rim->SetupAttachment(Backboard);
	Rim->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Rim->SetCollisionResponseToAllChannels(ECR_Block);
	Rim->SetRelativeLocation(FVector(15.0f, 0.0f, -45.0f));

	// ================= TOP TRIGGER =================

	TopTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TopTrigger"));
	TopTrigger->SetupAttachment(Rim);
	TopTrigger->SetBoxExtent(FVector(25.0f, 25.0f, 5.0f));
	TopTrigger->SetRelativeLocation(FVector(0.0f, 0.0f, -5.0f));
	TopTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TopTrigger->SetCollisionResponseToAllChannels(ECR_Ignore);
	TopTrigger->SetCollisionResponseToChannel(ECC_PhysicsBody, ECR_Overlap);
	TopTrigger->SetGenerateOverlapEvents(true);

	// ================= BOTTOM TRIGGER =================

	BottomTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BottomTrigger"));
	BottomTrigger->SetupAttachment(Rim);
	BottomTrigger->SetBoxExtent(FVector(25.0f, 25.0f, 5.0f));
	BottomTrigger->SetRelativeLocation(FVector(0.0f, 0.0f, -45.0f));
	BottomTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BottomTrigger->SetCollisionResponseToAllChannels(ECR_Ignore);
	BottomTrigger->SetCollisionResponseToChannel(ECC_PhysicsBody, ECR_Overlap);
	BottomTrigger->SetGenerateOverlapEvents(true);

	// ================= DEFAULT VALUES =================

	PointValue = 2;
	HoopHeight = 305.0f;
	CachedGameMode = nullptr;
}

void ABasketBallHoop::BeginPlay()
{
	Super::BeginPlay();

	// Use the actual mesh triangles for collision so the ball can pass through the rim opening
	if (Rim && Rim->GetStaticMesh())
	{
		UBodySetup* RimBodySetup = Rim->GetStaticMesh()->GetBodySetup();
		if (RimBodySetup)
		{
			RimBodySetup->CollisionTraceFlag = CTF_UseComplexAsSimple;
			Rim->RecreatePhysicsState();
		}
	}

	// Bind overlap events
	TopTrigger->OnComponentBeginOverlap.AddDynamic(this, &ABasketBallHoop::OnTopTriggerBeginOverlap);
	BottomTrigger->OnComponentBeginOverlap.AddDynamic(this, &ABasketBallHoop::OnBottomTriggerBeginOverlap);

	// Cache GameMode reference with validation and retry logic
	if (UWorld* World = GetWorld())
	{
		CachedGameMode = World->GetAuthGameMode<ABasketBallGameGameMode>();
		
		if (!CachedGameMode)
		{
			UE_LOG(LogTemp, Warning, TEXT("BasketballHoop: GameMode not found at BeginPlay - scheduling retry"));
			
			// Schedule retry after 0.1 seconds
			FTimerHandle RetryHandle;
			World->GetTimerManager().SetTimer(RetryHandle, [this]()
			{
				if (UWorld* RetryWorld = GetWorld())
				{
					CachedGameMode = RetryWorld->GetAuthGameMode<ABasketBallGameGameMode>();
					if (CachedGameMode)
					{
						//UE_LOG(LogTemp, Log, TEXT("BasketballHoop: GameMode cached successfully on retry"));
					}
				}
			}, 0.1f, false);
		}
		else
		{
			//UE_LOG(LogTemp, Log, TEXT("BasketballHoop: GameMode cached successfully at BeginPlay"));
		}
	}
	
	// ======== PHYSICS VALIDATION LOGGING ========
	// Verify trigger collision settings are correct to prevent double-scoring bugs
	//if (TopTrigger && BottomTrigger)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("[BasketballHoop Physics Validation] %s"), *GetName());
	//	UE_LOG(LogTemp, Warning, TEXT("  TopTrigger Collision Enabled: %d (Expected: 1=QueryOnly)"), static_cast<int32>(TopTrigger->GetCollisionEnabled()));
	//	UE_LOG(LogTemp, Warning, TEXT("  TopTrigger Generate Overlap Events: %d"), TopTrigger->GetGenerateOverlapEvents());
	//	UE_LOG(LogTemp, Warning, TEXT("  BottomTrigger Collision Enabled: %d (Expected: 1=QueryOnly)"), static_cast<int32>(BottomTrigger->GetCollisionEnabled()));
	//	UE_LOG(LogTemp, Warning, TEXT("  BottomTrigger Generate Overlap Events: %d"), BottomTrigger->GetGenerateOverlapEvents());
	//}
	//// ========================================
	//UE_LOG(LogTemp, Log, TEXT("Basketball Hoop initialized at height: %.0f cm"), HoopHeight);
}

void ABasketBallHoop::OnTopTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Check if it's a basketball
	ABasketBall* Ball = Cast<ABasketBall>(OtherActor);
	if (!Ball)
	{
		return;
	}

	// Check if ball is moving downward (entering hoop from above)
	FVector BallVelocity = Ball->BallMesh->GetPhysicsLinearVelocity();
	if (BallVelocity.Z > 0.0f)
	{
		// Ball is moving upward, not a valid shot
		// Should we call shot missed here ?
		return;
	}

	// Track this ball as having entered the top trigger
	BallsInTopTrigger.Add(Ball);

	UE_LOG(LogTemp, Log, TEXT("Ball entered hoop (top trigger): %s"), *Ball->GetName());
}

void ABasketBallHoop::OnBottomTriggerBeginOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	ABasketBall* Ball = Cast<ABasketBall>(OtherActor);
	if (!Ball)
	{
		return;
	}

	// Must have been intentionally shot
	if (!Ball->bWasShot)
	{
		return;
	}

	// Prevent double scoring
	if (Ball->bHasScoredThisShot)
	{
		return;
	}

	// Must have passed top trigger first
	if (!BallsInTopTrigger.Contains(Ball))
	{
		// should we call shot missed here 
		return;
	}

	// Valid score
	Ball->bHasScoredThisShot = true;
	Ball->ResetShotState();
	Ball->GetWorld()->GetTimerManager().ClearTimer(Ball->ShotTimerHandle);
	
	BallsInTopTrigger.Remove(Ball);

	// 🔥 Disable overlap ONLY for this ball mesh
	Ball->BallMesh->SetGenerateOverlapEvents(false);

	RegisterScoreWithGameMode(Ball);
	UE_LOG(LogTemp, Warning, TEXT("VALID SCORE REGISTERED"));
	
}

void ABasketBallHoop::RegisterScoreWithGameMode(ABasketBall* Ball)
{
	if (!Ball)
	{
		return;
	}

	if (!CachedGameMode)
	{
		if (UWorld* World = GetWorld())
		{
			CachedGameMode = World->GetAuthGameMode<ABasketBallGameGameMode>();
		}
	}

	if (!CachedGameMode)
	{
		UE_LOG(LogTemp, Warning, TEXT("Hoop: GameMode not found"));
		return;
	}

	CachedGameMode->RegisterShotSuccess(PointValue);
	
	UE_LOG(LogTemp, Warning, TEXT("Hoop: Shot SUCCESS | +%d points"), PointValue);

	OnShotMade();
}


