// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
//#include "BallHandlerComponent.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BallHandlerComponent.generated.h"

class ABasketBall;
class USplineMeshComponent;
class USplineComponent;

/**
 * Component that manages basketball possession for a character
 * Handles picking up, holding, dropping, and shooting the ball
 * Includes trajectory preview while charging
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

	/** Called every frame */
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// ======== Ball Handling ========

	/** Socket name where ball attaches (usually on hand) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ball Handling")
	FName BallSocketName;

	/** Maximum distance to detect balls for pickup */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ball Handling")
	float PickupRange;

	/** Reference to currently held ball (null if no ball) */
	UPROPERTY(BlueprintReadOnly, Category = "Ball Handling")
	ABasketBall* CurrentBall;

	/** Is this character currently holding a ball? */
	UFUNCTION(BlueprintPure, Category = "Ball Handling")
	bool HasBall() const { return CurrentBall != nullptr; }

	/** Attempt to pick up nearby ball */
	UFUNCTION(BlueprintCallable, Category = "Ball Handling")
	bool TryPickupBall();

	/** Drop the currently held ball */
	UFUNCTION(BlueprintCallable, Category = "Ball Handling")
	void DropBall();

	/** Find nearest basketball within pickup range */
	UFUNCTION(BlueprintCallable, Category = "Ball Handling")
	ABasketBall* FindNearestBall();

	/** Manually set ball reference (useful for spawning with ball) */
	UFUNCTION(BlueprintCallable, Category = "Ball Handling")
	void SetBall(ABasketBall* Ball);

	// ======== Shooting ========

	/** Maximum shot power (velocity in cm/s) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
	float MaxShotPower;

	/** Minimum shot power as fraction of max (0.0 to 1.0) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting", meta = (ClampMin = "0.1", ClampMax = "0.9"))
	float MinPowerFraction;

	/** Time to charge from min to max power (seconds) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
	float ChargeTime;

	/** Current shot charge (0.0 to 1.0) */
	UPROPERTY(BlueprintReadOnly, Category = "Shooting")
	float CurrentCharge;

	/** Arc angle at minimum charge (degrees) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting", meta = (ClampMin = "20.0", ClampMax = "70.0"))
	float MinArcAngle;

	/** Arc angle at maximum charge (degrees) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting", meta = (ClampMin = "30.0", ClampMax = "80.0"))
	float MaxArcAngle;

	/** Start charging shot (called on button press) */
	UFUNCTION(BlueprintCallable, Category = "Shooting")
	void StartCharging();

	/** Shoot ball with charged power (called on button release) */
	UFUNCTION(BlueprintCallable, Category = "Shooting")
	void ShootBall();

	/** Get current charge percentage (0-100) */
	UFUNCTION(BlueprintPure, Category = "Shooting")
	float GetChargePercent() const { return CurrentCharge * 100.0f; }

	/** Is currently charging a shot? */
	UFUNCTION(BlueprintPure, Category = "Shooting")
	bool IsCharging() const { return bIsCharging; }

	// ======== Trajectory Preview ========

	/** Number of points in the trajectory preview arc */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trajectory Preview")
	int32 TrajectoryPointCount;

	/** Time step between trajectory points (seconds of simulated flight) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trajectory Preview")
	float TrajectoryTimeStep;

	/** Show trajectory preview while charging? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trajectory Preview")
	bool bShowTrajectory;

private:
	/** Time when charging started */
	float ChargeStartTime;

	/** Is currently charging a shot? */
	bool bIsCharging;

	/** Calculate launch velocity based on current charge and aim */
	FVector CalculateLaunchVelocity() const;

	/** Calculate predicted trajectory points */
	TArray<FVector> CalculateTrajectoryPoints(const FVector& StartPos, const FVector& LaunchVelocity) const;

	/** Update the trajectory preview visualization */
	void UpdateTrajectoryPreview();

	/** Clear the trajectory preview */
	void ClearTrajectoryPreview();

	/** Debug draw trajectory points */
	TArray<FVector> CachedTrajectoryPoints;
};
