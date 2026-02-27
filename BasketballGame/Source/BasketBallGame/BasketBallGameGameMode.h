// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BasketballGlobalTypes.h"
#include "BasketBallGameGameMode.generated.h"

class UBasketballMatchComponent;

/**
 * Basketball GameMode
 *
 * Authority layer.
 * - Owns MatchComponent
 * - Receives calls from Hoop / BallHandler
 * - Exposes read-only access for UI
 */
UCLASS()
class BASKETBALLGAME_API ABasketBallGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	ABasketBallGameGameMode();

	virtual void BeginPlay() override;

	// ========================
	// Authority Wrappers
	// ========================

	UFUNCTION(BlueprintCallable, Category = "Basketball|Scoring")
	void RegisterShotAttempt();

	UFUNCTION(BlueprintCallable, Category = "Basketball|Scoring")
	void RegisterShotSuccess(int32 PointValue);

	UFUNCTION(BlueprintCallable, Category = "Basketball|Scoring")
	void RegisterShotMiss();

	// ========================
	// Match System
	// ========================

	/** Start the match from PreMatch state. No-op if already started. */
	void StartMatch();

	/**
	 * Restart the match from any phase back to PreMatch.
	 * Resets all stats and clears active timers.
	 * Called by PlayerController on behalf of the Restart button.
	 */
	void RestartMatch();

	void ActivateAllPlayers(bool bActive);

	// ===============================
	// MATCH TIMER
	// ===============================

	FTimerHandle MatchTimerHandle;
	FTimerHandle HalftimeTimerHandle;

	UPROPERTY(EditDefaultsOnly, Category = "Basketball|Match")
	float HalftimePerformanceDuration = 10.f;

	void HandleMatchTick();
	void StartHalftime();
	void StartSecondHalf();
	void BroadcastSnapshot(const FBasketballGameSnapshot& Snapshot);

	// ========================
	// Team System
	// ========================

	int32 AssignTeamToPlayer(APlayerController* PC);

	// ========================
	// Snapshot System
	// ========================

	/** Get complete gameplay snapshot (forwards from MatchComponent) */
	UFUNCTION(BlueprintPure, Category = "Basketball|Snapshot")
	FBasketballGameSnapshot GetGameSnapshot() const;

	void RefreshAllPlayerHUD();

	// ========================
	// Read-Only Access (UI)
	// ========================

	UFUNCTION(BlueprintPure, Category = "Basketball|Scoring")
	int32 GetCurrentScore() const;

	UFUNCTION(BlueprintPure, Category = "Basketball|Scoring")
	int32 GetCurrentStreak() const;

	UFUNCTION(BlueprintPure, Category = "Basketball|Scoring")
	int32 GetBestStreak() const;

	UFUNCTION(BlueprintPure, Category = "Basketball|Scoring")
	int32 GetTotalAttempts() const;

	UFUNCTION(BlueprintPure, Category = "Basketball|Scoring")
	int32 GetSuccessfulShots() const;

	UFUNCTION(BlueprintPure, Category = "Basketball|Scoring")
	float GetEfficiency() const;

	UFUNCTION(BlueprintPure, Category = "Basketball|Scoring")
	int32 GetFinalScore() const;

	UFUNCTION(BlueprintPure, Category = "Basketball|Scoring")
	int32 GetXP() const;

	UFUNCTION(BlueprintPure, Category = "Basketball|Scoring")
	UBasketballMatchComponent* GetMatchComponent() const;

	//Dribble
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Mode")
	EGameModeStyle GameModeStyle = EGameModeStyle::Arcade;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
	EShootingMode ShootingMode = EShootingMode::Normal;
private:

	// Authority logic component
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UBasketballMatchComponent> MatchComponent;
};