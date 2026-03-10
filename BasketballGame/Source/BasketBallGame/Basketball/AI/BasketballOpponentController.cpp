#include "BasketballOpponentController.h"
#include "BasketballOpponentCharacter.h"
#include "Basketball.h"
#include "Kismet/GameplayStatics.h"

ABasketballOpponentController::ABasketballOpponentController(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABasketballOpponentController::BeginPlay()
{
    Super::BeginPlay();
}

void ABasketballOpponentController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
}

void ABasketballOpponentController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

void ABasketballOpponentController::SetOpponentState(EOpponentState NewState)
{
    CurrentState = NewState;
}