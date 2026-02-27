// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasketBAllGamePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Character.h"
#include "BasketBAllGameGameMode.h"
#include "BasketballHUDWidget.h"

// ---------------------------------------------------------------------------
// BeginPlay
// ---------------------------------------------------------------------------

void ABasketBallGamePlayerController::BeginPlay()
{
	Super::BeginPlay();

	// ===== HUD =====
	if (IsLocalController() && ScoreHUDClass)
	{
		ScoreHUD = CreateWidget<UBasketballHUDWidget>(this, ScoreHUDClass);
		if (ScoreHUD)
		{
			ScoreHUD->AddToViewport();
			UE_LOG(LogTemp, Warning, TEXT("PlayerController: HUD Created"));
		}
	}

	// ===== INPUT MAPPING =====
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (DefaultMappingContext)
			{
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
				UE_LOG(LogTemp, Warning, TEXT("Input Mapping Added"));
			}
		}
	}
}

// ---------------------------------------------------------------------------
// SetupInputComponent
// ---------------------------------------------------------------------------

void ABasketBallGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EnhancedInput =
		Cast<UEnhancedInputComponent>(InputComponent))
	{
		if (MoveAction)
			EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABasketBallGamePlayerController::Move);

		if (LookAction)
			EnhancedInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABasketBallGamePlayerController::Look);

		if (ShootAction)
			EnhancedInput->BindAction(ShootAction, ETriggerEvent::Started, this, &ABasketBallGamePlayerController::Shoot);

		if (StartMatchAction)
			EnhancedInput->BindAction(StartMatchAction, ETriggerEvent::Triggered, this, &ABasketBallGamePlayerController::HandleStartMatchInput);
	}
}

// ---------------------------------------------------------------------------
// HUD Bridge
// ---------------------------------------------------------------------------

void ABasketBallGamePlayerController::HandleServerHUDUpdate(
	const FBasketballGameSnapshot& Snapshot)
{
	if (IsLocalController())
	{
		if (IsValid(ScoreHUD))
		{
			ScoreHUD->UpdateFromSnapshot(Snapshot);
		}
	}
	else
	{
		Client_RefreshHUD(Snapshot);
	}
}

void ABasketBallGamePlayerController::Client_RefreshHUD_Implementation(
	const FBasketballGameSnapshot& Snapshot)
{
	UE_LOG(LogTemp, Warning, TEXT("Client_RefreshHUD | IsLocal=%d | HasAuthority=%d"),
		IsLocalController(), HasAuthority());

	if (!IsValid(ScoreHUD))
	{
		UE_LOG(LogTemp, Warning, TEXT("ScoreHUD is NULL"));
		return;
	}

	ScoreHUD->UpdateFromSnapshot(Snapshot);
}

// ---------------------------------------------------------------------------
// Match Request  –  public surface called by HUD buttons
// ---------------------------------------------------------------------------

void ABasketBallGamePlayerController::RequestStartMatch()
{
	if (HasAuthority())
	{
		// Listen-server: call GameMode directly
		if (ABasketBallGameGameMode* GM = GetWorld()->GetAuthGameMode<ABasketBallGameGameMode>())
		{
			GM->StartMatch();
		}
	}
	else
	{
		// Dedicated-server client: go through Server RPC
		Server_RequestStartMatch();
	}
}

void ABasketBallGamePlayerController::RequestRestartMatch()
{
	if (HasAuthority())
	{
		if (ABasketBallGameGameMode* GM = GetWorld()->GetAuthGameMode<ABasketBallGameGameMode>())
		{
			GM->RestartMatch();
		}
	}
	else
	{
		Server_RequestRestartMatch();
	}
}

// ---------------------------------------------------------------------------
// Server RPCs  –  authority gate
// ---------------------------------------------------------------------------

void ABasketBallGamePlayerController::Server_RequestStartMatch_Implementation()
{
	if (ABasketBallGameGameMode* GM = GetWorld()->GetAuthGameMode<ABasketBallGameGameMode>())
	{
		GM->StartMatch();
	}
}

void ABasketBallGamePlayerController::Server_RequestRestartMatch_Implementation()
{
	if (ABasketBallGameGameMode* GM = GetWorld()->GetAuthGameMode<ABasketBallGameGameMode>())
	{
		GM->RestartMatch();
	}
}

// ---------------------------------------------------------------------------
// Keyboard Start-Match Input (existing binding)
// ---------------------------------------------------------------------------

void ABasketBallGamePlayerController::HandleStartMatchInput()
{
	UE_LOG(LogTemp, Warning, TEXT("Start Match Pressed (keyboard)"));
	RequestStartMatch();
}

// ---------------------------------------------------------------------------
// Movement / Look / Shoot
// ---------------------------------------------------------------------------

void ABasketBallGamePlayerController::Move(const FInputActionValue& Value)
{
	FVector2D Input = Value.Get<FVector2D>();
	if (APawn* ControlledPawn = GetPawn())
	{
		ControlledPawn->AddMovementInput(ControlledPawn->GetActorForwardVector(), Input.Y);
		ControlledPawn->AddMovementInput(ControlledPawn->GetActorRightVector(), Input.X);
	}
}

void ABasketBallGamePlayerController::Look(const FInputActionValue& Value)
{
	FVector2D Input = Value.Get<FVector2D>();
	AddYawInput(Input.X);
	AddPitchInput(Input.Y);
}

void ABasketBallGamePlayerController::Shoot(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Shoot Pressed"));
}