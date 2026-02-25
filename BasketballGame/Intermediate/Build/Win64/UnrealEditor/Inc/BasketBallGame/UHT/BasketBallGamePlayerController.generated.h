// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasketBallGamePlayerController.h"

#ifdef BASKETBALLGAME_BasketBallGamePlayerController_generated_h
#error "BasketBallGamePlayerController.generated.h already included, missing '#pragma once' in BasketBallGamePlayerController.h"
#endif
#define BASKETBALLGAME_BasketBallGamePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FBasketballGameSnapshot;

// ********** Begin Class ABasketBallGamePlayerController ******************************************
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_RefreshHUD_Implementation(FBasketballGameSnapshot const& Snapshot); \
	DECLARE_FUNCTION(execClient_RefreshHUD);


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h_17_CALLBACK_WRAPPERS
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGamePlayerController_NoRegister();

#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasketBallGamePlayerController(); \
	friend struct Z_Construct_UClass_ABasketBallGamePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGamePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ABasketBallGamePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasketBallGame"), Z_Construct_UClass_ABasketBallGamePlayerController_NoRegister) \
	DECLARE_SERIALIZER(ABasketBallGamePlayerController)


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasketBallGamePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasketBallGamePlayerController(ABasketBallGamePlayerController&&) = delete; \
	ABasketBallGamePlayerController(const ABasketBallGamePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasketBallGamePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasketBallGamePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasketBallGamePlayerController) \
	NO_API virtual ~ABasketBallGamePlayerController();


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h_14_PROLOG
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h_17_CALLBACK_WRAPPERS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasketBallGamePlayerController;

// ********** End Class ABasketBallGamePlayerController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
