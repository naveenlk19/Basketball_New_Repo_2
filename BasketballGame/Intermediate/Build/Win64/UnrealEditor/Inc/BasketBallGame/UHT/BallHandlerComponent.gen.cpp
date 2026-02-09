// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BallHandlerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBallHandlerComponent() {}

// ********** Begin Cross Module References ********************************************************
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketball_NoRegister();
BASKETBALLGAME_API UClass* Z_Construct_UClass_UBallHandlerComponent();
BASKETBALLGAME_API UClass* Z_Construct_UClass_UBallHandlerComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BasketBallGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBallHandlerComponent Function DropBall **********************************
struct Z_Construct_UFunction_UBallHandlerComponent_DropBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ball Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Drop the currently held ball */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drop the currently held ball" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallHandlerComponent_DropBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBallHandlerComponent, nullptr, "DropBall", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_DropBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBallHandlerComponent_DropBall_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBallHandlerComponent_DropBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBallHandlerComponent_DropBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBallHandlerComponent::execDropBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropBall();
	P_NATIVE_END;
}
// ********** End Class UBallHandlerComponent Function DropBall ************************************

// ********** Begin Class UBallHandlerComponent Function FindNearestBall ***************************
struct Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics
{
	struct BallHandlerComponent_eventFindNearestBall_Parms
	{
		ABasketball* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ball Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Find nearest basketball within pickup range */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find nearest basketball within pickup range" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BallHandlerComponent_eventFindNearestBall_Parms, ReturnValue), Z_Construct_UClass_ABasketball_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBallHandlerComponent, nullptr, "FindNearestBall", Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics::BallHandlerComponent_eventFindNearestBall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics::BallHandlerComponent_eventFindNearestBall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBallHandlerComponent::execFindNearestBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ABasketball**)Z_Param__Result=P_THIS->FindNearestBall();
	P_NATIVE_END;
}
// ********** End Class UBallHandlerComponent Function FindNearestBall *****************************

// ********** Begin Class UBallHandlerComponent Function GetChargePercent **************************
struct Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics
{
	struct BallHandlerComponent_eventGetChargePercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shooting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get current charge percentage (0-100) */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get current charge percentage (0-100)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BallHandlerComponent_eventGetChargePercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBallHandlerComponent, nullptr, "GetChargePercent", Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics::BallHandlerComponent_eventGetChargePercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics::BallHandlerComponent_eventGetChargePercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBallHandlerComponent::execGetChargePercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetChargePercent();
	P_NATIVE_END;
}
// ********** End Class UBallHandlerComponent Function GetChargePercent ****************************

// ********** Begin Class UBallHandlerComponent Function HasBall ***********************************
struct Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics
{
	struct BallHandlerComponent_eventHasBall_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ball Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is this character currently holding a ball? */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this character currently holding a ball?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BallHandlerComponent_eventHasBall_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BallHandlerComponent_eventHasBall_Parms), &Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBallHandlerComponent, nullptr, "HasBall", Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::BallHandlerComponent_eventHasBall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::BallHandlerComponent_eventHasBall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBallHandlerComponent_HasBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBallHandlerComponent_HasBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBallHandlerComponent::execHasBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasBall();
	P_NATIVE_END;
}
// ********** End Class UBallHandlerComponent Function HasBall *************************************

// ********** Begin Class UBallHandlerComponent Function SetBall ***********************************
struct Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics
{
	struct BallHandlerComponent_eventSetBall_Parms
	{
		ABasketball* Ball;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ball Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Manually set ball reference (useful for spawning with ball) */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manually set ball reference (useful for spawning with ball)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ball;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BallHandlerComponent_eventSetBall_Parms, Ball), Z_Construct_UClass_ABasketball_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics::NewProp_Ball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBallHandlerComponent, nullptr, "SetBall", Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics::BallHandlerComponent_eventSetBall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics::BallHandlerComponent_eventSetBall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBallHandlerComponent_SetBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBallHandlerComponent_SetBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBallHandlerComponent::execSetBall)
{
	P_GET_OBJECT(ABasketball,Z_Param_Ball);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBall(Z_Param_Ball);
	P_NATIVE_END;
}
// ********** End Class UBallHandlerComponent Function SetBall *************************************

// ********** Begin Class UBallHandlerComponent Function ShootBall *********************************
struct Z_Construct_UFunction_UBallHandlerComponent_ShootBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shooting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shoot ball with charged power (called on button release) */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shoot ball with charged power (called on button release)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallHandlerComponent_ShootBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBallHandlerComponent, nullptr, "ShootBall", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_ShootBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBallHandlerComponent_ShootBall_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBallHandlerComponent_ShootBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBallHandlerComponent_ShootBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBallHandlerComponent::execShootBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShootBall();
	P_NATIVE_END;
}
// ********** End Class UBallHandlerComponent Function ShootBall ***********************************

// ********** Begin Class UBallHandlerComponent Function StartCharging *****************************
struct Z_Construct_UFunction_UBallHandlerComponent_StartCharging_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shooting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Start charging shot (called on button press) */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start charging shot (called on button press)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallHandlerComponent_StartCharging_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBallHandlerComponent, nullptr, "StartCharging", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_StartCharging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBallHandlerComponent_StartCharging_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBallHandlerComponent_StartCharging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBallHandlerComponent_StartCharging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBallHandlerComponent::execStartCharging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCharging();
	P_NATIVE_END;
}
// ********** End Class UBallHandlerComponent Function StartCharging *******************************

// ********** Begin Class UBallHandlerComponent Function TryPickupBall *****************************
struct Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics
{
	struct BallHandlerComponent_eventTryPickupBall_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ball Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempt to pick up nearby ball */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempt to pick up nearby ball" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BallHandlerComponent_eventTryPickupBall_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BallHandlerComponent_eventTryPickupBall_Parms), &Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBallHandlerComponent, nullptr, "TryPickupBall", Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::BallHandlerComponent_eventTryPickupBall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::BallHandlerComponent_eventTryPickupBall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBallHandlerComponent::execTryPickupBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryPickupBall();
	P_NATIVE_END;
}
// ********** End Class UBallHandlerComponent Function TryPickupBall *******************************

// ********** Begin Class UBallHandlerComponent ****************************************************
void UBallHandlerComponent::StaticRegisterNativesUBallHandlerComponent()
{
	UClass* Class = UBallHandlerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropBall", &UBallHandlerComponent::execDropBall },
		{ "FindNearestBall", &UBallHandlerComponent::execFindNearestBall },
		{ "GetChargePercent", &UBallHandlerComponent::execGetChargePercent },
		{ "HasBall", &UBallHandlerComponent::execHasBall },
		{ "SetBall", &UBallHandlerComponent::execSetBall },
		{ "ShootBall", &UBallHandlerComponent::execShootBall },
		{ "StartCharging", &UBallHandlerComponent::execStartCharging },
		{ "TryPickupBall", &UBallHandlerComponent::execTryPickupBall },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBallHandlerComponent;
UClass* UBallHandlerComponent::GetPrivateStaticClass()
{
	using TClass = UBallHandlerComponent;
	if (!Z_Registration_Info_UClass_UBallHandlerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BallHandlerComponent"),
			Z_Registration_Info_UClass_UBallHandlerComponent.InnerSingleton,
			StaticRegisterNativesUBallHandlerComponent,
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
	return Z_Registration_Info_UClass_UBallHandlerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UBallHandlerComponent_NoRegister()
{
	return UBallHandlerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBallHandlerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component that manages basketball possession for a character\n * Handles picking up, holding, and dropping the ball\n * Structured for future replication (multiplayer-ready)\n */" },
#endif
		{ "IncludePath", "BallHandlerComponent.h" },
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that manages basketball possession for a character\nHandles picking up, holding, and dropping the ball\nStructured for future replication (multiplayer-ready)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallSocketName_MetaData[] = {
		{ "Category", "Ball Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Socket name where ball attaches (usually on hand) */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket name where ball attaches (usually on hand)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupRange_MetaData[] = {
		{ "Category", "Ball Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum distance to detect balls for pickup */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance to detect balls for pickup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxShotPower_MetaData[] = {
		{ "Category", "Shooting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum shot power (velocity in cm/s) */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum shot power (velocity in cm/s)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeTime_MetaData[] = {
		{ "Category", "Shooting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time to charge from 0% to 100% power */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time to charge from 0% to 100% power" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharge_MetaData[] = {
		{ "Category", "Shooting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current shot charge (0.0 to 1.0) */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current shot charge (0.0 to 1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBall_MetaData[] = {
		{ "Category", "Ball Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to currently held ball (null if no ball) */" },
#endif
		{ "ModuleRelativePath", "BallHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to currently held ball (null if no ball)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BallSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PickupRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShotPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentCharge;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentBall;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBallHandlerComponent_DropBall, "DropBall" }, // 2913962802
		{ &Z_Construct_UFunction_UBallHandlerComponent_FindNearestBall, "FindNearestBall" }, // 2037817779
		{ &Z_Construct_UFunction_UBallHandlerComponent_GetChargePercent, "GetChargePercent" }, // 1867656541
		{ &Z_Construct_UFunction_UBallHandlerComponent_HasBall, "HasBall" }, // 801498223
		{ &Z_Construct_UFunction_UBallHandlerComponent_SetBall, "SetBall" }, // 3620501388
		{ &Z_Construct_UFunction_UBallHandlerComponent_ShootBall, "ShootBall" }, // 3240519882
		{ &Z_Construct_UFunction_UBallHandlerComponent_StartCharging, "StartCharging" }, // 3661124964
		{ &Z_Construct_UFunction_UBallHandlerComponent_TryPickupBall, "TryPickupBall" }, // 2932183938
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBallHandlerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBallHandlerComponent_Statics::NewProp_BallSocketName = { "BallSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBallHandlerComponent, BallSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallSocketName_MetaData), NewProp_BallSocketName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBallHandlerComponent_Statics::NewProp_PickupRange = { "PickupRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBallHandlerComponent, PickupRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupRange_MetaData), NewProp_PickupRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBallHandlerComponent_Statics::NewProp_MaxShotPower = { "MaxShotPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBallHandlerComponent, MaxShotPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxShotPower_MetaData), NewProp_MaxShotPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBallHandlerComponent_Statics::NewProp_ChargeTime = { "ChargeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBallHandlerComponent, ChargeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeTime_MetaData), NewProp_ChargeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBallHandlerComponent_Statics::NewProp_CurrentCharge = { "CurrentCharge", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBallHandlerComponent, CurrentCharge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCharge_MetaData), NewProp_CurrentCharge_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBallHandlerComponent_Statics::NewProp_CurrentBall = { "CurrentBall", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBallHandlerComponent, CurrentBall), Z_Construct_UClass_ABasketball_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBall_MetaData), NewProp_CurrentBall_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBallHandlerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallHandlerComponent_Statics::NewProp_BallSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallHandlerComponent_Statics::NewProp_PickupRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallHandlerComponent_Statics::NewProp_MaxShotPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallHandlerComponent_Statics::NewProp_ChargeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallHandlerComponent_Statics::NewProp_CurrentCharge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallHandlerComponent_Statics::NewProp_CurrentBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBallHandlerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBallHandlerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BasketBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBallHandlerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBallHandlerComponent_Statics::ClassParams = {
	&UBallHandlerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBallHandlerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBallHandlerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBallHandlerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBallHandlerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBallHandlerComponent()
{
	if (!Z_Registration_Info_UClass_UBallHandlerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBallHandlerComponent.OuterSingleton, Z_Construct_UClass_UBallHandlerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBallHandlerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBallHandlerComponent);
UBallHandlerComponent::~UBallHandlerComponent() {}
// ********** End Class UBallHandlerComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h__Script_BasketBallGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBallHandlerComponent, UBallHandlerComponent::StaticClass, TEXT("UBallHandlerComponent"), &Z_Registration_Info_UClass_UBallHandlerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBallHandlerComponent), 1341568311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h__Script_BasketBallGame_903718802(TEXT("/Script/BasketBallGame"),
	Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h__Script_BasketBallGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h__Script_BasketBallGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
