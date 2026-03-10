// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BasketballRefereeCharacter.generated.h"

class ABasketballRefereeController;

/**
 * ABasketballRefereeCharacter
 *
 * The referee pawn that is possessed by ABasketballRefereeController.
 * Moves to center court, plays a toss animation placeholder,
 * and faces the ball during the tip-off phase.
 *
 * Animation note:
 *   Assign TossAnimMontage in Blueprint (e.g., AM_Official_Tosses).
 */
UCLASS(Blueprintable, BlueprintType)
class BASKETBALLGAME_API ABasketballRefereeCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	ABasketballRefereeCharacter();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// =========================================================
	// Animation
	// =========================================================

	/** Montage played when the referee tosses the ball. Set in Blueprint. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Referee|Animation")
	TObjectPtr<UAnimMontage> TossAnimMontage;

	/** Play the toss animation (called by the controller at toss time). */
	UFUNCTION(BlueprintCallable, Category = "Referee|Animation")
	void PlayTossAnimation();

	// =========================================================
	// Facing
	// =========================================================

	/**
	 * When true, the character smoothly rotates to face BallFacingTarget every tick.
	 * Set by the controller when TipOff phase begins.
	 */
	UPROPERTY(BlueprintReadWrite, Category = "Referee|State")
	bool bFaceBall = false;

	/** World location the referee should face (ball position). Updated by controller. */
	UPROPERTY(BlueprintReadWrite, Category = "Referee|State")
	FVector BallFacingTarget = FVector::ZeroVector;

	/** Rotation speed used when facing the ball (degrees per second). */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Referee|Settings")
	float FacingInterpSpeed = 10.f;

private:

	void TickFaceBall(float DeltaTime);
};