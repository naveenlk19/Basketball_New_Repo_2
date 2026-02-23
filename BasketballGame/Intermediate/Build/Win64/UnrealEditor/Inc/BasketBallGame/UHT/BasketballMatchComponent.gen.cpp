// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasketballMatchComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasketballMatchComponent() {}

// ********** Begin Cross Module References ********************************************************
BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballMatchComponent();
BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballMatchComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BasketBallGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBasketballMatchComponent Function CalculateEfficiency *******************
struct Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics
{
	struct BasketballMatchComponent_eventCalculateEfficiency_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Match Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Calculate current shooting efficiency (0.0 - 1.0) */" },
#endif
		{ "ModuleRelativePath", "BasketballMatchComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculate current shooting efficiency (0.0 - 1.0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballMatchComponent_eventCalculateEfficiency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballMatchComponent, nullptr, "CalculateEfficiency", Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics::BasketballMatchComponent_eventCalculateEfficiency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics::BasketballMatchComponent_eventCalculateEfficiency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballMatchComponent::execCalculateEfficiency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateEfficiency();
	P_NATIVE_END;
}
// ********** End Class UBasketballMatchComponent Function CalculateEfficiency *********************

// ********** Begin Class UBasketballMatchComponent Function CalculateFinalScore *******************
struct Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics
{
	struct BasketballMatchComponent_eventCalculateFinalScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Match Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Calculate final competitive score (leaderboard metric)\n\x09 * Formula: FinalScore = (Points * 10) + (Efficiency * 100) + (BestStreak * 5)\n\x09 * NOTE: Does NOT include XP or HotHandMultiplier\n\x09 */" },
#endif
		{ "ModuleRelativePath", "BasketballMatchComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculate final competitive score (leaderboard metric)\nFormula: FinalScore = (Points * 10) + (Efficiency * 100) + (BestStreak * 5)\nNOTE: Does NOT include XP or HotHandMultiplier" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballMatchComponent_eventCalculateFinalScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballMatchComponent, nullptr, "CalculateFinalScore", Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics::BasketballMatchComponent_eventCalculateFinalScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics::BasketballMatchComponent_eventCalculateFinalScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballMatchComponent::execCalculateFinalScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CalculateFinalScore();
	P_NATIVE_END;
}
// ********** End Class UBasketballMatchComponent Function CalculateFinalScore *********************

// ********** Begin Class UBasketballMatchComponent Function CalculateXP ***************************
struct Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics
{
	struct BasketballMatchComponent_eventCalculateXP_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Match Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Calculate total XP earned (progression metric, end of match only)\n\x09 * Formula: XP = (SuccessfulShots * 10) + (BestStreak * 5) + (Efficiency * 50)\n\x09 * NOTE: XP is DERIVED, not stored. Call this at match end and persist externally.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "BasketballMatchComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculate total XP earned (progression metric, end of match only)\nFormula: XP = (SuccessfulShots * 10) + (BestStreak * 5) + (Efficiency * 50)\nNOTE: XP is DERIVED, not stored. Call this at match end and persist externally." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballMatchComponent_eventCalculateXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballMatchComponent, nullptr, "CalculateXP", Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics::BasketballMatchComponent_eventCalculateXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics::BasketballMatchComponent_eventCalculateXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballMatchComponent::execCalculateXP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CalculateXP();
	P_NATIVE_END;
}
// ********** End Class UBasketballMatchComponent Function CalculateXP *****************************

// ********** Begin Class UBasketballMatchComponent Function GetBestStreak *************************
struct Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics
{
	struct BasketballMatchComponent_eventGetBestStreak_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Match Stats" },
		{ "ModuleRelativePath", "BasketballMatchComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballMatchComponent_eventGetBestStreak_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballMatchComponent, nullptr, "GetBestStreak", Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics::BasketballMatchComponent_eventGetBestStreak_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics::BasketballMatchComponent_eventGetBestStreak_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballMatchComponent::execGetBestStreak)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBestStreak();
	P_NATIVE_END;
}
// ********** End Class UBasketballMatchComponent Function GetBestStreak ***************************

// ********** Begin Class UBasketballMatchComponent Function GetCurrentStreak **********************
struct Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics
{
	struct BasketballMatchComponent_eventGetCurrentStreak_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Match Stats" },
		{ "ModuleRelativePath", "BasketballMatchComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballMatchComponent_eventGetCurrentStreak_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballMatchComponent, nullptr, "GetCurrentStreak", Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics::BasketballMatchComponent_eventGetCurrentStreak_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics::BasketballMatchComponent_eventGetCurrentStreak_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballMatchComponent::execGetCurrentStreak)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentStreak();
	P_NATIVE_END;
}
// ********** End Class UBasketballMatchComponent Function GetCurrentStreak ************************

// ********** Begin Class UBasketballMatchComponent Function GetFailedShots ************************
struct Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics
{
	struct BasketballMatchComponent_eventGetFailedShots_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Match Stats" },
		{ "ModuleRelativePath", "BasketballMatchComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballMatchComponent_eventGetFailedShots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballMatchComponent, nullptr, "GetFailedShots", Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics::BasketballMatchComponent_eventGetFailedShots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics::BasketballMatchComponent_eventGetFailedShots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballMatchComponent::execGetFailedShots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFailedShots();
	P_NATIVE_END;
}
// ********** End Class UBasketballMatchComponent Function GetFailedShots **************************

// ********** Begin Class UBasketballMatchComponent Function GetHotHandMultiplier ******************
struct Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics
{
	struct BasketballMatchComponent_eventGetHotHandMultiplier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Match Stats" },
		{ "ModuleRelativePath", "BasketballMatchComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballMatchComponent_eventGetHotHandMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballMatchComponent, nullptr, "GetHotHandMultiplier", Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics::BasketballMatchComponent_eventGetHotHandMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics::BasketballMatchComponent_eventGetHotHandMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballMatchComponent::execGetHotHandMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHotHandMultiplier();
	P_NATIVE_END;
}
// ********** End Class UBasketballMatchComponent Function GetHotHandMultiplier ********************

// ********** Begin Class UBasketballMatchComponent Function GetPoints *****************************
struct Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics
{
	struct BasketballMatchComponent_eventGetPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Match Stats" },
		{ "ModuleRelativePath", "BasketballMatchComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballMatchComponent_eventGetPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballMatchComponent, nullptr, "GetPoints", Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics::BasketballMatchComponent_eventGetPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics::BasketballMatchComponent_eventGetPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballMatchComponent_GetPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballMatchComponent_GetPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballMatchComponent::execGetPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPoints();
	P_NATIVE_END;
}
// ********** End Class UBasketballMatchComponent Function GetPoints *******************************

// ********** Begin Class UBasketballMatchComponent Function GetSuccessfulShots ********************
struct Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics
{
	struct BasketballMatchComponent_eventGetSuccessfulShots_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Match Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ======== Getters (Const, BlueprintPure) ========\n" },
#endif
		{ "ModuleRelativePath", "BasketballMatchComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "======== Getters (Const, BlueprintPure) ========" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballMatchComponent_eventGetSuccessfulShots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballMatchComponent, nullptr, "GetSuccessfulShots", Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics::BasketballMatchComponent_eventGetSuccessfulShots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics::BasketballMatchComponent_eventGetSuccessfulShots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballMatchComponent::execGetSuccessfulShots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSuccessfulShots();
	P_NATIVE_END;
}
// ********** End Class UBasketballMatchComponent Function GetSuccessfulShots **********************

// ********** Begin Class UBasketballMatchComponent Function GetTotalAttempts **********************
struct Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics
{
	struct BasketballMatchComponent_eventGetTotalAttempts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Match Stats" },
		{ "ModuleRelativePath", "BasketballMatchComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballMatchComponent_eventGetTotalAttempts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballMatchComponent, nullptr, "GetTotalAttempts", Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics::BasketballMatchComponent_eventGetTotalAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics::BasketballMatchComponent_eventGetTotalAttempts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballMatchComponent::execGetTotalAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalAttempts();
	P_NATIVE_END;
}
// ********** End Class UBasketballMatchComponent Function GetTotalAttempts ************************

// ********** Begin Class UBasketballMatchComponent Function ResetStats ****************************
struct Z_Construct_UFunction_UBasketballMatchComponent_ResetStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball|Match Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset all match statistics (called at match start) */" },
#endif
		{ "ModuleRelativePath", "BasketballMatchComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset all match statistics (called at match start)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballMatchComponent_ResetStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballMatchComponent, nullptr, "ResetStats", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballMatchComponent_ResetStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballMatchComponent_ResetStats_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBasketballMatchComponent_ResetStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballMatchComponent_ResetStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasketballMatchComponent::execResetStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetStats();
	P_NATIVE_END;
}
// ********** End Class UBasketballMatchComponent Function ResetStats ******************************

// ********** Begin Class UBasketballMatchComponent ************************************************
void UBasketballMatchComponent::StaticRegisterNativesUBasketballMatchComponent()
{
	UClass* Class = UBasketballMatchComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateEfficiency", &UBasketballMatchComponent::execCalculateEfficiency },
		{ "CalculateFinalScore", &UBasketballMatchComponent::execCalculateFinalScore },
		{ "CalculateXP", &UBasketballMatchComponent::execCalculateXP },
		{ "GetBestStreak", &UBasketballMatchComponent::execGetBestStreak },
		{ "GetCurrentStreak", &UBasketballMatchComponent::execGetCurrentStreak },
		{ "GetFailedShots", &UBasketballMatchComponent::execGetFailedShots },
		{ "GetHotHandMultiplier", &UBasketballMatchComponent::execGetHotHandMultiplier },
		{ "GetPoints", &UBasketballMatchComponent::execGetPoints },
		{ "GetSuccessfulShots", &UBasketballMatchComponent::execGetSuccessfulShots },
		{ "GetTotalAttempts", &UBasketballMatchComponent::execGetTotalAttempts },
		{ "ResetStats", &UBasketballMatchComponent::execResetStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBasketballMatchComponent;
UClass* UBasketballMatchComponent::GetPrivateStaticClass()
{
	using TClass = UBasketballMatchComponent;
	if (!Z_Registration_Info_UClass_UBasketballMatchComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasketballMatchComponent"),
			Z_Registration_Info_UClass_UBasketballMatchComponent.InnerSingleton,
			StaticRegisterNativesUBasketballMatchComponent,
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
	return Z_Registration_Info_UClass_UBasketballMatchComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UBasketballMatchComponent_NoRegister()
{
	return UBasketballMatchComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBasketballMatchComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Basketball Match Component\n * \n * Authority component for all match statistics and scoring logic.\n * Lives in GameMode. No replication, no UI references, no GameState references.\n * Pure gameplay logic only.\n * \n * Architecture:\n * - GameMode owns this component (authority)\n * - GameMode pushes snapshots to GameState (future replication)\n * - UI reads from GameState only\n * - XP is DERIVED (calculated on-demand), not stored\n * \n * Shot Flow (Two-Stage):\n * 1. BallHandler launches ball -> RegisterShotAttempt() -> TotalAttempts++\n * 2. Hoop detects outcome -> RegisterShotSuccess() OR RegisterShotMiss()\n */" },
#endif
		{ "IncludePath", "BasketballMatchComponent.h" },
		{ "ModuleRelativePath", "BasketballMatchComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basketball Match Component\n\nAuthority component for all match statistics and scoring logic.\nLives in GameMode. No replication, no UI references, no GameState references.\nPure gameplay logic only.\n\nArchitecture:\n- GameMode owns this component (authority)\n- GameMode pushes snapshots to GameState (future replication)\n- UI reads from GameState only\n- XP is DERIVED (calculated on-demand), not stored\n\nShot Flow (Two-Stage):\n1. BallHandler launches ball -> RegisterShotAttempt() -> TotalAttempts++\n2. Hoop detects outcome -> RegisterShotSuccess() OR RegisterShotMiss()" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasketballMatchComponent_CalculateEfficiency, "CalculateEfficiency" }, // 1472051306
		{ &Z_Construct_UFunction_UBasketballMatchComponent_CalculateFinalScore, "CalculateFinalScore" }, // 3233565043
		{ &Z_Construct_UFunction_UBasketballMatchComponent_CalculateXP, "CalculateXP" }, // 1738729360
		{ &Z_Construct_UFunction_UBasketballMatchComponent_GetBestStreak, "GetBestStreak" }, // 3242130117
		{ &Z_Construct_UFunction_UBasketballMatchComponent_GetCurrentStreak, "GetCurrentStreak" }, // 1253678302
		{ &Z_Construct_UFunction_UBasketballMatchComponent_GetFailedShots, "GetFailedShots" }, // 3851907251
		{ &Z_Construct_UFunction_UBasketballMatchComponent_GetHotHandMultiplier, "GetHotHandMultiplier" }, // 3143887819
		{ &Z_Construct_UFunction_UBasketballMatchComponent_GetPoints, "GetPoints" }, // 2602936686
		{ &Z_Construct_UFunction_UBasketballMatchComponent_GetSuccessfulShots, "GetSuccessfulShots" }, // 38885534
		{ &Z_Construct_UFunction_UBasketballMatchComponent_GetTotalAttempts, "GetTotalAttempts" }, // 291096018
		{ &Z_Construct_UFunction_UBasketballMatchComponent_ResetStats, "ResetStats" }, // 980531581
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasketballMatchComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBasketballMatchComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BasketBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasketballMatchComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasketballMatchComponent_Statics::ClassParams = {
	&UBasketballMatchComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasketballMatchComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasketballMatchComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBasketballMatchComponent()
{
	if (!Z_Registration_Info_UClass_UBasketballMatchComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasketballMatchComponent.OuterSingleton, Z_Construct_UClass_UBasketballMatchComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasketballMatchComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBasketballMatchComponent);
UBasketballMatchComponent::~UBasketballMatchComponent() {}
// ********** End Class UBasketballMatchComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h__Script_BasketBallGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasketballMatchComponent, UBasketballMatchComponent::StaticClass, TEXT("UBasketballMatchComponent"), &Z_Registration_Info_UClass_UBasketballMatchComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasketballMatchComponent), 3045072872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h__Script_BasketBallGame_1907971624(TEXT("/Script/BasketBallGame"),
	Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h__Script_BasketBallGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballMatchComponent_h__Script_BasketBallGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
