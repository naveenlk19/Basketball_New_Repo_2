// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasketballMatchComponent.h"

#ifdef BASKETBALLGAME_BasketballMatchComponent_generated_h
#error "BasketballMatchComponent.generated.h already included, missing '#pragma once' in BasketballMatchComponent.h"
#endif
#define BASKETBALLGAME_BasketballMatchComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBasketballMatchComponent ************************************************
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetStats); \
	DECLARE_FUNCTION(execGetHotHandMultiplier); \
	DECLARE_FUNCTION(execGetBestStreak); \
	DECLARE_FUNCTION(execGetCurrentStreak); \
	DECLARE_FUNCTION(execGetPoints); \
	DECLARE_FUNCTION(execGetTotalAttempts); \
	DECLARE_FUNCTION(execGetFailedShots); \
	DECLARE_FUNCTION(execGetSuccessfulShots); \
	DECLARE_FUNCTION(execCalculateFinalScore); \
	DECLARE_FUNCTION(execCalculateXP); \
	DECLARE_FUNCTION(execCalculateEfficiency);


BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballMatchComponent_NoRegister();

#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasketballMatchComponent(); \
	friend struct Z_Construct_UClass_UBasketballMatchComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballMatchComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBasketballMatchComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasketBallGame"), Z_Construct_UClass_UBasketballMatchComponent_NoRegister) \
	DECLARE_SERIALIZER(UBasketballMatchComponent)


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBasketballMatchComponent(UBasketballMatchComponent&&) = delete; \
	UBasketballMatchComponent(const UBasketballMatchComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasketballMatchComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasketballMatchComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBasketballMatchComponent) \
	NO_API virtual ~UBasketballMatchComponent();


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h_27_PROLOG
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBasketballMatchComponent;

// ********** End Class UBasketballMatchComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
