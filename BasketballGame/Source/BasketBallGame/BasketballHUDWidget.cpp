// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballHUDWidget.h"

// No implementation needed - BlueprintImplementableEvent is handled by Blueprint child class

//void UBasketballHUDWidget::RefreshHUD(FBasketballGameSnapshot Snapshot)
//{
//	UE_LOG(LogTemp, Warning, TEXT("Base C++ RefreshHUD | Score: %d"), Snapshot.Score);
//}

//void UBasketballHUDWidget::RefreshHUD_Implementation(FBasketballGameSnapshot Snapshot)
//{
//	UE_LOG(LogTemp, Warning, TEXT("C++ fallback RefreshHUD | Score: %d"), Snapshot.Score);
//}

void UBasketballHUDWidget::UpdateFromSnapshot(FBasketballGameSnapshot Snapshot)
{
    if (ScoreText)
    {
        ScoreText->SetText(FText::AsNumber(Snapshot.Score));
    }

    if (AttemptsText)
    {
        AttemptsText->SetText(FText::AsNumber(Snapshot.TotalAttempts));
    }

    if (EfficiencyText)
    {
        float EfficiencyPercent = Snapshot.Efficiency * 100.f;

        FString EfficiencyString = FString::Printf(TEXT("%.0f%%"), EfficiencyPercent);
        EfficiencyText->SetText(FText::FromString(EfficiencyString));
    }

    if (CurrentStreakText)
    {
        CurrentStreakText->SetText(FText::AsNumber(Snapshot.CurrentStreak));
    }
    if (BestStreakText)
    {
        BestStreakText->SetText(FText::AsNumber(Snapshot.BestStreak));
    }

    
}
