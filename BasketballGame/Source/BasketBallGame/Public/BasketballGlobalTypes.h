// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BasketballGlobalTypes.generated.h"


// ===============================
// PlayerType
// ===============================
UENUM(BlueprintType)
enum class EPlayerType : uint8
{
	Human UMETA(DisplayName = "Human"),
	AI    UMETA(DisplayName = "AI")
};

UENUM(BlueprintType)
enum class EMatchPhase : uint8
{
	PreMatch     UMETA(DisplayName = "Pre Match"),
	FirstHalf    UMETA(DisplayName = "First Half"),
	Halftime     UMETA(DisplayName = "Halftime"),
	SecondHalf   UMETA(DisplayName = "Second Half"),
	GameOver     UMETA(DisplayName = "Game Over")
};
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

	UPROPERTY(BlueprintReadOnly)
	int32 FinalScore = 0;

	UPROPERTY(BlueprintReadOnly)
	int32 EarnedXP = 0;

	UPROPERTY(BlueprintReadOnly)
	EMatchPhase MatchPhase = EMatchPhase::PreMatch;

	// ===============================
	// MATCH TIMER
	// ===============================

	UPROPERTY(BlueprintReadOnly)
	float TimeRemaining = 0.f;
};

UENUM(BlueprintType)
enum class EGameModeStyle : uint8
{
	Arcade      UMETA(DisplayName = "Arcade"),
	Realistic   UMETA(DisplayName = "Realistic")
};

UENUM(BlueprintType)
enum class EShootingMode : uint8
{
	Normal      UMETA(DisplayName = "Normal"),
	SuperMode   UMETA(DisplayName = "Super Mode")
};
