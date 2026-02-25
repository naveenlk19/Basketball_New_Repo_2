// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasketBallGamePlayerController.h"
#include "BasketballGlobalTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasketBallGamePlayerController() {}

// ********** Begin Cross Module References ********************************************************
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGamePlayerController();
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGamePlayerController_NoRegister();
BASKETBALLGAME_API UClass* Z_Construct_UClass_UBasketballHUDWidget_NoRegister();
BASKETBALLGAME_API UScriptStruct* Z_Construct_UScriptStruct_FBasketballGameSnapshot();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_BasketBallGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasketBallGamePlayerController Function Client_RefreshHUD ***************
struct BasketBallGamePlayerController_eventClient_RefreshHUD_Parms
{
	FBasketballGameSnapshot Snapshot;
};
static FName NAME_ABasketBallGamePlayerController_Client_RefreshHUD = FName(TEXT("Client_RefreshHUD"));
void ABasketBallGamePlayerController::Client_RefreshHUD(FBasketballGameSnapshot const& Snapshot)
{
	BasketBallGamePlayerController_eventClient_RefreshHUD_Parms Parms;
	Parms.Snapshot=Snapshot;
	UFunction* Func = FindFunctionChecked(NAME_ABasketBallGamePlayerController_Client_RefreshHUD);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasketBallGamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBallGamePlayerController_eventClient_RefreshHUD_Parms, Snapshot), Z_Construct_UScriptStruct_FBasketballGameSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Snapshot_MetaData), NewProp_Snapshot_MetaData) }; // 3727493534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD_Statics::NewProp_Snapshot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBallGamePlayerController, nullptr, "Client_RefreshHUD", Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD_Statics::PropPointers), sizeof(BasketBallGamePlayerController_eventClient_RefreshHUD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BasketBallGamePlayerController_eventClient_RefreshHUD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBallGamePlayerController::execClient_RefreshHUD)
{
	P_GET_STRUCT(FBasketballGameSnapshot,Z_Param_Snapshot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_RefreshHUD_Implementation(Z_Param_Snapshot);
	P_NATIVE_END;
}
// ********** End Class ABasketBallGamePlayerController Function Client_RefreshHUD *****************

// ********** Begin Class ABasketBallGamePlayerController ******************************************
void ABasketBallGamePlayerController::StaticRegisterNativesABasketBallGamePlayerController()
{
	UClass* Class = ABasketBallGamePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_RefreshHUD", &ABasketBallGamePlayerController::execClient_RefreshHUD },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABasketBallGamePlayerController;
UClass* ABasketBallGamePlayerController::GetPrivateStaticClass()
{
	using TClass = ABasketBallGamePlayerController;
	if (!Z_Registration_Info_UClass_ABasketBallGamePlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasketBallGamePlayerController"),
			Z_Registration_Info_UClass_ABasketBallGamePlayerController.InnerSingleton,
			StaticRegisterNativesABasketBallGamePlayerController,
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
	return Z_Registration_Info_UClass_ABasketBallGamePlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ABasketBallGamePlayerController_NoRegister()
{
	return ABasketBallGamePlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABasketBallGamePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BasketBallGamePlayerController.h" },
		{ "ModuleRelativePath", "BasketBallGamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreHUDClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ================= UI =================\n" },
#endif
		{ "ModuleRelativePath", "BasketBallGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "================= UI =================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreHUD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UUserWidget* ScoreHUD;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasketBallGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UUserWidget* ScoreHUD;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ================= INPUT =================\n" },
#endif
		{ "ModuleRelativePath", "BasketBallGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "================= INPUT =================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BasketBallGamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BasketBallGamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BasketBallGamePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ScoreHUDClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreHUD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasketBallGamePlayerController_Client_RefreshHUD, "Client_RefreshHUD" }, // 1019349400
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasketBallGamePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABasketBallGamePlayerController_Statics::NewProp_ScoreHUDClass = { "ScoreHUDClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGamePlayerController, ScoreHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBasketballHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreHUDClass_MetaData), NewProp_ScoreHUDClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasketBallGamePlayerController_Statics::NewProp_ScoreHUD = { "ScoreHUD", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGamePlayerController, ScoreHUD), Z_Construct_UClass_UBasketballHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreHUD_MetaData), NewProp_ScoreHUD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasketBallGamePlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGamePlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasketBallGamePlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGamePlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasketBallGamePlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGamePlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasketBallGamePlayerController_Statics::NewProp_ShootAction = { "ShootAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBallGamePlayerController, ShootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootAction_MetaData), NewProp_ShootAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasketBallGamePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGamePlayerController_Statics::NewProp_ScoreHUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGamePlayerController_Statics::NewProp_ScoreHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGamePlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGamePlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGamePlayerController_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBallGamePlayerController_Statics::NewProp_ShootAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBallGamePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasketBallGamePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BasketBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBallGamePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasketBallGamePlayerController_Statics::ClassParams = {
	&ABasketBallGamePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABasketBallGamePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBallGamePlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBallGamePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasketBallGamePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasketBallGamePlayerController()
{
	if (!Z_Registration_Info_UClass_ABasketBallGamePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasketBallGamePlayerController.OuterSingleton, Z_Construct_UClass_ABasketBallGamePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasketBallGamePlayerController.OuterSingleton;
}
ABasketBallGamePlayerController::ABasketBallGamePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasketBallGamePlayerController);
ABasketBallGamePlayerController::~ABasketBallGamePlayerController() {}
// ********** End Class ABasketBallGamePlayerController ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h__Script_BasketBallGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasketBallGamePlayerController, ABasketBallGamePlayerController::StaticClass, TEXT("ABasketBallGamePlayerController"), &Z_Registration_Info_UClass_ABasketBallGamePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasketBallGamePlayerController), 529206019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h__Script_BasketBallGame_3022663025(TEXT("/Script/BasketBallGame"),
	Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h__Script_BasketBallGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGamePlayerController_h__Script_BasketBallGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
