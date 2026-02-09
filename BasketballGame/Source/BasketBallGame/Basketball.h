// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Basketball.generated.h"

UCLASS()
class BASKETBALLGAME_API ABasketball : public AActor
{
	GENERATED_BODY()
	
public:	
	/** Constructor */
	ABasketball();

	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

	/** Ball mesh component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* BallMesh;

	/** Sphere collision for pickup detection */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USphereComponent* PickupRadius;

	/** Is the ball currently held by a player? */
	UPROPERTY(BlueprintReadOnly, Category = "Ball State")
	bool bIsHeld;

	/** Current owner of the ball (if held) */
	UPROPERTY(BlueprintReadOnly, Category = "Ball State")
	AActor* BallOwner;

	/** Enable physics simulation (when ball is loose) */
	UFUNCTION(BlueprintCallable, Category = "Ball")
	void EnablePhysics();

	/** Disable physics simulation (when ball is held) */
	UFUNCTION(BlueprintCallable, Category = "Ball")
	void DisablePhysics();

	/** Attach ball to socket on character */
	UFUNCTION(BlueprintCallable, Category = "Ball")
	void AttachToCharacter(AActor* Character, FName SocketName);

	/** Detach ball and enable physics */
	UFUNCTION(BlueprintCallable, Category = "Ball")
	void DetachFromCharacter();

	/** Check if ball can be picked up */
	UFUNCTION(BlueprintPure, Category = "Ball")
	bool CanBePickedUp() const { return !bIsHeld; }
};
