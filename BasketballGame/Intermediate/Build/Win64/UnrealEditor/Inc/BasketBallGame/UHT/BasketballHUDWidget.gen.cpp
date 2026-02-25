// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasketballHUDWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasketballHUDWidget() {}

// ********** Begin Cross Module References ********************************************************
BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballHUDWidget();
BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BasketBallGame();
// ********** End Cross Module References **********************************************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasketballHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttemptsText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasketballHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EfficiencyText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasketballHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStreakText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasketballHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BestStreakText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasketballHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttemptsText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EfficiencyText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentStreakText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BestStreakText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasketballHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasketballHUDWidget_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballHUDWidget, ScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText_MetaData), NewProp_ScoreText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasketballHUDWidget_Statics::NewProp_AttemptsText = { "AttemptsText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballHUDWidget, AttemptsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttemptsText_MetaData), NewProp_AttemptsText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasketballHUDWidget_Statics::NewProp_EfficiencyText = { "EfficiencyText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballHUDWidget, EfficiencyText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EfficiencyText_MetaData), NewProp_EfficiencyText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasketballHUDWidget_Statics::NewProp_CurrentStreakText = { "CurrentStreakText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballHUDWidget, CurrentStreakText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStreakText_MetaData), NewProp_CurrentStreakText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasketballHUDWidget_Statics::NewProp_BestStreakText = { "BestStreakText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasketballHUDWidget, BestStreakText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BestStreakText_MetaData), NewProp_BestStreakText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasketballHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballHUDWidget_Statics::NewProp_ScoreText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballHUDWidget_Statics::NewProp_AttemptsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballHUDWidget_Statics::NewProp_EfficiencyText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballHUDWidget_Statics::NewProp_CurrentStreakText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasketballHUDWidget_Statics::NewProp_BestStreakText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasketballHUDWidget_Statics::PropPointers) < 2048);
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
	nullptr,
	Z_Construct_UClass_UBasketballHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBasketballHUDWidget_Statics::PropPointers),
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
		{ Z_Construct_UClass_UBasketballHUDWidget, UBasketballHUDWidget::StaticClass, TEXT("UBasketballHUDWidget"), &Z_Registration_Info_UClass_UBasketballHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasketballHUDWidget), 724337248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHUDWidget_h__Script_BasketBallGame_341067779(TEXT("/Script/BasketBallGame"),
	Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHUDWidget_h__Script_BasketBallGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHUDWidget_h__Script_BasketBallGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
