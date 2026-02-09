// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BallHandlerComponent.h"

#ifdef BASKETBALLGAME_BallHandlerComponent_generated_h
#error "BallHandlerComponent.generated.h already included, missing '#pragma once' in BallHandlerComponent.h"
#endif
#define BASKETBALLGAME_BallHandlerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ABasketball;

// ********** Begin Class UBallHandlerComponent ****************************************************
#define FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBall); \
	DECLARE_FUNCTION(execFindNearestBall); \
	DECLARE_FUNCTION(execGetChargePercent); \
	DECLARE_FUNCTION(execShootBall); \
	DECLARE_FUNCTION(execStartCharging); \
	DECLARE_FUNCTION(execDropBall); \
	DECLARE_FUNCTION(execTryPickupBall); \
	DECLARE_FUNCTION(execHasBall);


BASKETBALLGAME_API UClass* Z_Construct_UClass_UBallHandlerComponent_NoRegister();

#define FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBallHandlerComponent(); \
	friend struct Z_Construct_UClass_UBallHandlerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASKETBALLGAME_API UClass* Z_Construct_UClass_UBallHandlerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBallHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasketBallGame"), Z_Construct_UClass_UBallHandlerComponent_NoRegister) \
	DECLARE_SERIALIZER(UBallHandlerComponent)


#define FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBallHandlerComponent(UBallHandlerComponent&&) = delete; \
	UBallHandlerComponent(const UBallHandlerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBallHandlerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBallHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBallHandlerComponent) \
	NO_API virtual ~UBallHandlerComponent();


#define FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h_16_PROLOG
#define FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBallHandlerComponent;

// ********** End Class UBallHandlerComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClimbingGame_BasketballGame_Source_BasketBallGame_BallHandlerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
