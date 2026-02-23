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
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBall();
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBall_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BasketBallGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasketBall Function AttachToCharacter ***********************************
struct Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics
{
	struct BasketBall_eventAttachToCharacter_Parms
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBall_eventAttachToCharacter_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasketBall_eventAttachToCharacter_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBall, nullptr, "AttachToCharacter", Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::BasketBall_eventAttachToCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::BasketBall_eventAttachToCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBall_AttachToCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBall_AttachToCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBall::execAttachToCharacter)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachToCharacter(Z_Param_Character,Z_Param_SocketName);
	P_NATIVE_END;
}
// ********** End Class ABasketBall Function AttachToCharacter *************************************

// ********** Begin Class ABasketBall Function CanBePickedUp ***************************************
struct Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics
{
	struct BasketBall_eventCanBePickedUp_Parms
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
void Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BasketBall_eventCanBePickedUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BasketBall_eventCanBePickedUp_Parms), &Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBall, nullptr, "CanBePickedUp", Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::BasketBall_eventCanBePickedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::BasketBall_eventCanBePickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasketBall_CanBePickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBall_CanBePickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBall::execCanBePickedUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBePickedUp();
	P_NATIVE_END;
}
// ********** End Class ABasketBall Function CanBePickedUp *****************************************

// ********** Begin Class ABasketBall Function DetachFromCharacter *********************************
struct Z_Construct_UFunction_ABasketBall_DetachFromCharacter_Statics
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBall_DetachFromCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBall, nullptr, "DetachFromCharacter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBall_DetachFromCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBall_DetachFromCharacter_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABasketBall_DetachFromCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBall_DetachFromCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBall::execDetachFromCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetachFromCharacter();
	P_NATIVE_END;
}
// ********** End Class ABasketBall Function DetachFromCharacter ***********************************

// ********** Begin Class ABasketBall Function DisablePhysics **************************************
struct Z_Construct_UFunction_ABasketBall_DisablePhysics_Statics
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBall_DisablePhysics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBall, nullptr, "DisablePhysics", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBall_DisablePhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBall_DisablePhysics_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABasketBall_DisablePhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBall_DisablePhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBall::execDisablePhysics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisablePhysics();
	P_NATIVE_END;
}
// ********** End Class ABasketBall Function DisablePhysics ****************************************

// ********** Begin Class ABasketBall Function EnablePhysics ***************************************
struct Z_Construct_UFunction_ABasketBall_EnablePhysics_Statics
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasketBall_EnablePhysics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasketBall, nullptr, "EnablePhysics", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasketBall_EnablePhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasketBall_EnablePhysics_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABasketBall_EnablePhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasketBall_EnablePhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasketBall::execEnablePhysics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePhysics();
	P_NATIVE_END;
}
// ********** End Class ABasketBall Function EnablePhysics *****************************************

// ********** Begin Class ABasketBall **************************************************************
void ABasketBall::StaticRegisterNativesABasketBall()
{
	UClass* Class = ABasketBall::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachToCharacter", &ABasketBall::execAttachToCharacter },
		{ "CanBePickedUp", &ABasketBall::execCanBePickedUp },
		{ "DetachFromCharacter", &ABasketBall::execDetachFromCharacter },
		{ "DisablePhysics", &ABasketBall::execDisablePhysics },
		{ "EnablePhysics", &ABasketBall::execEnablePhysics },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABasketBall;
UClass* ABasketBall::GetPrivateStaticClass()
{
	using TClass = ABasketBall;
	if (!Z_Registration_Info_UClass_ABasketBall.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasketBall"),
			Z_Registration_Info_UClass_ABasketBall.InnerSingleton,
			StaticRegisterNativesABasketBall,
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
	return Z_Registration_Info_UClass_ABasketBall.InnerSingleton;
}
UClass* Z_Construct_UClass_ABasketBall_NoRegister()
{
	return ABasketBall::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABasketBall_Statics
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasShot_MetaData[] = {
		{ "Category", "Ball State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Was this ball shot (launched by player)? */" },
#endif
		{ "ModuleRelativePath", "Basketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Was this ball shot (launched by player)?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasScoredThisShot_MetaData[] = {
		{ "Category", "Ball State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Has this ball already scored on current shot attempt? */" },
#endif
		{ "ModuleRelativePath", "Basketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Has this ball already scored on current shot attempt?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotStartLocation_MetaData[] = {
		{ "Category", "Ball State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Location where shot was initiated from */" },
#endif
		{ "ModuleRelativePath", "Basketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location where shot was initiated from" },
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
	static void NewProp_bWasShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasShot;
	static void NewProp_bHasScoredThisShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasScoredThisShot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShotStartLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BallOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasketBall_AttachToCharacter, "AttachToCharacter" }, // 1153788541
		{ &Z_Construct_UFunction_ABasketBall_CanBePickedUp, "CanBePickedUp" }, // 496212068
		{ &Z_Construct_UFunction_ABasketBall_DetachFromCharacter, "DetachFromCharacter" }, // 1923654032
		{ &Z_Construct_UFunction_ABasketBall_DisablePhysics, "DisablePhysics" }, // 948408841
		{ &Z_Construct_UFunction_ABasketBall_EnablePhysics, "EnablePhysics" }, // 2950762586
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasketBall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasketBall_Statics::NewProp_BallMesh = { "BallMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBall, BallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallMesh_MetaData), NewProp_BallMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasketBall_Statics::NewProp_PickupRadius = { "PickupRadius", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBall, PickupRadius), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupRadius_MetaData), NewProp_PickupRadius_MetaData) };
void Z_Construct_UClass_ABasketBall_Statics::NewProp_bIsHeld_SetBit(void* Obj)
{
	((ABasketBall*)Obj)->bIsHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasketBall_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABasketBall), &Z_Construct_UClass_ABasketBall_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHeld_MetaData), NewProp_bIsHeld_MetaData) };
void Z_Construct_UClass_ABasketBall_Statics::NewProp_bWasShot_SetBit(void* Obj)
{
	((ABasketBall*)Obj)->bWasShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasketBall_Statics::NewProp_bWasShot = { "bWasShot", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABasketBall), &Z_Construct_UClass_ABasketBall_Statics::NewProp_bWasShot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasShot_MetaData), NewProp_bWasShot_MetaData) };
void Z_Construct_UClass_ABasketBall_Statics::NewProp_bHasScoredThisShot_SetBit(void* Obj)
{
	((ABasketBall*)Obj)->bHasScoredThisShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasketBall_Statics::NewProp_bHasScoredThisShot = { "bHasScoredThisShot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABasketBall), &Z_Construct_UClass_ABasketBall_Statics::NewProp_bHasScoredThisShot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasScoredThisShot_MetaData), NewProp_bHasScoredThisShot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasketBall_Statics::NewProp_ShotStartLocation = { "ShotStartLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBall, ShotStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotStartLocation_MetaData), NewProp_ShotStartLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasketBall_Statics::NewProp_BallOwner = { "BallOwner", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasketBall, BallOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallOwner_MetaData), NewProp_BallOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasketBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBall_Statics::NewProp_BallMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBall_Statics::NewProp_PickupRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBall_Statics::NewProp_bIsHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBall_Statics::NewProp_bWasShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBall_Statics::NewProp_bHasScoredThisShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBall_Statics::NewProp_ShotStartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasketBall_Statics::NewProp_BallOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBall_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasketBall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BasketBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasketBall_Statics::ClassParams = {
	&ABasketBall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABasketBall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBall_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasketBall_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasketBall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasketBall()
{
	if (!Z_Registration_Info_UClass_ABasketBall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasketBall.OuterSingleton, Z_Construct_UClass_ABasketBall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasketBall.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasketBall);
ABasketBall::~ABasketBall() {}
// ********** End Class ABasketBall ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_Basketball_h__Script_BasketBallGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasketBall, ABasketBall::StaticClass, TEXT("ABasketBall"), &Z_Registration_Info_UClass_ABasketBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasketBall), 1124464505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_Basketball_h__Script_BasketBallGame_3969192545(TEXT("/Script/BasketBallGame"),
	Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_Basketball_h__Script_BasketBallGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_Basketball_h__Script_BasketBallGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
