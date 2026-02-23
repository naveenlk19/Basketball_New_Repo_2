// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasketballHoop.h"

#ifdef BASKETBALLGAME_BasketballHoop_generated_h
#error "BasketballHoop.generated.h already included, missing '#pragma once' in BasketballHoop.h"
#endif
#define BASKETBALLGAME_BasketballHoop_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ABasketBallHoop **********************************************************
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHoop_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBottomTriggerBeginOverlap); \
	DECLARE_FUNCTION(execOnTopTriggerBeginOverlap);


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHoop_h_20_CALLBACK_WRAPPERS
BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallHoop_NoRegister();

#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHoop_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasketBallHoop(); \
	friend struct Z_Construct_UClass_ABasketBallHoop_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASKETBALLGAME_API UClass* Z_Construct_UClass_ABasketBallHoop_NoRegister(); \
public: \
	DECLARE_CLASS2(ABasketBallHoop, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasketBallGame"), Z_Construct_UClass_ABasketBallHoop_NoRegister) \
	DECLARE_SERIALIZER(ABasketBallHoop)


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHoop_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasketBallHoop(ABasketBallHoop&&) = delete; \
	ABasketBallHoop(const ABasketBallHoop&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasketBallHoop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasketBallHoop); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasketBallHoop) \
	NO_API virtual ~ABasketBallHoop();


#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHoop_h_17_PROLOG
#define FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHoop_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHoop_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHoop_h_20_CALLBACK_WRAPPERS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHoop_h_20_INCLASS_NO_PURE_DECLS \
	FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHoop_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasketBallHoop;

// ********** End Class ABasketBallHoop ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClimbingGame_BasketballGameNew_Basketball_New_Repo_2_BasketballGame_Source_BasketBallGame_BasketballHoop_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
