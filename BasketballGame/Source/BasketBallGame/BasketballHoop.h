#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasketballHoop.generated.h"

class UStaticMeshComponent;
class UBoxComponent;
class ABasketBallGameGameMode;
class ABasketBall;

/**
 * Basketball Hoop Actor
 * Validates shot sequence and forwards scoring to GameMode (authority).
 * Does NOT store scoring data locally.
 */
UCLASS()
class BASKETBALLGAME_API ABasketBallHoop : public AActor
{
	GENERATED_BODY()

public:
	ABasketBallHoop();

	virtual void BeginPlay() override;

	// ================= COMPONENTS =================

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* HoopRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* Backboard;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* Rim;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* TopTrigger;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* BottomTrigger;

	// ================= SETTINGS =================

	UPROPERTY(EditAnywhere, Category = "Scoring")
	int32 PointValue = 0;

	UPROPERTY(EditAnywhere, Category = "Hoop")
	float HoopHeight = 305.f;

protected:

	// ================= OVERLAPS =================

	UFUNCTION()
	void OnTopTriggerBeginOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnBottomTriggerBeginOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	// ================= INTERNAL =================

	TSet<ABasketBall*> BallsInTopTrigger;

	UPROPERTY()
	ABasketBallGameGameMode* CachedGameMode;

	void RegisterScoreWithGameMode(ABasketBall* Ball);

	// ================= FEEDBACK =================

	UFUNCTION(BlueprintImplementableEvent, Category = "Feedback")
	void OnShotMade();
};