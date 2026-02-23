// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasketBallGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasketBallGameState() {}

// ********** Begin Cross Module References ********************************************************
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGameState();
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGameState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_BasketBallGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasketBallGameState *****************************************************
void ABasketBallGameState::StaticRegisterNativesABasketBallGameState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABasketBallGameState;
UClass* ABasketBallGameState::GetPrivateStaticClass()
{
	using TClass = ABasketBallGameState;
	if (!Z_Registration_Info_UClass_ABasketBallGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasketBallGameState"),
			Z_Registration_Info_UClass_ABasketBallGameState.InnerSingleton,
			StaticRegisterNativesABasketBallGameState,
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
	return Z_Registration_Info_UClass_ABasketBallGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_ABasketBallGameState_NoRegister()
{
	return ABasketBallGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABasketBallGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameState = Snapshot mirror only.\n * NO gameplay logic.\n * GameMode pushes values here.\n * UI reads from here.\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BasketBallGameState.h" },
		{ "ModuleRelativePath", "BasketBallGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameState = Snapshot mirror only.\nNO gameplay logic.\nGameMode pushes values here.\nUI reads from here." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Match" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== MATCH SNAPSHOT =====\n" },
#endif
		{ "ModuleRelativePath", "BasketBallGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== MATCH SNAPSHOT =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalAttempts_MetaData[] = {
		{ "Category", "Match" },
		{ "ModuleRelativePath", "BasketBallGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessfulShots_MetaData[] = {
		{ "Category", "Match" },
		{ "ModuleRelativePath", "BasketBallGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BestStreak_MetaData[] = {
		{ "Category", "Match" },
		{ "ModuleRelativePath", "BasketBallGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Efficiency_MetaData[] = {
		{ "Category", "Match" },
		{ "ModuleRelativePath", "BasketBallGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalScore_MetaData[] = {
		{ "Category", "Match" },
		{ "ModuleRelativePath", "BasketBallGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchTimeRemaining_MetaData[] = {
		{ "Category", "Match" },
		{ "ModuleRelativePath", "BasketBallGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchActive_MetaData[] = {
		{ "Category", "Match" },
		{ "ModuleRelativePath", "BasketBallGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalAttempts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SuccessfulShots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BestStreak;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Efficiency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FinalScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MatchTimeRemaining;
	static void NewProp_bMatchActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasketBallGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGameState, Points), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_TotalAttempts = { "TotalAttempts", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGameState, TotalAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalAttempts_MetaData), NewProp_TotalAttempts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_SuccessfulShots = { "SuccessfulShots", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGameState, SuccessfulShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessfulShots_MetaData), NewProp_SuccessfulShots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_BestStreak = { "BestStreak", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGameState, BestStreak), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BestStreak_MetaData), NewProp_BestStreak_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_Efficiency = { "Efficiency", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGameState, Efficiency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Efficiency_MetaData), NewProp_Efficiency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_FinalScore = { "FinalScore", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGameState, FinalScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalScore_MetaData), NewProp_FinalScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_MatchTimeRemaining = { "MatchTimeRemaining", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGameState, MatchTimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchTimeRemaining_MetaData), NewProp_MatchTimeRemaining_MetaData) };
void Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_bMatchActive_SetBit(void* Obj)
{
	((ABasketBallGameState*)Obj)->bMatchActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_bMatchActive = { "bMatchActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABasketBallGameState), &Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_bMatchActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchActive_MetaData), NewProp_bMatchActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasketBallGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_TotalAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_SuccessfulShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_BestStreak,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_Efficiency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_FinalScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_MatchTimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGameState_Statics::NewProp_bMatchActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBallGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasketBallGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BasketBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBallGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasketBallGameState_Statics::ClassParams = {
	&ABasketBallGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABasketBallGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBallGameState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBallGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasketBallGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasketBallGameState()
{
	if (!Z_Registration_Info_UClass_ABasketBallGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasketBallGameState.OuterSingleton, Z_Construct_UClass_ABasketBallGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasketBallGameState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasketBallGameState);
ABasketBallGameState::~ABasketBallGameState() {}
// ********** End Class ABasketBallGameState *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameState_h__Script_BasketBallGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasketBallGameState, ABasketBallGameState::StaticClass, TEXT("ABasketBallGameState"), &Z_Registration_Info_UClass_ABasketBallGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasketBallGameState), 360114920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameState_h__Script_BasketBallGame_3075877072(TEXT("/Script/BasketBallGame"),
	Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameState_h__Script_BasketBallGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameState_h__Script_BasketBallGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
