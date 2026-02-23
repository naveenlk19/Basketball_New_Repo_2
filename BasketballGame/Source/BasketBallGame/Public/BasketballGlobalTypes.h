// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BasketballGlobalTypes.generated.h"

/*
============================================================
GLOBAL GAMEPLAY SNAPSHOT STRUCT
============================================================

Purpose:
    Carries gameplay data from MatchComponent → GameMode → UI.

Rules:
    - No functions
    - No gameplay logic
    - No references to other gameplay classes
    - Pure data only
    - Safe for replication in future

This struct is the ONLY object UI will consume.
============================================================
*/

USTRUCT(BlueprintType)
struct FBasketballGameSnapshot
{
	GENERATED_BODY()

public:

	// ===============================
	// CORE SCORING
	// ===============================

	UPROPERTY(BlueprintReadOnly)
	int32 Score = 0;  // Standard basketball scoring (2 points default)

	UPROPERTY(BlueprintReadOnly)
	int32 TotalAttempts = 0;

	UPROPERTY(BlueprintReadOnly)
	int32 SuccessfulShots = 0;

	UPROPERTY(BlueprintReadOnly)
	int32 CurrentStreak = 0;

	UPROPERTY(BlueprintReadOnly)
	int32 BestStreak = 0;

	UPROPERTY(BlueprintReadOnly)
	float Efficiency = 0.f;

	// ===============================
	// FUTURE EXPANSION (PHASE 2)
	// ===============================

	/*
	UPROPERTY(BlueprintReadOnly)
	int32 RemainingTime = 0;

	UPROPERTY(BlueprintReadOnly)
	bool bMatchActive = false;
	*/
};
