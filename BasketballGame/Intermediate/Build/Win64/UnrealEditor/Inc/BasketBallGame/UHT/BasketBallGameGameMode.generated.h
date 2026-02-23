// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasketBallGameGameMode.h"

#ifdef BASKETBALLGAME_BasketBallGameGameMode_generated_h
#error "BasketBallGameGameMode.generated.h already included, missing '#pragma once' in BasketBallGameGameMode.h"
#endif
#define BASKETBALLGAME_BasketBallGameGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBasketballMatchComponent;
struct FBasketballGameSnapshot;

// ********** Begin Class ABasketBallGameGameMode **************************************************
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMatchComponent); \
	DECLARE_FUNCTION(execGetXP); \
	DECLARE_FUNCTION(execGetFinalScore); \
	DECLARE_FUNCTION(execGetEfficiency); \
	DECLARE_FUNCTION(execGetSuccessfulShots); \
	DECLARE_FUNCTION(execGetTotalAttempts); \
	DECLARE_FUNCTION(execGetBestStreak); \
	DECLARE_FUNCTION(execGetCurrentStreak); \
	DECLARE_FUNCTION(execGetCurrentScore); \
	DECLARE_FUNCTION(execGetGameSnapshot); \
	DECLARE_FUNCTION(execRegisterShotMiss); \
	DECLARE_FUNCTION(execRegisterShotSuccess); \
	DECLARE_FUNCTION(execRegisterShotAttempt);


BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGameGameMode_NoRegister();

#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasketBallGameGameMode(); \
	friend struct Z_Construct_UClass_ABasketBallGameGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGameGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ABasketBallGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasketBallGame"), Z_Construct_UClass_ABasketBallGameGameMode_NoRegister) \
	DECLARE_SERIALIZER(ABasketBallGameGameMode)


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasketBallGameGameMode(ABasketBallGameGameMode&&) = delete; \
	ABasketBallGameGameMode(const ABasketBallGameGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasketBallGameGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasketBallGameGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasketBallGameGameMode) \
	NO_API virtual ~ABasketBallGameGameMode();


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h_18_PROLOG
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h_21_INCLASS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasketBallGameGameMode;

// ********** End Class ABasketBallGameGameMode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
