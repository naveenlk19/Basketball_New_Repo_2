// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BallHandlerComponent.generated.h"

class ABasketball;

/**
 * Component that manages basketball possession for a character
 * Handles picking up, holding, and dropping the ball
 * Structured for future replication (multiplayer-ready)
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BASKETBALLGAME_API UBallHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	/** Constructor */
	UBallHandlerComponent();

	/** Called when the game starts */
	virtual void BeginPlay() override;

	/** Socket name where ball attaches (usually on hand) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ball Handling")
	FName BallSocketName;

	/** Maximum distance to detect balls for pickup */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ball Handling")
	float PickupRange;

	/** Maximum shot power (velocity in cm/s) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
	float MaxShotPower;

	/** Time to charge from 0% to 100% power */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
	float ChargeTime;

	/** Current shot charge (0.0 to 1.0) */
	UPROPERTY(BlueprintReadOnly, Category = "Shooting")
	float CurrentCharge;

	/** Reference to currently held ball (null if no ball) */
	UPROPERTY(BlueprintReadOnly, Category = "Ball Handling")
	ABasketball* CurrentBall;

	/** Is this character currently holding a ball? */
	UFUNCTION(BlueprintPure, Category = "Ball Handling")
	bool HasBall() const { return CurrentBall != nullptr; }

	/** Attempt to pick up nearby ball */
	UFUNCTION(BlueprintCallable, Category = "Ball Handling")
	bool TryPickupBall();

	/** Drop the currently held ball */
	UFUNCTION(BlueprintCallable, Category = "Ball Handling")
	void DropBall();

	/** Start charging shot (called on button press) */
	UFUNCTION(BlueprintCallable, Category = "Shooting")
	void StartCharging();

	/** Shoot ball with charged power (called on button release) */
	UFUNCTION(BlueprintCallable, Category = "Shooting")
	void ShootBall();

	/** Get current charge percentage (0-100) */
	UFUNCTION(BlueprintPure, Category = "Shooting")
	float GetChargePercent() const { return CurrentCharge * 100.0f; }

	/** Find nearest basketball within pickup range */
	UFUNCTION(BlueprintCallable, Category = "Ball Handling")
	ABasketball* FindNearestBall();

	/** Manually set ball reference (useful for spawning with ball) */
	UFUNCTION(BlueprintCallable, Category = "Ball Handling")
	void SetBall(ABasketball* Ball);

private:
	/** Time when charging started */
	float ChargeStartTime;

	/** Is currently charging a shot? */
	bool bIsCharging;
};
