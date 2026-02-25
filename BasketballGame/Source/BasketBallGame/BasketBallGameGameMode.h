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
 * - Receives calls from Hoop/BallHandler
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

private:

	// Authority logic component
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UBasketballMatchComponent> MatchComponent;
};