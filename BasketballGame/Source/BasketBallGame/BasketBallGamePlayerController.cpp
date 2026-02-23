#include "BasketBAllGamePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Character.h"
#include "BasketBAllGameGameMode.h"
#include "BasketballHUDWidget.h"

void ABasketBallGamePlayerController::BeginPlay()
{
	Super::BeginPlay();

	// ===== HUD =====
	if (IsLocalController() && ScoreHUDClass)
	{
		ScoreHUD = CreateWidget<UUserWidget>(this, ScoreHUDClass);
		if (ScoreHUD)
		{
			// Cast to typed reference for snapshot access
			BasketballHUD = Cast<UBasketballHUDWidget>(ScoreHUD);
			if (!BasketballHUD)
			{
				UE_LOG(LogTemp, Warning, TEXT("PlayerController: HUD is not a UBasketballHUDWidget - RefreshHUD will not work"));
			}
			
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
	}
}

void ABasketBallGamePlayerController::Move(const FInputActionValue& Value)
{
	FVector2D Input = Value.Get<FVector2D>();
	/*if (ACharacter* Character = Cast<ACharacter>(GetPawn()))
	{
		Character->AddMovementInput(Character->GetActorForwardVector(), Input.Y);
		Character->AddMovementInput(Character->GetActorRightVector(), Input.X);
	}*/
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

// ================= HUD BRIDGE =================

void ABasketBallGamePlayerController::RefreshHUD()
{
	// Bridge function: Fetch snapshot from GameMode and forward to HUD
	// PlayerController does NOT compute or store any gameplay data
	
	if (!BasketballHUD) return;
	
	if (ABasketBallGameGameMode* GM = GetWorld()->GetAuthGameMode<ABasketBallGameGameMode>())
	{
		FBasketballGameSnapshot Snapshot = GM->GetGameSnapshot();
		BasketballHUD->RefreshHUD(Snapshot);
	}
}
