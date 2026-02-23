// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasketballGlobalTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasketballGlobalTypes() {}

// ********** Begin Cross Module References ********************************************************
BASKETBALLGAME_API UScriptStruct* Z_Construct_UScriptStruct_FBasketballGameSnapshot();
UPackage* Z_Construct_UPackage__Script_BasketBallGame();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBasketballGameSnapshot *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBasketballGameSnapshot;
class UScriptStruct* FBasketballGameSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBasketballGameSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBasketballGameSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasketballGameSnapshot, (UObject*)Z_Construct_UPackage__Script_BasketBallGame(), TEXT("BasketballGameSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_FBasketballGameSnapshot.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n============================================================\nGLOBAL GAMEPLAY SNAPSHOT STRUCT\n============================================================\n\nPurpose:\n    Carries gameplay data from MatchComponent \xe2\x86\x92 GameMode \xe2\x86\x92 UI.\n\nRules:\n    - No functions\n    - No gameplay logic\n    - No references to other gameplay classes\n    - Pure data only\n    - Safe for replication in future\n\nThis struct is the ONLY object UI will consume.\n============================================================\n*/" },
#endif
		{ "ModuleRelativePath", "Public/BasketballGlobalTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GLOBAL GAMEPLAY SNAPSHOT STRUCT\n\n\nPurpose:\n    Carries gameplay data from MatchComponent \xe2\x86\x92 GameMode \xe2\x86\x92 UI.\n\nRules:\n    - No functions\n    - No gameplay logic\n    - No references to other gameplay classes\n    - Pure data only\n    - Safe for replication in future\n\nThis struct is the ONLY object UI will consume." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "BasketballGameSnapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===============================\n// CORE SCORING\n// ===============================\n" },
#endif
		{ "ModuleRelativePath", "Public/BasketballGlobalTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CORE SCORING" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalAttempts_MetaData[] = {
		{ "Category", "BasketballGameSnapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Standard basketball scoring (2 points default)\n" },
#endif
		{ "ModuleRelativePath", "Public/BasketballGlobalTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Standard basketball scoring (2 points default)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessfulShots_MetaData[] = {
		{ "Category", "BasketballGameSnapshot" },
		{ "ModuleRelativePath", "Public/BasketballGlobalTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStreak_MetaData[] = {
		{ "Category", "BasketballGameSnapshot" },
		{ "ModuleRelativePath", "Public/BasketballGlobalTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BestStreak_MetaData[] = {
		{ "Category", "BasketballGameSnapshot" },
		{ "ModuleRelativePath", "Public/BasketballGlobalTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Efficiency_MetaData[] = {
		{ "Category", "BasketballGameSnapshot" },
		{ "ModuleRelativePath", "Public/BasketballGlobalTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalAttempts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SuccessfulShots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStreak;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BestStreak;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Efficiency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasketballGameSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasketballGameSnapshot, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewProp_TotalAttempts = { "TotalAttempts", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasketballGameSnapshot, TotalAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalAttempts_MetaData), NewProp_TotalAttempts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewProp_SuccessfulShots = { "SuccessfulShots", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasketballGameSnapshot, SuccessfulShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessfulShots_MetaData), NewProp_SuccessfulShots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewProp_CurrentStreak = { "CurrentStreak", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasketballGameSnapshot, CurrentStreak), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStreak_MetaData), NewProp_CurrentStreak_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewProp_BestStreak = { "BestStreak", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasketballGameSnapshot, BestStreak), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BestStreak_MetaData), NewProp_BestStreak_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewProp_Efficiency = { "Efficiency", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasketballGameSnapshot, Efficiency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Efficiency_MetaData), NewProp_Efficiency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewProp_TotalAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewProp_SuccessfulShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewProp_CurrentStreak,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewProp_BestStreak,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewProp_Efficiency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BasketBallGame,
	nullptr,
	&NewStructOps,
	"BasketballGameSnapshot",
	Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::PropPointers),
	sizeof(FBasketballGameSnapshot),
	alignof(FBasketballGameSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBasketballGameSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_FBasketballGameSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBasketballGameSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBasketballGameSnapshot.InnerSingleton;
}
// ********** End ScriptStruct FBasketballGameSnapshot *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_Public_BasketballGlobalTypes_h__Script_BasketBallGame_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBasketballGameSnapshot::StaticStruct, Z_Construct_UScriptStruct_FBasketballGameSnapshot_Statics::NewStructOps, TEXT("BasketballGameSnapshot"), &Z_Registration_Info_UScriptStruct_FBasketballGameSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBasketballGameSnapshot), 3727493534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_Public_BasketballGlobalTypes_h__Script_BasketBallGame_2429902272(TEXT("/Script/BasketBallGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_Public_BasketballGlobalTypes_h__Script_BasketBallGame_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_Public_BasketballGlobalTypes_h__Script_BasketBallGame_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
