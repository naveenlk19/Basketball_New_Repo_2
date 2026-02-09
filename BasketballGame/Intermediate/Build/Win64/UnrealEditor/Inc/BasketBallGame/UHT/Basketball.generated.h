// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Basketball.h"

#ifdef BASKETBALLGAME_Basketball_generated_h
#error "Basketball.generated.h already included, missing '#pragma once' in Basketball.h"
#endif
#define BASKETBALLGAME_Basketball_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class ABasketball **************************************************************
#define FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanBePickedUp); \
	DECLARE_FUNCTION(execDetachFromCharacter); \
	DECLARE_FUNCTION(execAttachToCharacter); \
	DECLARE_FUNCTION(execDisablePhysics); \
	DECLARE_FUNCTION(execEnablePhysics);


BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketball_NoRegister();

#define FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasketball(); \
	friend struct Z_Construct_UClass_ABasketball_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketball_NoRegister(); \
public: \
	DECLARE_CLASS2(ABasketball, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasketBallGame"), Z_Construct_UClass_ABasketball_NoRegister) \
	DECLARE_SERIALIZER(ABasketball)


#define FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasketball(ABasketball&&) = delete; \
	ABasketball(const ABasketball&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasketball); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasketball); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasketball) \
	NO_API virtual ~ABasketball();


#define FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h_9_PROLOG
#define FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h_12_INCLASS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasketball;

// ********** End Class ABasketball ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClimbingGame_BasketballGame_Source_BasketBallGame_Basketball_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
