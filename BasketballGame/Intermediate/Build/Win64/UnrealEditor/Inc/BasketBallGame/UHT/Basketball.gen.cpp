// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basketball.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasketball() {}

// ********** Begin Cross Module References ********************************************************
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketball();
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketball_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BasketBallGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasketball Function AttachToCharacter ***********************************
struct Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics
{
	struct Basketball_eventAttachToCharacter_Parms
	{
		AActor* Character;
		FName SocketName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attach ball to socket on character */" },
#endif
		{ "ModuleRelativePath", "Basketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attach ball to socket on character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Basketball_eventAttachToCharacter_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Basketball_eventAttachToCharacter_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketball, nullptr, "AttachToCharacter", Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::Basketball_eventAttachToCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::Basketball_eventAttachToCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketball_AttachToCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketball_AttachToCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketball::execAttachToCharacter)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachToCharacter(Z_Param_Character,Z_Param_SocketName);
	P_NATIVE_END;
}
// ********** End Class ABasketball Function AttachToCharacter *************************************

// ********** Begin Class ABasketball Function CanBePickedUp ***************************************
struct Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics
{
	struct Basketball_eventCanBePickedUp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if ball can be picked up */" },
#endif
		{ "ModuleRelativePath", "Basketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if ball can be picked up" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Basketball_eventCanBePickedUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Basketball_eventCanBePickedUp_Parms), &Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketball, nullptr, "CanBePickedUp", Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::Basketball_eventCanBePickedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::Basketball_eventCanBePickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketball_CanBePickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketball_CanBePickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketball::execCanBePickedUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBePickedUp();
	P_NATIVE_END;
}
// ********** End Class ABasketball Function CanBePickedUp *****************************************

// ********** Begin Class ABasketball Function DetachFromCharacter *********************************
struct Z_Construct_UFunction_ABasketball_DetachFromCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Detach ball and enable physics */" },
#endif
		{ "ModuleRelativePath", "Basketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Detach ball and enable physics" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketball_DetachFromCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketball, nullptr, "DetachFromCharacter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketball_DetachFromCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketball_DetachFromCharacter_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABasketball_DetachFromCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketball_DetachFromCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketball::execDetachFromCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetachFromCharacter();
	P_NATIVE_END;
}
// ********** End Class ABasketball Function DetachFromCharacter ***********************************

// ********** Begin Class ABasketball Function DisablePhysics **************************************
struct Z_Construct_UFunction_ABasketball_DisablePhysics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Disable physics simulation (when ball is held) */" },
#endif
		{ "ModuleRelativePath", "Basketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disable physics simulation (when ball is held)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketball_DisablePhysics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketball, nullptr, "DisablePhysics", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketball_DisablePhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketball_DisablePhysics_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABasketball_DisablePhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketball_DisablePhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketball::execDisablePhysics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisablePhysics();
	P_NATIVE_END;
}
// ********** End Class ABasketball Function DisablePhysics ****************************************

// ********** Begin Class ABasketball Function EnablePhysics ***************************************
struct Z_Construct_UFunction_ABasketball_EnablePhysics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable physics simulation (when ball is loose) */" },
#endif
		{ "ModuleRelativePath", "Basketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable physics simulation (when ball is loose)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketball_EnablePhysics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketball, nullptr, "EnablePhysics", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketball_EnablePhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketball_EnablePhysics_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABasketball_EnablePhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketball_EnablePhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketball::execEnablePhysics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePhysics();
	P_NATIVE_END;
}
// ********** End Class ABasketball Function EnablePhysics *****************************************

// ********** Begin Class ABasketball **************************************************************
void ABasketball::StaticRegisterNativesABasketball()
{
	UClass* Class = ABasketball::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachToCharacter", &ABasketball::execAttachToCharacter },
		{ "CanBePickedUp", &ABasketball::execCanBePickedUp },
		{ "DetachFromCharacter", &ABasketball::execDetachFromCharacter },
		{ "DisablePhysics", &ABasketball::execDisablePhysics },
		{ "EnablePhysics", &ABasketball::execEnablePhysics },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABasketball;
UClass* ABasketball::GetPrivateStaticClass()
{
	using TClass = ABasketball;
	if (!Z_Registration_Info_UClass_ABasketball.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Basketball"),
			Z_Registration_Info_UClass_ABasketball.InnerSingleton,
			StaticRegisterNativesABasketball,
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
	return Z_Registration_Info_UClass_ABasketball.InnerSingleton;
}
UClass* Z_Construct_UClass_ABasketball_NoRegister()
{
	return ABasketball::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABasketball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Basketball.h" },
		{ "ModuleRelativePath", "Basketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ball mesh component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ball mesh component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupRadius_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sphere collision for pickup detection */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere collision for pickup detection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[] = {
		{ "Category", "Ball State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is the ball currently held by a player? */" },
#endif
		{ "ModuleRelativePath", "Basketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the ball currently held by a player?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallOwner_MetaData[] = {
		{ "Category", "Ball State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current owner of the ball (if held) */" },
#endif
		{ "ModuleRelativePath", "Basketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current owner of the ball (if held)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BallMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupRadius;
	static void NewProp_bIsHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BallOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasketball_AttachToCharacter, "AttachToCharacter" }, // 1169316104
		{ &Z_Construct_UFunction_ABasketball_CanBePickedUp, "CanBePickedUp" }, // 1376737071
		{ &Z_Construct_UFunction_ABasketball_DetachFromCharacter, "DetachFromCharacter" }, // 4223955572
		{ &Z_Construct_UFunction_ABasketball_DisablePhysics, "DisablePhysics" }, // 599334313
		{ &Z_Construct_UFunction_ABasketball_EnablePhysics, "EnablePhysics" }, // 3260372695
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasketball>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasketball_Statics::NewProp_BallMesh = { "BallMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketball, BallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallMesh_MetaData), NewProp_BallMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasketball_Statics::NewProp_PickupRadius = { "PickupRadius", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketball, PickupRadius), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupRadius_MetaData), NewProp_PickupRadius_MetaData) };
void Z_Construct_UClass_ABasketball_Statics::NewProp_bIsHeld_SetBit(void* Obj)
{
	((ABasketball*)Obj)->bIsHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasketball_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABasketball), &Z_Construct_UClass_ABasketball_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHeld_MetaData), NewProp_bIsHeld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasketball_Statics::NewProp_BallOwner = { "BallOwner", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketball, BallOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallOwner_MetaData), NewProp_BallOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasketball_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketball_Statics::NewProp_BallMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketball_Statics::NewProp_PickupRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketball_Statics::NewProp_bIsHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketball_Statics::NewProp_BallOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketball_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasketball_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BasketBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketball_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasketball_Statics::ClassParams = {
	&ABasketball::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABasketball_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasketball_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketball_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasketball_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasketball()
{
	if (!Z_Registration_Info_UClass_ABasketball.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasketball.OuterSingleton, Z_Construct_UClass_ABasketball_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasketball.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasketball);
ABasketball::~ABasketball() {}
// ********** End Class ABasketball ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h__Script_BasketBallGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasketball, ABasketball::StaticClass, TEXT("ABasketball"), &Z_Registration_Info_UClass_ABasketball, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasketball), 3036782442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h__Script_BasketBallGame_1670673645(TEXT("/Script/BasketBallGame"),
	Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h__Script_BasketBallGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h__Script_BasketBallGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
