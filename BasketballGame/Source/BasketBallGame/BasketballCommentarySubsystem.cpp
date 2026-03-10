// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketballCommentarySubsystem.h"
#include "BasketBallGame.h"

// -----------------------------------------------------------------------
// USubsystem interface
// -----------------------------------------------------------------------

void UBasketballCommentarySubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogBasketBallGame, Log,
		TEXT("[Commentary] Subsystem initialised — ready to receive match events."));
}

void UBasketballCommentarySubsystem::Deinitialize()
{
	UE_LOG(LogBasketBallGame, Log,
		TEXT("[Commentary] Subsystem shutting down."));

	Super::Deinitialize();
}

// -----------------------------------------------------------------------
// Match Event API
// -----------------------------------------------------------------------

void UBasketballCommentarySubsystem::OnShotMade()
{
	++SessionMakes;

	UE_LOG(LogBasketBallGame, Log,
		TEXT("[Commentary] Shot MADE — total makes this session: %d"), SessionMakes);

	// ── Future integration point ─────────────────────────────────────────
	// VoiceEngine->PlayLine(ECommentaryLine::ShotMade);
	// NarrativeManager->TriggerEvent("shot_made", SessionMakes);
	// ─────────────────────────────────────────────────────────────────────
}

void UBasketballCommentarySubsystem::OnShotMissed()
{
	++SessionMisses;

	UE_LOG(LogBasketBallGame, Log,
		TEXT("[Commentary] Shot MISSED — total misses this session: %d"), SessionMisses);

	// ── Future integration point ─────────────────────────────────────────
	// VoiceEngine->PlayLine(ECommentaryLine::ShotMissed);
	// ─────────────────────────────────────────────────────────────────────
}

void UBasketballCommentarySubsystem::OnStreakStarted(int32 StreakCount)
{
	if (StreakCount > PeakStreak)
	{
		PeakStreak = StreakCount;
	}

	UE_LOG(LogBasketBallGame, Log,
		TEXT("[Commentary] Streak STARTED — current streak: %d  |  peak this session: %d"),
		StreakCount, PeakStreak);

	// ── Future integration point ─────────────────────────────────────────
	// Intensity scales with StreakCount:
	//   3  → "On fire!"
	//   5  → "Unstoppable!"
	//   10 → "LEGENDARY!"
	// VoiceEngine->PlayStreakLine(StreakCount);
	// ─────────────────────────────────────────────────────────────────────
}

void UBasketballCommentarySubsystem::OnGameStart()
{
	// Reset per-session counters so commentary stays accurate each game.
	SessionMakes  = 0;
	SessionMisses = 0;
	PeakStreak    = 0;

	UE_LOG(LogBasketBallGame, Log,
		TEXT("[Commentary] Game STARTED — session counters reset."));

	// ── Future integration point ─────────────────────────────────────────
	// VoiceEngine->PlayLine(ECommentaryLine::GameIntro);
	// CrowdAmbience->FadeIn();
	// ─────────────────────────────────────────────────────────────────────
}

void UBasketballCommentarySubsystem::OnGameEnd()
{
	UE_LOG(LogBasketBallGame, Log,
		TEXT("[Commentary] Game ENDED — final stats | Makes: %d  Misses: %d  Peak streak: %d"),
		SessionMakes, SessionMisses, PeakStreak);

	// ── Future integration point ─────────────────────────────────────────
	// VoiceEngine->PlayFinalScoreReadout(SessionMakes, SessionMisses, PeakStreak);
	// CrowdAmbience->FadeOut();
	// ─────────────────────────────────────────────────────────────────────
}