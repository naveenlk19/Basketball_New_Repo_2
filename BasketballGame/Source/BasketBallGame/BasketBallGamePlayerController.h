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

protected:

	// ================= UI =================

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UBasketballHUDWidget> ScoreHUDClass;

	UPROPERTY()
	//UUserWidget* ScoreHUD;
	UBasketballHUDWidget* ScoreHUD;
	
	///** Typed reference to Basketball HUD (C++ base widget) */
	//UPROPERTY()
	//UBasketballHUDWidget* BasketballHUD;

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

	
};