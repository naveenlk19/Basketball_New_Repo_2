// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BallHandlerComponent.generated.h"

class ABasketBall;
class USplineMeshComponent;
class USplineComponent;
class ABasketBallGameCharacter;   // Forward declaration (IMPORTANT)

/**
 * Component that manages basketball possession for a character
 * Handles picking up, holding, dropping, and shooting the ball
 * Includes trajectory preview while charging
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BASKETBALLGAME_API UBallHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UBallHandlerComponent();

	virtual void BeginPlay() override;

	virtual void TickComponent(
		float DeltaTime,
		ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction) override;

	// =====================
	// Ball Handling
	// =====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ball Handling")
	FName BallSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ball Handling")
	float PickupRange;

	UPROPERTY(BlueprintReadOnly, Category = "Ball Handling")
	ABasketBall* CurrentBall;

	UFUNCTION(BlueprintPure, Category = "Ball Handling")
	bool HasBall() const { return CurrentBall != nullptr; }

	UFUNCTION(BlueprintCallable, Category = "Ball Handling")
	bool TryPickupBall();

	UFUNCTION(BlueprintCallable, Category = "Ball Handling")
	void DropBall();

	UFUNCTION(BlueprintCallable, Category = "Ball Handling")
	ABasketBall* FindNearestBall();

	UFUNCTION(BlueprintCallable, Category = "Ball Handling")
	void SetBall(ABasketBall* Ball);

	// =====================
	// Shooting
	// =====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
	float MaxShotPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting", meta = (ClampMin = "0.1", ClampMax = "0.9"))
	float MinPowerFraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
	float ChargeTime;

	UPROPERTY(BlueprintReadOnly, Category = "Shooting")
	float CurrentCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting", meta = (ClampMin = "20.0", ClampMax = "70.0"))
	float MinArcAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting", meta = (ClampMin = "30.0", ClampMax = "80.0"))
	float MaxArcAngle;

	UFUNCTION(BlueprintCallable, Category = "Shooting")
	void StartCharging();

	UFUNCTION(BlueprintCallable, Category = "Shooting")
	void ShootBall();

	UFUNCTION(BlueprintPure, Category = "Shooting")
	float GetChargePercent() const { return CurrentCharge * 100.0f; }

	UFUNCTION(BlueprintPure, Category = "Shooting")
	bool IsCharging() const { return bIsCharging; }

	// =====================
	// Trajectory Preview
	// =====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trajectory Preview")
	int32 TrajectoryPointCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trajectory Preview")
	float TrajectoryTimeStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trajectory Preview")
	bool bShowTrajectory;

	// =====================
	// Dribble
	// =====================

	UPROPERTY(BlueprintReadOnly)
	bool bWantsToDribble = false;

	float DribbleTime = 0.f;

	void SetWantsToDribble(bool bNewValue);
	bool IsDribbling() const;

	UFUNCTION(BlueprintCallable, Category = "Dribble")
	void TriggerDribbleVisual();

	UPROPERTY()
	ABasketBallGameCharacter* CachedCharacter;

	FVector InitialBallRelativeLocation;

private:

	float ChargeStartTime;
	bool bIsCharging;

	FVector CalculateLaunchVelocity() const;
	FVector CalculatePerfectShotVelocity() const;

	TArray<FVector> CalculateTrajectoryPoints(
		const FVector& StartPos,
		const FVector& LaunchVelocity) const;

	void UpdateTrajectoryPreview();
	void ClearTrajectoryPreview();

	TArray<FVector> CachedTrajectoryPoints;
};