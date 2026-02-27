// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BasketballGlobalTypes.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "BasketballHUDWidget.generated.h"

class UWidget;

/**
 * Basketball HUD Widget (C++ Base Class)
 *
 * Pure display layer. Consumes FBasketballGameSnapshot from PlayerController.
 *
 * Panel Routing:
 *   PreMatch   -> MainMenuPanel visible
 *   FirstHalf  -> GameplayPanel visible
 *   SecondHalf -> GameplayPanel visible
 *   Halftime   -> HalftimePanel visible
 *   GameOver   -> GameOverPanel visible
 *
 * Button wiring:
 *   MainMenuPanel  "Start"   -> OnStartMatchClicked()   -> PC -> GM->StartMatch()
 *   GameOverPanel  "Restart" -> OnRestartMatchClicked() -> PC -> GM->RestartMatch()
 *
 * Rules:
 *   - NO gameplay logic
 *   - NO calculations
 *   - NO Event Tick
 *   - NO direct GameMode access (goes through PlayerController)
 */
UCLASS()
class BASKETBALLGAME_API UBasketballHUDWidget : public UUserWidget
{
    GENERATED_BODY()

public:

    /** Called by PlayerController every time the server pushes a new snapshot */
    void UpdateFromSnapshot(const FBasketballGameSnapshot& Snapshot);

    // -------------------------------------------------------
    // Button Handlers  (Blueprint-callable, bound in UMG)
    // -------------------------------------------------------

    /** Bound to the Start button inside MainMenuPanel */
    UFUNCTION(BlueprintCallable, Category = "Basketball|UI")
    void OnStartMatchClicked();

    /** Bound to the Restart button inside GameOverPanel */
    UFUNCTION(BlueprintCallable, Category = "Basketball|UI")
    void OnRestartMatchClicked();


    virtual void NativeConstruct() override;
       
protected:

    // -------------------------------------------------------
    // Panels  (each maps to one MatchPhase)
    // -------------------------------------------------------

    /** Shown during EMatchPhase::PreMatch */
    UPROPERTY(meta = (BindWidget))
    UWidget* MainMenuPanel;

    /** Shown during EMatchPhase::FirstHalf and EMatchPhase::SecondHalf */
    UPROPERTY(meta = (BindWidget))
    UWidget* GameplayPanel;

    /** Shown during EMatchPhase::GameOver */
    UPROPERTY(meta = (BindWidget))
    UWidget* GameOverPanel;

    /** Shown during EMatchPhase::Halftime  (optional overlay) */
    UPROPERTY(meta = (BindWidget))
    UWidget* HalftimePanel;

    // -------------------------------------------------------
    // Gameplay Text Widgets  (live inside GameplayPanel)
    // -------------------------------------------------------

    UPROPERTY(meta = (BindWidget))
    UTextBlock* ScoreText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* AttemptsText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* EfficiencyText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* CurrentStreakText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* BestStreakText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* TimerText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* MatchPhaseText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* FinalScoreText;
    
    UPROPERTY(meta = (BindWidget))
    UTextBlock* XPText;

    UPROPERTY(meta = (BindWidget))
    UButton* StartMatchButton;

    int32 TargetFinalScore = 0;
    int32 TargetXP = 0;

    int32 DisplayedFinalScore = 0;
    int32 DisplayedXP = 0;

    //Audio 
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GameOver")
    USoundBase* ScoreTickSound;
private:

    /** Show only the requested panel; collapse all others */
    void SetActivePanelForPhase(EMatchPhase Phase);

    /** Refresh all text widgets from snapshot data */
   
    void RefreshTextWidgets(const FBasketballGameSnapshot& Snapshot);

    FText FormatTime(float TimeRemaining) const;
    FText FormatEfficiency(float Efficiency) const;
    FTimerHandle ScoreAnimTimer;
    void StartGameOverAnimation(int32 FinalScore, int32 EarnedXP);
    void AnimateScoreTick();
};
