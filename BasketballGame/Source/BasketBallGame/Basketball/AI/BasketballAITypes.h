// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BasketballAITypes.generated.h"

/**
 * BasketballAITypes.h
 *
 * Lightweight AI-only enums for basketball AI characters.
 * These are separate from BasketballGlobalTypes.h to avoid circular includes.
 * Do NOT put match-phase or scoring logic here.
 */

// ============================================================
// Teammate AI states
// ============================================================
UENUM(BlueprintType)
enum class ETeammateState : uint8
{
	Idle                 UMETA(DisplayName = "Idle"),
	OffBallMovement      UMETA(DisplayName = "Off-Ball Movement"),
	RetrieveBall         UMETA(DisplayName = "Retrieve Ball"),
	SupportBallHandler   UMETA(DisplayName = "Support Ball Handler")
};

// ============================================================
// Opponent AI states
// ============================================================
UENUM(BlueprintType)
enum class EOpponentState : uint8
{
	GuardPlayer  UMETA(DisplayName = "Guard Player"),
	ChaseBall    UMETA(DisplayName = "Chase Ball"),
	BoxOut       UMETA(DisplayName = "Box Out")
};