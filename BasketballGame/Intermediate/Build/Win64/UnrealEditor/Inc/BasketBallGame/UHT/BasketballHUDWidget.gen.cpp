// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasketballHUDWidget.h"
#include "BasketballGlobalTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasketballHUDWidget() {}

// ********** Begin Cross Module References ********************************************************
BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballHUDWidget();
BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballHUDWidget_NoRegister();
BASKETBALLGAME_API UScriptStruct* Z_Construct_UScriptStruct_FBasketballGameSnapshot();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BasketBallGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBasketballHUDWidget Function RefreshHUD *********************************
struct BasketballHUDWidget_eventRefreshHUD_Parms
{
	FBasketballGameSnapshot Snapshot;
};
static FName NAME_UBasketballHUDWidget_RefreshHUD = FName(TEXT("RefreshHUD"));
void UBasketballHUDWidget::RefreshHUD(FBasketballGameSnapshot const& Snapshot)
{
	BasketballHUDWidget_eventRefreshHUD_Parms Parms;
	Parms.Snapshot=Snapshot;
	UFunction* Func = FindFunctionChecked(NAME_UBasketballHUDWidget_RefreshHUD);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Refresh HUD with latest gameplay snapshot\n\x09 * \n\x09 * Called by PlayerController after scoring events.\n\x09 * Implement this event in Blueprint to update UI elements.\n\x09 * \n\x09 * @param Snapshot - Complete gameplay data snapshot (read-only)\n\x09 * \n\x09 * Blueprint Usage:\n\x09 * - Break Snapshot struct\n\x09 * - Set Score text widget\n\x09 * - Set Attempts text widget\n\x09 * - Set Streak text widget\n\x09 * - Set Efficiency text widget (format as percentage)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "BasketballHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Refresh HUD with latest gameplay snapshot\n\nCalled by PlayerController after scoring events.\nImplement this event in Blueprint to update UI elements.\n\n@param Snapshot - Complete gameplay data snapshot (read-only)\n\nBlueprint Usage:\n- Break Snapshot struct\n- Set Score text widget\n- Set Attempts text widget\n- Set Streak text widget\n- Set Efficiency text widget (format as percentage)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketballHUDWidget_eventRefreshHUD_Parms, Snapshot), Z_Construct_UScriptStruct_FBasketballGameSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Snapshot_MetaData), NewProp_Snapshot_MetaData) }; // 3727493534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD_Statics::NewProp_Snapshot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasketballHUDWidget, nullptr, "RefreshHUD", Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD_Statics::PropPointers), sizeof(BasketballHUDWidget_eventRefreshHUD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BasketballHUDWidget_eventRefreshHUD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UBasketballHUDWidget Function RefreshHUD ***********************************

// ********** Begin Class UBasketballHUDWidget *****************************************************
void UBasketballHUDWidget::StaticRegisterNativesUBasketballHUDWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBasketballHUDWidget;
UClass* UBasketballHUDWidget::GetPrivateStaticClass()
{
	using TClass = UBasketballHUDWidget;
	if (!Z_Registration_Info_UClass_UBasketballHUDWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasketballHUDWidget"),
			Z_Registration_Info_UClass_UBasketballHUDWidget.InnerSingleton,
			StaticRegisterNativesUBasketballHUDWidget,
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
	return Z_Registration_Info_UClass_UBasketballHUDWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UBasketballHUDWidget_NoRegister()
{
	return UBasketballHUDWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBasketballHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Basketball HUD Widget (C++ Base Class)\n * \n * Pure display layer for gameplay UI.\n * Consumes FBasketballGameSnapshot from PlayerController.\n * Implements display logic in Blueprint via RefreshHUD event.\n * \n * Rules:\n * - NO gameplay logic\n * - NO calculations (efficiency/score/streak math)\n * - NO Event Tick\n * - NO Designer bindings\n * - NO direct access to MatchComponent/GameMode\n * - Receives snapshot \xe2\x86\x92 Updates text widgets \xe2\x86\x92 Done\n * \n * Blueprint Implementation:\n * - Create child Blueprint widget (e.g., WBP_BasketballHUD)\n * - Set parent class to UBasketballHUDWidget\n * - Implement \"RefreshHUD\" event\n * - Use Snapshot to set text widget content\n */" },
#endif
		{ "IncludePath", "BasketballHUDWidget.h" },
		{ "ModuleRelativePath", "BasketballHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basketball HUD Widget (C++ Base Class)\n\nPure display layer for gameplay UI.\nConsumes FBasketballGameSnapshot from PlayerController.\nImplements display logic in Blueprint via RefreshHUD event.\n\nRules:\n- NO gameplay logic\n- NO calculations (efficiency/score/streak math)\n- NO Event Tick\n- NO Designer bindings\n- NO direct access to MatchComponent/GameMode\n- Receives snapshot \xe2\x86\x92 Updates text widgets \xe2\x86\x92 Done\n\nBlueprint Implementation:\n- Create child Blueprint widget (e.g., WBP_BasketballHUD)\n- Set parent class to UBasketballHUDWidget\n- Implement \"RefreshHUD\" event\n- Use Snapshot to set text widget content" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasketballHUDWidget_RefreshHUD, "RefreshHUD" }, // 458194544
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasketballHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBasketballHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BasketBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasketballHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasketballHUDWidget_Statics::ClassParams = {
	&UBasketballHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasketballHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasketballHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBasketballHUDWidget()
{
	if (!Z_Registration_Info_UClass_UBasketballHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasketballHUDWidget.OuterSingleton, Z_Construct_UClass_UBasketballHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasketballHUDWidget.OuterSingleton;
}
UBasketballHUDWidget::UBasketballHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBasketballHUDWidget);
UBasketballHUDWidget::~UBasketballHUDWidget() {}
// ********** End Class UBasketballHUDWidget *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHUDWidget_h__Script_BasketBallGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasketballHUDWidget, UBasketballHUDWidget::StaticClass, TEXT("UBasketballHUDWidget"), &Z_Registration_Info_UClass_UBasketballHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasketballHUDWidget), 2901461715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHUDWidget_h__Script_BasketBallGame_1195806066(TEXT("/Script/BasketBallGame"),
	Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHUDWidget_h__Script_BasketBallGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHUDWidget_h__Script_BasketBallGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
