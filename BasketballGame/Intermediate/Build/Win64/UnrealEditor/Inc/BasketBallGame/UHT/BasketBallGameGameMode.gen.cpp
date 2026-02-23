// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasketBallGameGameMode.h"
#include "BasketballGlobalTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasketBallGameGameMode() {}

// ********** Begin Cross Module References ********************************************************
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGameGameMode();
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGameGameMode_NoRegister();
BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballMatchComponent_NoRegister();
BASKETBALLGAME_API UScriptStruct* Z_Construct_UScriptStruct_FBasketballGameSnapshot();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BasketBallGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasketBallGameGameMode Function GetBestStreak ***************************
struct Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics
{
	struct BasketBallGameGameMode_eventGetBestStreak_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Scoring" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBallGameGameMode_eventGetBestStreak_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "GetBestStreak", Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics::BasketBallGameGameMode_eventGetBestStreak_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics::BasketBallGameGameMode_eventGetBestStreak_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execGetBestStreak)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBestStreak();
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function GetBestStreak *****************************

// ********** Begin Class ABasketBallGameGameMode Function GetCurrentScore *************************
struct Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics
{
	struct BasketBallGameGameMode_eventGetCurrentScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Scoring" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ========================\n// Read-Only Access (UI)\n// ========================\n" },
#endif
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read-Only Access (UI)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBallGameGameMode_eventGetCurrentScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "GetCurrentScore", Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics::BasketBallGameGameMode_eventGetCurrentScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics::BasketBallGameGameMode_eventGetCurrentScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execGetCurrentScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentScore();
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function GetCurrentScore ***************************

// ********** Begin Class ABasketBallGameGameMode Function GetCurrentStreak ************************
struct Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics
{
	struct BasketBallGameGameMode_eventGetCurrentStreak_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Scoring" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBallGameGameMode_eventGetCurrentStreak_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "GetCurrentStreak", Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics::BasketBallGameGameMode_eventGetCurrentStreak_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics::BasketBallGameGameMode_eventGetCurrentStreak_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execGetCurrentStreak)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentStreak();
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function GetCurrentStreak **************************

// ********** Begin Class ABasketBallGameGameMode Function GetEfficiency ***************************
struct Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics
{
	struct BasketBallGameGameMode_eventGetEfficiency_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Scoring" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBallGameGameMode_eventGetEfficiency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "GetEfficiency", Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics::BasketBallGameGameMode_eventGetEfficiency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics::BasketBallGameGameMode_eventGetEfficiency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execGetEfficiency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEfficiency();
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function GetEfficiency *****************************

// ********** Begin Class ABasketBallGameGameMode Function GetFinalScore ***************************
struct Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics
{
	struct BasketBallGameGameMode_eventGetFinalScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Scoring" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBallGameGameMode_eventGetFinalScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "GetFinalScore", Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics::BasketBallGameGameMode_eventGetFinalScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics::BasketBallGameGameMode_eventGetFinalScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execGetFinalScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFinalScore();
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function GetFinalScore *****************************

// ********** Begin Class ABasketBallGameGameMode Function GetGameSnapshot *************************
struct Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics
{
	struct BasketBallGameGameMode_eventGetGameSnapshot_Parms
	{
		FBasketballGameSnapshot ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get complete gameplay snapshot (forwards from MatchComponent) */" },
#endif
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get complete gameplay snapshot (forwards from MatchComponent)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBallGameGameMode_eventGetGameSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FBasketballGameSnapshot, METADATA_PARAMS(0, nullptr) }; // 3727493534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "GetGameSnapshot", Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics::BasketBallGameGameMode_eventGetGameSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics::BasketBallGameGameMode_eventGetGameSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execGetGameSnapshot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBasketballGameSnapshot*)Z_Param__Result=P_THIS->GetGameSnapshot();
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function GetGameSnapshot ***************************

// ********** Begin Class ABasketBallGameGameMode Function GetMatchComponent ***********************
struct Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics
{
	struct BasketBallGameGameMode_eventGetMatchComponent_Parms
	{
		UBasketballMatchComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Scoring" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBallGameGameMode_eventGetMatchComponent_Parms, ReturnValue), Z_Construct_UClass_UBasketballMatchComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "GetMatchComponent", Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics::BasketBallGameGameMode_eventGetMatchComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics::BasketBallGameGameMode_eventGetMatchComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execGetMatchComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBasketballMatchComponent**)Z_Param__Result=P_THIS->GetMatchComponent();
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function GetMatchComponent *************************

// ********** Begin Class ABasketBallGameGameMode Function GetSuccessfulShots **********************
struct Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics
{
	struct BasketBallGameGameMode_eventGetSuccessfulShots_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Scoring" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBallGameGameMode_eventGetSuccessfulShots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "GetSuccessfulShots", Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics::BasketBallGameGameMode_eventGetSuccessfulShots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics::BasketBallGameGameMode_eventGetSuccessfulShots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execGetSuccessfulShots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSuccessfulShots();
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function GetSuccessfulShots ************************

// ********** Begin Class ABasketBallGameGameMode Function GetTotalAttempts ************************
struct Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics
{
	struct BasketBallGameGameMode_eventGetTotalAttempts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Scoring" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBallGameGameMode_eventGetTotalAttempts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "GetTotalAttempts", Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics::BasketBallGameGameMode_eventGetTotalAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics::BasketBallGameGameMode_eventGetTotalAttempts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execGetTotalAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalAttempts();
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function GetTotalAttempts **************************

// ********** Begin Class ABasketBallGameGameMode Function GetXP ***********************************
struct Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics
{
	struct BasketBallGameGameMode_eventGetXP_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Scoring" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBallGameGameMode_eventGetXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "GetXP", Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics::BasketBallGameGameMode_eventGetXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics::BasketBallGameGameMode_eventGetXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_GetXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_GetXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execGetXP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetXP();
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function GetXP *************************************

// ********** Begin Class ABasketBallGameGameMode Function RegisterShotAttempt *********************
struct Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotAttempt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Scoring" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ========================\n// Authority Wrappers\n// ========================\n" },
#endif
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authority Wrappers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotAttempt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "RegisterShotAttempt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotAttempt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotAttempt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotAttempt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotAttempt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execRegisterShotAttempt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterShotAttempt();
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function RegisterShotAttempt ***********************

// ********** Begin Class ABasketBallGameGameMode Function RegisterShotMiss ************************
struct Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotMiss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Scoring" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotMiss_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "RegisterShotMiss", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotMiss_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotMiss_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotMiss()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotMiss_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execRegisterShotMiss)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterShotMiss();
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function RegisterShotMiss **************************

// ********** Begin Class ABasketBallGameGameMode Function RegisterShotSuccess *********************
struct Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics
{
	struct BasketBallGameGameMode_eventRegisterShotSuccess_Parms
	{
		int32 PointValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Scoring" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics::NewProp_PointValue = { "PointValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBallGameGameMode_eventRegisterShotSuccess_Parms, PointValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics::NewProp_PointValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGameGameMode, nullptr, "RegisterShotSuccess", Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics::BasketBallGameGameMode_eventRegisterShotSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics::BasketBallGameGameMode_eventRegisterShotSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGameGameMode::execRegisterShotSuccess)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PointValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterShotSuccess(Z_Param_PointValue);
	P_NATIVE_END;
}
// ********** End Class ABasketBallGameGameMode Function RegisterShotSuccess ***********************

// ********** Begin Class ABasketBallGameGameMode **************************************************
void ABasketBallGameGameMode::StaticRegisterNativesABasketBallGameGameMode()
{
	UClass* Class = ABasketBallGameGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBestStreak", &ABasketBallGameGameMode::execGetBestStreak },
		{ "GetCurrentScore", &ABasketBallGameGameMode::execGetCurrentScore },
		{ "GetCurrentStreak", &ABasketBallGameGameMode::execGetCurrentStreak },
		{ "GetEfficiency", &ABasketBallGameGameMode::execGetEfficiency },
		{ "GetFinalScore", &ABasketBallGameGameMode::execGetFinalScore },
		{ "GetGameSnapshot", &ABasketBallGameGameMode::execGetGameSnapshot },
		{ "GetMatchComponent", &ABasketBallGameGameMode::execGetMatchComponent },
		{ "GetSuccessfulShots", &ABasketBallGameGameMode::execGetSuccessfulShots },
		{ "GetTotalAttempts", &ABasketBallGameGameMode::execGetTotalAttempts },
		{ "GetXP", &ABasketBallGameGameMode::execGetXP },
		{ "RegisterShotAttempt", &ABasketBallGameGameMode::execRegisterShotAttempt },
		{ "RegisterShotMiss", &ABasketBallGameGameMode::execRegisterShotMiss },
		{ "RegisterShotSuccess", &ABasketBallGameGameMode::execRegisterShotSuccess },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABasketBallGameGameMode;
UClass* ABasketBallGameGameMode::GetPrivateStaticClass()
{
	using TClass = ABasketBallGameGameMode;
	if (!Z_Registration_Info_UClass_ABasketBallGameGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasketBallGameGameMode"),
			Z_Registration_Info_UClass_ABasketBallGameGameMode.InnerSingleton,
			StaticRegisterNativesABasketBallGameGameMode,
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
	return Z_Registration_Info_UClass_ABasketBallGameGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ABasketBallGameGameMode_NoRegister()
{
	return ABasketBallGameGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABasketBallGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Basketball GameMode\n *\n * Authority layer.\n * - Owns MatchComponent\n * - Receives calls from Hoop/BallHandler\n * - Exposes read-only access for UI\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BasketBallGameGameMode.h" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basketball GameMode\n\nAuthority layer.\n- Owns MatchComponent\n- Receives calls from Hoop/BallHandler\n- Exposes read-only access for UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Authority logic component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authority logic component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_GetBestStreak, "GetBestStreak" }, // 1088642556
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentScore, "GetCurrentScore" }, // 4293904411
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_GetCurrentStreak, "GetCurrentStreak" }, // 1592473197
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_GetEfficiency, "GetEfficiency" }, // 4267506553
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_GetFinalScore, "GetFinalScore" }, // 2853561361
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_GetGameSnapshot, "GetGameSnapshot" }, // 1734401604
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_GetMatchComponent, "GetMatchComponent" }, // 493873182
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_GetSuccessfulShots, "GetSuccessfulShots" }, // 4155668377
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_GetTotalAttempts, "GetTotalAttempts" }, // 3055124739
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_GetXP, "GetXP" }, // 2374304704
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotAttempt, "RegisterShotAttempt" }, // 2913886809
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotMiss, "RegisterShotMiss" }, // 3740920060
		{ &Z_Construct_UFunction_ABasketBallGameGameMode_RegisterShotSuccess, "RegisterShotSuccess" }, // 1149671177
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasketBallGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasketBallGameGameMode_Statics::NewProp_MatchComponent = { "MatchComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGameGameMode, MatchComponent), Z_Construct_UClass_UBasketballMatchComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchComponent_MetaData), NewProp_MatchComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasketBallGameGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGameGameMode_Statics::NewProp_MatchComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBallGameGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasketBallGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BasketBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBallGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasketBallGameGameMode_Statics::ClassParams = {
	&ABasketBallGameGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABasketBallGameGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBallGameGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBallGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasketBallGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasketBallGameGameMode()
{
	if (!Z_Registration_Info_UClass_ABasketBallGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasketBallGameGameMode.OuterSingleton, Z_Construct_UClass_ABasketBallGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasketBallGameGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasketBallGameGameMode);
ABasketBallGameGameMode::~ABasketBallGameGameMode() {}
// ********** End Class ABasketBallGameGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h__Script_BasketBallGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasketBallGameGameMode, ABasketBallGameGameMode::StaticClass, TEXT("ABasketBallGameGameMode"), &Z_Registration_Info_UClass_ABasketBallGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasketBallGameGameMode), 3387029073U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h__Script_BasketBallGame_1460317725(TEXT("/Script/BasketBallGame"),
	Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h__Script_BasketBallGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h__Script_BasketBallGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
