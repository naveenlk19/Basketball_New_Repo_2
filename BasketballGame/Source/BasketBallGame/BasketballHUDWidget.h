// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BasketballGlobalTypes.h"
#include "BasketballHUDWidget.generated.h"

/**
 * Basketball HUD Widget (C++ Base Class)
 * 
 * Pure display layer for gameplay UI.
 * Consumes FBasketballGameSnapshot from PlayerController.
 * Implements display logic in Blueprint via RefreshHUD event.
 * 
 * Rules:
 * - NO gameplay logic
 * - NO calculations (efficiency/score/streak math)
 * - NO Event Tick
 * - NO Designer bindings
 * - NO direct access to MatchComponent/GameMode
 * - Receives snapshot → Updates text widgets → Done
 * 
 * Blueprint Implementation:
 * - Create child Blueprint widget (e.g., WBP_BasketballHUD)
 * - Set parent class to UBasketballHUDWidget
 * - Implement "RefreshHUD" event
 * - Use Snapshot to set text widget content
 */
UCLASS()
class BASKETBALLGAME_API UBasketballHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	/**
	 * Refresh HUD with latest gameplay snapshot
	 * 
	 * Called by PlayerController after scoring events.
	 * Implement this event in Blueprint to update UI elements.
	 * 
	 * @param Snapshot - Complete gameplay data snapshot (read-only)
	 * 
	 * Blueprint Usage:
	 * - Break Snapshot struct
	 * - Set Score text widget
	 * - Set Attempts text widget
	 * - Set Streak text widget
	 * - Set Efficiency text widget (format as percentage)
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "HUD")
	void RefreshHUD(const FBasketballGameSnapshot& Snapshot);
};
