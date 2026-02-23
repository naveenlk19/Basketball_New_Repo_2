// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasketballScoreManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasketballScoreManager() {}

// ********** Begin Cross Module References ********************************************************
BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballScoreManager();
BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballScoreManager_NoRegister();
BASKETBALLGAME_API UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature();
BASKETBALLGAME_API UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnGameStarted__DelegateSignature();
BASKETBALLGAME_API UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature();
BASKETBALLGAME_API UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BasketBallGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnScoreChanged *******************************************************
struct Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics
{
	struct _Script_BasketBallGame_eventOnScoreChanged_Parms
	{
		int32 NewScore;
		int32 TotalMakes;
		int32 TotalAttempts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for score changes */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for score changes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalMakes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalAttempts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BasketBallGame_eventOnScoreChanged_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::NewProp_TotalMakes = { "TotalMakes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BasketBallGame_eventOnScoreChanged_Parms, TotalMakes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::NewProp_TotalAttempts = { "TotalAttempts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BasketBallGame_eventOnScoreChanged_Parms, TotalAttempts), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::NewProp_NewScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::NewProp_TotalMakes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::NewProp_TotalAttempts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BasketBallGame, nullptr, "OnScoreChanged__DelegateSignature", Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::_Script_BasketBallGame_eventOnScoreChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::_Script_BasketBallGame_eventOnScoreChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnScoreChanged_DelegateWrapper(const FMulticastScriptDelegate& OnScoreChanged, int32 NewScore, int32 TotalMakes, int32 TotalAttempts)
{
	struct _Script_BasketBallGame_eventOnScoreChanged_Parms
	{
		int32 NewScore;
		int32 TotalMakes;
		int32 TotalAttempts;
	};
	_Script_BasketBallGame_eventOnScoreChanged_Parms Parms;
	Parms.NewScore=NewScore;
	Parms.TotalMakes=TotalMakes;
	Parms.TotalAttempts=TotalAttempts;
	OnScoreChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnScoreChanged *********************************************************

// ********** Begin Delegate FOnTimerUpdated *******************************************************
struct Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics
{
	struct _Script_BasketBallGame_eventOnTimerUpdated_Parms
	{
		float RemainingTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for timer updates */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for timer updates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics::NewProp_RemainingTime = { "RemainingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BasketBallGame_eventOnTimerUpdated_Parms, RemainingTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics::NewProp_RemainingTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BasketBallGame, nullptr, "OnTimerUpdated__DelegateSignature", Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics::_Script_BasketBallGame_eventOnTimerUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics::_Script_BasketBallGame_eventOnTimerUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimerUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnTimerUpdated, float RemainingTime)
{
	struct _Script_BasketBallGame_eventOnTimerUpdated_Parms
	{
		float RemainingTime;
	};
	_Script_BasketBallGame_eventOnTimerUpdated_Parms Parms;
	Parms.RemainingTime=RemainingTime;
	OnTimerUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTimerUpdated *********************************************************

// ********** Begin Delegate FOnGameStarted ********************************************************
struct Z_Construct_UDelegateFunction_BasketBallGame_OnGameStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for game state changes */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for game state changes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BasketBallGame_OnGameStarted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BasketBallGame, nullptr, "OnGameStarted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BasketBallGame_OnGameStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BasketBallGame_OnGameStarted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnGameStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BasketBallGame_OnGameStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameStarted_DelegateWrapper(const FMulticastScriptDelegate& OnGameStarted)
{
	OnGameStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnGameStarted **********************************************************

// ********** Begin Delegate FOnGameEnded **********************************************************
struct Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics
{
	struct _Script_BasketBallGame_eventOnGameEnded_Parms
	{
		int32 FinalScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FinalScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics::NewProp_FinalScore = { "FinalScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BasketBallGame_eventOnGameEnded_Parms, FinalScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics::NewProp_FinalScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BasketBallGame, nullptr, "OnGameEnded__DelegateSignature", Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics::_Script_BasketBallGame_eventOnGameEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics::_Script_BasketBallGame_eventOnGameEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameEnded_DelegateWrapper(const FMulticastScriptDelegate& OnGameEnded, int32 FinalScore)
{
	struct _Script_BasketBallGame_eventOnGameEnded_Parms
	{
		int32 FinalScore;
	};
	_Script_BasketBallGame_eventOnGameEnded_Parms Parms;
	Parms.FinalScore=FinalScore;
	OnGameEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameEnded ************************************************************

// ********** Begin Class UBasketballScoreManager Function AddScore ********************************
struct Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics
{
	struct BasketballScoreManager_eventAddScore_Parms
	{
		int32 Points;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add points to score (called by GameMode) */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add points to score (called by GameMode)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballScoreManager_eventAddScore_Parms, Points), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballScoreManager, nullptr, "AddScore", Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics::BasketballScoreManager_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics::BasketballScoreManager_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballScoreManager_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballScoreManager_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballScoreManager::execAddScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Points);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Points);
	P_NATIVE_END;
}
// ********** End Class UBasketballScoreManager Function AddScore **********************************

// ********** Begin Class UBasketballScoreManager Function EndGame *********************************
struct Z_Construct_UFunction_UBasketballScoreManager_EndGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** End the current round */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End the current round" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballScoreManager_EndGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballScoreManager, nullptr, "EndGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_EndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballScoreManager_EndGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBasketballScoreManager_EndGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballScoreManager_EndGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballScoreManager::execEndGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndGame();
	P_NATIVE_END;
}
// ********** End Class UBasketballScoreManager Function EndGame ***********************************

// ********** Begin Class UBasketballScoreManager Function GetShootingPercentage *******************
struct Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics
{
	struct BasketballScoreManager_eventGetShootingPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shooting percentage (0-100) */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shooting percentage (0-100)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballScoreManager_eventGetShootingPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballScoreManager, nullptr, "GetShootingPercentage", Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics::BasketballScoreManager_eventGetShootingPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics::BasketballScoreManager_eventGetShootingPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballScoreManager::execGetShootingPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetShootingPercentage();
	P_NATIVE_END;
}
// ********** End Class UBasketballScoreManager Function GetShootingPercentage *********************

// ********** Begin Class UBasketballScoreManager Function OnHoopScored ****************************
struct Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics
{
	struct BasketballScoreManager_eventOnHoopScored_Parms
	{
		int32 Points;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when any hoop scores */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when any hoop scores" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballScoreManager_eventOnHoopScored_Parms, Points), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballScoreManager, nullptr, "OnHoopScored", Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics::BasketballScoreManager_eventOnHoopScored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics::BasketballScoreManager_eventOnHoopScored_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballScoreManager::execOnHoopScored)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Points);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHoopScored(Z_Param_Points);
	P_NATIVE_END;
}
// ********** End Class UBasketballScoreManager Function OnHoopScored ******************************

// ********** Begin Class UBasketballScoreManager Function RegisterAttempt *************************
struct Z_Construct_UFunction_UBasketballScoreManager_RegisterAttempt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Register a shot attempt (miss) */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register a shot attempt (miss)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballScoreManager_RegisterAttempt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballScoreManager, nullptr, "RegisterAttempt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_RegisterAttempt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballScoreManager_RegisterAttempt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBasketballScoreManager_RegisterAttempt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballScoreManager_RegisterAttempt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballScoreManager::execRegisterAttempt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterAttempt();
	P_NATIVE_END;
}
// ********** End Class UBasketballScoreManager Function RegisterAttempt ***************************

// ********** Begin Class UBasketballScoreManager Function ResetScore ******************************
struct Z_Construct_UFunction_UBasketballScoreManager_ResetScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset all scores and statistics */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset all scores and statistics" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballScoreManager_ResetScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballScoreManager, nullptr, "ResetScore", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_ResetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballScoreManager_ResetScore_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBasketballScoreManager_ResetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballScoreManager_ResetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballScoreManager::execResetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetScore();
	P_NATIVE_END;
}
// ********** End Class UBasketballScoreManager Function ResetScore ********************************

// ********** Begin Class UBasketballScoreManager Function StartGame *******************************
struct Z_Construct_UFunction_UBasketballScoreManager_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Start a new round */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start a new round" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballScoreManager_StartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballScoreManager, nullptr, "StartGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballScoreManager_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballScoreManager_StartGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBasketballScoreManager_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballScoreManager_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballScoreManager::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// ********** End Class UBasketballScoreManager Function StartGame *********************************

// ********** Begin Class UBasketballScoreManager **************************************************
void UBasketballScoreManager::StaticRegisterNativesUBasketballScoreManager()
{
	UClass* Class = UBasketballScoreManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &UBasketballScoreManager::execAddScore },
		{ "EndGame", &UBasketballScoreManager::execEndGame },
		{ "GetShootingPercentage", &UBasketballScoreManager::execGetShootingPercentage },
		{ "OnHoopScored", &UBasketballScoreManager::execOnHoopScored },
		{ "RegisterAttempt", &UBasketballScoreManager::execRegisterAttempt },
		{ "ResetScore", &UBasketballScoreManager::execResetScore },
		{ "StartGame", &UBasketballScoreManager::execStartGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBasketballScoreManager;
UClass* UBasketballScoreManager::GetPrivateStaticClass()
{
	using TClass = UBasketballScoreManager;
	if (!Z_Registration_Info_UClass_UBasketballScoreManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasketballScoreManager"),
			Z_Registration_Info_UClass_UBasketballScoreManager.InnerSingleton,
			StaticRegisterNativesUBasketballScoreManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBasketballScoreManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UBasketballScoreManager_NoRegister()
{
	return UBasketballScoreManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBasketballScoreManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manages basketball game scoring, timers, and statistics.\n * Attach to GameMode via CreateDefaultSubobject.\n * Automatically binds to all BasketballHoop actors in the level.\n */" },
#endif
		{ "IncludePath", "BasketballScoreManager.h" },
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manages basketball game scoring, timers, and statistics.\nAttach to GameMode via CreateDefaultSubobject.\nAutomatically binds to all BasketballHoop actors in the level." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalScore_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current total score */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current total score" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalMakes_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total successful baskets */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total successful baskets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalAttempts_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total shot attempts */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total shot attempts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStreak_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Consecutive makes streak */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consecutive makes streak" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BestStreak_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Best streak this session */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Best streak this session" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundDuration_MetaData[] = {
		{ "Category", "Timer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total round duration in seconds (0 = no timer) */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total round duration in seconds (0 = no timer)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingTime_MetaData[] = {
		{ "Category", "Timer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remaining time in current round */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remaining time in current round" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGameActive_MetaData[] = {
		{ "Category", "Timer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is the game currently active? */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the game currently active?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnScoreChanged_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when score changes */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when score changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerUpdated_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called every second with remaining time */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every second with remaining time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameStarted_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when game starts */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when game starts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameEnded_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when game ends */" },
#endif
		{ "ModuleRelativePath", "BasketballScoreManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when game ends" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalMakes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalAttempts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStreak;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BestStreak;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingTime;
	static void NewProp_bGameActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameActive;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScoreChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameEnded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasketballScoreManager_AddScore, "AddScore" }, // 536611001
		{ &Z_Construct_UFunction_UBasketballScoreManager_EndGame, "EndGame" }, // 2806681671
		{ &Z_Construct_UFunction_UBasketballScoreManager_GetShootingPercentage, "GetShootingPercentage" }, // 3625331414
		{ &Z_Construct_UFunction_UBasketballScoreManager_OnHoopScored, "OnHoopScored" }, // 3861424796
		{ &Z_Construct_UFunction_UBasketballScoreManager_RegisterAttempt, "RegisterAttempt" }, // 3592554816
		{ &Z_Construct_UFunction_UBasketballScoreManager_ResetScore, "ResetScore" }, // 4286252153
		{ &Z_Construct_UFunction_UBasketballScoreManager_StartGame, "StartGame" }, // 1151266602
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasketballScoreManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_TotalScore = { "TotalScore", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballScoreManager, TotalScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalScore_MetaData), NewProp_TotalScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_TotalMakes = { "TotalMakes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballScoreManager, TotalMakes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalMakes_MetaData), NewProp_TotalMakes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_TotalAttempts = { "TotalAttempts", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballScoreManager, TotalAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalAttempts_MetaData), NewProp_TotalAttempts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_CurrentStreak = { "CurrentStreak", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballScoreManager, CurrentStreak), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStreak_MetaData), NewProp_CurrentStreak_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_BestStreak = { "BestStreak", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballScoreManager, BestStreak), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BestStreak_MetaData), NewProp_BestStreak_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_RoundDuration = { "RoundDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballScoreManager, RoundDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundDuration_MetaData), NewProp_RoundDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_RemainingTime = { "RemainingTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballScoreManager, RemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingTime_MetaData), NewProp_RemainingTime_MetaData) };
void Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_bGameActive_SetBit(void* Obj)
{
	((UBasketballScoreManager*)Obj)->bGameActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_bGameActive = { "bGameActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBasketballScoreManager), &Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_bGameActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGameActive_MetaData), NewProp_bGameActive_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_OnScoreChanged = { "OnScoreChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballScoreManager, OnScoreChanged), Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnScoreChanged_MetaData), NewProp_OnScoreChanged_MetaData) }; // 3775965895
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_OnTimerUpdated = { "OnTimerUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballScoreManager, OnTimerUpdated), Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerUpdated_MetaData), NewProp_OnTimerUpdated_MetaData) }; // 4066462380
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_OnGameStarted = { "OnGameStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballScoreManager, OnGameStarted), Z_Construct_UDelegateFunction_BasketBallGame_OnGameStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameStarted_MetaData), NewProp_OnGameStarted_MetaData) }; // 1786793440
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_OnGameEnded = { "OnGameEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballScoreManager, OnGameEnded), Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameEnded_MetaData), NewProp_OnGameEnded_MetaData) }; // 4146377539
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasketballScoreManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_TotalScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_TotalMakes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_TotalAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_CurrentStreak,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_BestStreak,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_RoundDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_RemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_bGameActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_OnScoreChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_OnTimerUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_OnGameStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballScoreManager_Statics::NewProp_OnGameEnded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasketballScoreManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBasketballScoreManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BasketBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasketballScoreManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasketballScoreManager_Statics::ClassParams = {
	&UBasketballScoreManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBasketballScoreManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBasketballScoreManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasketballScoreManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasketballScoreManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBasketballScoreManager()
{
	if (!Z_Registration_Info_UClass_UBasketballScoreManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasketballScoreManager.OuterSingleton, Z_Construct_UClass_UBasketballScoreManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasketballScoreManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBasketballScoreManager);
UBasketballScoreManager::~UBasketballScoreManager() {}
// ********** End Class UBasketballScoreManager ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h__Script_BasketBallGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasketballScoreManager, UBasketballScoreManager::StaticClass, TEXT("UBasketballScoreManager"), &Z_Registration_Info_UClass_UBasketballScoreManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasketballScoreManager), 1262759408U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h__Script_BasketBallGame_2558134444(TEXT("/Script/BasketBallGame"),
	Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h__Script_BasketBallGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballScoreManager_h__Script_BasketBallGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
