// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasketBallGameCharacter.h"

#ifdef BASKETBALLGAME_BasketBallGameCharacter_generated_h
#error "BasketBallGameCharacter.generated.h already included, missing '#pragma once' in BasketBallGameCharacter.h"
#endif
#define BASKETBALLGAME_BasketBallGameCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABasketBallGameCharacter *************************************************
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGameCharacter_NoRegister();

#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasketBallGameCharacter(); \
	friend struct Z_Construct_UClass_ABasketBallGameCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallGameCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ABasketBallGameCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasketBallGame"), Z_Construct_UClass_ABasketBallGameCharacter_NoRegister) \
	DECLARE_SERIALIZER(ABasketBallGameCharacter)


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameCharacter_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasketBallGameCharacter(ABasketBallGameCharacter&&) = delete; \
	ABasketBallGameCharacter(const ABasketBallGameCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasketBallGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasketBallGameCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABasketBallGameCharacter) \
	NO_API virtual ~ABasketBallGameCharacter();


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameCharacter_h_24_PROLOG
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasketBallGameCharacter;

// ********** End Class ABasketBallGameCharacter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketBallGameCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
