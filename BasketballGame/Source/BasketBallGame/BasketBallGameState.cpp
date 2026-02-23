#include "BasketBallGameState.h"

ABasketBallGameState::ABasketBallGameState()
{
	Points = 0;
	TotalAttempts = 0;
	SuccessfulShots = 0;
	BestStreak = 0;
	Efficiency = 0.f;
	FinalScore = 0;
	MatchTimeRemaining = 0;
	bMatchActive = false;
}

void ABasketBallGameState::UpdateSnapshot(
	int32 InPoints,
	int32 InAttempts,
	int32 InSuccessfulShots,
	int32 InBestStreak,
	float InEfficiency,
	int32 InFinalScore)
{
	Points = InPoints;
	TotalAttempts = InAttempts;
	SuccessfulShots = InSuccessfulShots;
	BestStreak = InBestStreak;
	Efficiency = InEfficiency;
	FinalScore = InFinalScore;
}