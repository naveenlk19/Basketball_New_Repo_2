// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasketBallGameGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasketBallGameGameMode() {}

// ********** Begin Cross Module References ********************************************************
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGameGameMode();
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGameGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BasketBallGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasketBallGameGameMode **************************************************
void ABasketBallGameGameMode::StaticRegisterNativesABasketBallGameGameMode()
{
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
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BasketBallGameGameMode.h" },
		{ "ModuleRelativePath", "BasketBallGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasketBallGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
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
struct Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h__Script_BasketBallGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasketBallGameGameMode, ABasketBallGameGameMode::StaticClass, TEXT("ABasketBallGameGameMode"), &Z_Registration_Info_UClass_ABasketBallGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasketBallGameGameMode), 15060661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h__Script_BasketBallGame_1575711283(TEXT("/Script/BasketBallGame"),
	Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h__Script_BasketBallGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BasketBallGameGameMode_h__Script_BasketBallGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
