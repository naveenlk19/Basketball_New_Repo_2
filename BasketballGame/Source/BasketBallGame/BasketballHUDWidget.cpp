// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballHUDWidget.h"
#include "Components/Widget.h"
#include "BasketBAllGamePlayerController.h"
#include "BasketBAllGameGameMode.h"
#include "Kismet/GameplayStatics.h"

// ---------------------------------------------------------------------------
// UpdateFromSnapshot  –  entry point called by PlayerController
// ---------------------------------------------------------------------------

void UBasketballHUDWidget::UpdateFromSnapshot(const FBasketballGameSnapshot& Snapshot)
{
    SetActivePanelForPhase(Snapshot.MatchPhase);
    RefreshTextWidgets(Snapshot);
    NativeConstruct();
}

// ---------------------------------------------------------------------------
// SetActivePanelForPhase  –  one panel visible, all others collapsed
// ---------------------------------------------------------------------------

void UBasketballHUDWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (StartMatchButton)
    {
        StartMatchButton->OnClicked.AddDynamic(this, &UBasketballHUDWidget::OnStartMatchClicked);
        UE_LOG(LogTemp, Warning, TEXT("Start button clicked"));
    }
}

void UBasketballHUDWidget::SetActivePanelForPhase(EMatchPhase Phase)
{
    // Default everything to collapsed, then reveal the correct panel.
    // Null-guards protect against unbound widgets in the Blueprint child.
    
    auto Collapse = [](UWidget* W)
    {
        if (W) W->SetVisibility(ESlateVisibility::Collapsed);
    };

    Collapse(MainMenuPanel);
    Collapse(GameplayPanel);
    Collapse(GameOverPanel);
    Collapse(HalftimePanel);

    switch (Phase)
    {
    case EMatchPhase::PreMatch:
        if (MainMenuPanel)  MainMenuPanel->SetVisibility(ESlateVisibility::Visible);
        break;

    case EMatchPhase::FirstHalf:
    case EMatchPhase::SecondHalf:
        if (GameplayPanel)  GameplayPanel->SetVisibility(ESlateVisibility::Visible);
        break;

    case EMatchPhase::Halftime:
        if (HalftimePanel)  HalftimePanel->SetVisibility(ESlateVisibility::Visible);
        break;

    case EMatchPhase::GameOver:
        if (GameOverPanel)  GameOverPanel->SetVisibility(ESlateVisibility::Visible);
        break;
    }


}

// ---------------------------------------------------------------------------
// RefreshTextWidgets  –  push snapshot data into text blocks
// ---------------------------------------------------------------------------

void UBasketballHUDWidget::RefreshTextWidgets(const FBasketballGameSnapshot& Snapshot)
{
    bool bGameOverAnimationStarted = false;
    if (ScoreText)         ScoreText->SetText(FText::AsNumber(Snapshot.Score));
    if (AttemptsText)      AttemptsText->SetText(FText::AsNumber(Snapshot.TotalAttempts));
    if (CurrentStreakText) CurrentStreakText->SetText(FText::AsNumber(Snapshot.CurrentStreak));
    if (BestStreakText)    BestStreakText->SetText(FText::AsNumber(Snapshot.BestStreak));
    if (EfficiencyText)    EfficiencyText->SetText(FormatEfficiency(Snapshot.Efficiency));
    if (TimerText)         TimerText->SetText(FormatTime(Snapshot.TimeRemaining));

    if (MatchPhaseText)
    {
        switch (Snapshot.MatchPhase)
        {
        case EMatchPhase::PreMatch:   MatchPhaseText->SetText(FText::FromString(TEXT("Press Start")));  break;
        case EMatchPhase::FirstHalf:  MatchPhaseText->SetText(FText::FromString(TEXT("First Half")));   break;
        case EMatchPhase::Halftime:   MatchPhaseText->SetText(FText::FromString(TEXT("Halftime")));     break;
        case EMatchPhase::SecondHalf: MatchPhaseText->SetText(FText::FromString(TEXT("Second Half")));  break;
        case EMatchPhase::GameOver:   MatchPhaseText->SetText(FText::FromString(TEXT("Game Over")));   
            if (!bGameOverAnimationStarted)
            {
                bGameOverAnimationStarted = true;
                StartGameOverAnimation(Snapshot.FinalScore, Snapshot.EarnedXP);
            }
            break;
        }
    }
}


// ---------------------------------------------------------------------------
// Button Handlers
// ---------------------------------------------------------------------------

void UBasketballHUDWidget::OnStartMatchClicked()
{
    ABasketBallGamePlayerController* PC =
        Cast<ABasketBallGamePlayerController>(GetOwningPlayer());

    if (!PC)
    {
        UE_LOG(LogTemp, Warning, TEXT("HUDWidget::OnStartMatchClicked – no owning PlayerController"));
        return;
    }

    PC->RequestStartMatch();
}

void UBasketballHUDWidget::OnRestartMatchClicked()
{
    ABasketBallGamePlayerController* PC =
        Cast<ABasketBallGamePlayerController>(GetOwningPlayer());

    if (!PC)
    {
        UE_LOG(LogTemp, Warning, TEXT("HUDWidget::OnRestartMatchClicked – no owning PlayerController"));
        return;
    }

    PC->RequestRestartMatch();
}

// ---------------------------------------------------------------------------
// Formatting Helpers
// ---------------------------------------------------------------------------

FText UBasketballHUDWidget::FormatTime(float TimeRemaining) const
{
    const int32 Minutes = FMath::FloorToInt(TimeRemaining / 60.f);
    const int32 Seconds = FMath::FloorToInt(FMath::Fmod(TimeRemaining, 60.f));
    return FText::FromString(FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds));
}

FText UBasketballHUDWidget::FormatEfficiency(float Efficiency) const
{
    return FText::FromString(FString::Printf(TEXT("%.0f%%"), Efficiency * 100.f));
}

void UBasketballHUDWidget::StartGameOverAnimation(int32 FinalScore, int32 XP)
{
    TargetFinalScore = FinalScore;
    TargetXP = XP;

    DisplayedFinalScore = 0;
    DisplayedXP = 0;

    GetWorld()->GetTimerManager().SetTimer(
        ScoreAnimTimer,
        this,
        &UBasketballHUDWidget::AnimateScoreTick,
        0.02f,   // speed (lower = faster)
        true
    );
    UGameplayStatics::PlaySound2D(this, ScoreTickSound);
}

void UBasketballHUDWidget::AnimateScoreTick()
{
    bool bDone = true;

    if (DisplayedFinalScore < TargetFinalScore)
    {
        DisplayedFinalScore += FMath::Max(1, TargetFinalScore / 100);
        DisplayedFinalScore = FMath::Min(DisplayedFinalScore, TargetFinalScore);

        if (FinalScoreText)
            FinalScoreText->SetText(FText::AsNumber(DisplayedFinalScore));

        // 🔊 Play sound
        if (ScoreTickSound)
        {
            UGameplayStatics::PlaySound2D(this, ScoreTickSound);
        }

        bDone = false;
    }

    if (DisplayedXP < TargetXP)
    {
        DisplayedXP += FMath::Max(1, TargetXP / 100);
        DisplayedXP = FMath::Min(DisplayedXP, TargetXP);

        if (XPText)
            XPText->SetText(FText::AsNumber(DisplayedXP));

        bDone = false;
    }

    if (bDone)
    {
        GetWorld()->GetTimerManager().ClearTimer(ScoreAnimTimer);
    }
}