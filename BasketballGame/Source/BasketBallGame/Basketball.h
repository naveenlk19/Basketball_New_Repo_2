#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "Basketball.generated.h"

UCLASS()
class BASKETBALLGAME_API ABasketBall : public AActor
{
	GENERATED_BODY()

private:

public:

	ABasketBall();

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* BallMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USphereComponent* PickupRadius;

	UPROPERTY(BlueprintReadOnly, Category = "Ball State")
	bool bIsHeld;

	FTimerHandle ShotTimerHandle;

	UPROPERTY(BlueprintReadWrite, Category = "Ball State")
	bool bWasShot;

	UPROPERTY(BlueprintReadOnly, Category = "Ball State")
	bool bHasScoredThisShot;

	UPROPERTY(BlueprintReadOnly, Category = "Ball State")
	FVector ShotStartLocation;

	UPROPERTY(BlueprintReadOnly, Category = "Ball State")
	AActor* BallOwner;

	UPROPERTY(EditDefaultsOnly, Category = "Shot")
	float ShotValidationTime = 3.0f;

	UFUNCTION(BlueprintCallable, Category = "Ball")
	void EnablePhysics();

	UFUNCTION(BlueprintCallable, Category = "Ball")
	void DisablePhysics();

	UFUNCTION(BlueprintCallable, Category = "Ball")
	void AttachToCharacter(AActor* Character, FName SocketName);

	UFUNCTION(BlueprintCallable, Category = "Ball")
	void DetachFromCharacter();

	UFUNCTION(BlueprintPure, Category = "Ball")
	bool CanBePickedUp() const { return !bIsHeld; }

	void HandleShotTimeout();
	void MarkAsShot();
	void ResetShotState();
};