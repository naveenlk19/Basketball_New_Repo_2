// Copyright Epic Games, Inc. All Rights Reserved.

#include "Basketball.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/StaticMesh.h"

ABasketball::ABasketball()
{
	// Set this actor to call Tick() every frame (not needed for prototype)
	PrimaryActorTick.bCanEverTick = false;

	// Create ball mesh component
	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
	RootComponent = BallMesh;

	// Setup ball physics
	BallMesh->SetSimulatePhysics(true);
	BallMesh->SetEnableGravity(true);
	BallMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BallMesh->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
	BallMesh->SetCollisionResponseToAllChannels(ECR_Block);
	
	// Set mass for basketball feel (approximately 0.62 kg in real life)
	BallMesh->SetMassOverrideInKg(NAME_None, 0.62f, true);

	// Create pickup detection sphere
	PickupRadius = CreateDefaultSubobject<USphereComponent>(TEXT("PickupRadius"));
	PickupRadius->SetupAttachment(BallMesh);
	PickupRadius->InitSphereRadius(150.0f); // 1.5 meter pickup radius
	PickupRadius->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	PickupRadius->SetCollisionResponseToAllChannels(ECR_Ignore);
	PickupRadius->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	// Initialize state
	bIsHeld = false;
	BallOwner = nullptr;
}

void ABasketball::BeginPlay()
{
	Super::BeginPlay();
	
	// Ball starts on ground with physics enabled
	EnablePhysics();
}

void ABasketball::EnablePhysics()
{
	if (BallMesh)
	{
		BallMesh->SetSimulatePhysics(true);
		BallMesh->SetEnableGravity(true);
		BallMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

void ABasketball::DisablePhysics()
{
	if (BallMesh)
	{
		BallMesh->SetSimulatePhysics(false);
		BallMesh->SetEnableGravity(false);
		BallMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void ABasketball::AttachToCharacter(AActor* Character, FName SocketName)
{
	if (!Character)
	{
		return;
	}

	// Disable physics while held
	DisablePhysics();

	// Find the character's skeletal mesh component
	ACharacter* CharacterPtr = Cast<ACharacter>(Character);
	if (!CharacterPtr)
	{
		return;
	}
	
	USkeletalMeshComponent* MeshComp = CharacterPtr->GetMesh();
	if (!MeshComp)
	{
		return;
	}
	
	// Attach to skeletal mesh socket
	FAttachmentTransformRules AttachRules(
		EAttachmentRule::SnapToTarget,
		EAttachmentRule::SnapToTarget,
		EAttachmentRule::SnapToTarget,
		false
	);

	AttachToComponent(MeshComp, AttachRules, SocketName);

	// Update state
	bIsHeld = true;
	BallOwner = Character;
}

void ABasketball::DetachFromCharacter()
{
	// Detach from parent
	FDetachmentTransformRules DetachRules(
		EDetachmentRule::KeepWorld,
		EDetachmentRule::KeepWorld,
		EDetachmentRule::KeepWorld,
		false
	);

	DetachFromActor(DetachRules);

	// Re-enable physics
	EnablePhysics();

	// Update state
	bIsHeld = false;
	BallOwner = nullptr;
}
