#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "BasketBallGameState.generated.h"

/**
 * GameState = Snapshot mirror only.
 * NO gameplay logic.
 * GameMode pushes values here.
 * UI reads from here.
 */
UCLASS()
class BASKETBALLGAME_API ABasketBallGameState : public AGameStateBase
{
	GENERATED_BODY()

public:

	ABasketBallGameState();

	// ===== MATCH SNAPSHOT =====

	UPROPERTY(BlueprintReadOnly, Category = "Match")
	int32 Points;

	UPROPERTY(BlueprintReadOnly, Category = "Match")
	int32 TotalAttempts;

	UPROPERTY(BlueprintReadOnly, Category = "Match")
	int32 SuccessfulShots;

	UPROPERTY(BlueprintReadOnly, Category = "Match")
	int32 BestStreak;

	UPROPERTY(BlueprintReadOnly, Category = "Match")
	float Efficiency;

	UPROPERTY(BlueprintReadOnly, Category = "Match")
	int32 FinalScore;

	UPROPERTY(BlueprintReadOnly, Category = "Match")
	int32 MatchTimeRemaining;

	UPROPERTY(BlueprintReadOnly, Category = "Match")
	bool bMatchActive;

	// Snapshot update (called ONLY by GameMode)
	void UpdateSnapshot(
		int32 InPoints,
		int32 InAttempts,
		int32 InSuccessfulShots,
		int32 InBestStreak,
		float InEfficiency,
		int32 InFinalScore
	);
};