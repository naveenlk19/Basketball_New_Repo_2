// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasketballScoreManager.h"

#ifdef BASKETBALLGAME_BasketballScoreManager_generated_h
#error "BasketballScoreManager.generated.h already included, missing '#pragma once' in BasketballScoreManager.h"
#endif
#define BASKETBALLGAME_BasketballScoreManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnScoreChanged *******************************************************
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h_12_DELEGATE \
BASKETBALLGAME_API void FOnScoreChanged_DelegateWrapper(const FMulticastScriptDelegate& OnScoreChanged, int32 NewScore, int32 TotalMakes, int32 TotalAttempts);


// ********** End Delegate FOnScoreChanged *********************************************************

// ********** Begin Delegate FOnTimerUpdated *******************************************************
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h_15_DELEGATE \
BASKETBALLGAME_API void FOnTimerUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnTimerUpdated, float RemainingTime);


// ********** End Delegate FOnTimerUpdated *********************************************************

// ********** Begin Delegate FOnGameStarted ********************************************************
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h_18_DELEGATE \
BASKETBALLGAME_API void FOnGameStarted_DelegateWrapper(const FMulticastScriptDelegate& OnGameStarted);


// ********** End Delegate FOnGameStarted **********************************************************

// ********** Begin Delegate FOnGameEnded **********************************************************
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h_19_DELEGATE \
BASKETBALLGAME_API void FOnGameEnded_DelegateWrapper(const FMulticastScriptDelegate& OnGameEnded, int32 FinalScore);


// ********** End Delegate FOnGameEnded ************************************************************

// ********** Begin Class UBasketballScoreManager **************************************************
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHoopScored); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execRegisterAttempt); \
	DECLARE_FUNCTION(execResetScore); \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execGetShootingPercentage);


BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballScoreManager_NoRegister();

#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasketballScoreManager(); \
	friend struct Z_Construct_UClass_UBasketballScoreManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballScoreManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UBasketballScoreManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasketBallGame"), Z_Construct_UClass_UBasketballScoreManager_NoRegister) \
	DECLARE_SERIALIZER(UBasketballScoreManager)


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBasketballScoreManager(UBasketballScoreManager&&) = delete; \
	UBasketballScoreManager(const UBasketballScoreManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasketballScoreManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasketballScoreManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBasketballScoreManager) \
	NO_API virtual ~UBasketballScoreManager();


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h_26_PROLOG
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h_29_INCLASS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBasketballScoreManager;

// ********** End Class UBasketballScoreManager ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
