// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "BasketballGlobalTypes.h"
#include "BasketBAllGamePlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
class UUserWidget;
class UBasketballHUDWidget;

UCLASS()
class BASKETBALLGAME_API ABasketBallGamePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	// ================= HUD BRIDGE =================

	/** Refresh HUD with latest gameplay snapshot (called by GameMode after scoring events) */
	void HandleServerHUDUpdate(const FBasketballGameSnapshot& Snapshot);

	UFUNCTION(Client, Reliable)
	void Client_RefreshHUD(const FBasketballGameSnapshot& Snapshot);

	void Client_RefreshHUD_Implementation(const FBasketballGameSnapshot& Snapshot);
	// ================= MATCH REQUESTS (from HUD buttons) =================

	/**
	 * Called by UBasketballHUDWidget::OnStartMatchClicked().
	 * Routes to the server so GameMode authority is respected on both
	 * listen-server and dedicated-server setups.
	 */
	UFUNCTION(BlueprintCallable, Category = "Basketball|Match")
	void RequestStartMatch();

	/**
	 * Called by UBasketballHUDWidget::OnRestartMatchClicked().
	 * Routes to the server so GameMode authority is respected.
	 */
	UFUNCTION(BlueprintCallable, Category = "Basketball|Match")
	void RequestRestartMatch();

	// ================= KEYBOARD START-MATCH INPUT =================

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* StartMatchAction;

	void HandleStartMatchInput();

protected:

	// ================= UI =================

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UBasketballHUDWidget> ScoreHUDClass;

	UPROPERTY()
	UBasketballHUDWidget* ScoreHUD;

	// ================= INPUT =================

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* MoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* ShootAction;

	// ================= INPUT HANDLERS =================

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void Shoot(const FInputActionValue& Value);

private:

	// -------------------------------------------------------
	// Server RPCs  (authority gate – GameMode calls only run
	// on the server regardless of who triggered the button)
	// -------------------------------------------------------

	UFUNCTION(Server, Reliable)
	void Server_RequestStartMatch();

	UFUNCTION(Server, Reliable)
	void Server_RequestRestartMatch();
};