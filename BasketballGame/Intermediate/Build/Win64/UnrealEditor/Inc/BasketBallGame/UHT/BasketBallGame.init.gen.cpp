// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasketBallGame_init() {}
	BASKETBALLGAME_API UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnEnemyDied__DelegateSignature();
	BASKETBALLGAME_API UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature();
	BASKETBALLGAME_API UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnGameStarted__DelegateSignature();
	BASKETBALLGAME_API UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature();
	BASKETBALLGAME_API UFunction* Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BasketBallGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BasketBallGame()
	{
		if (!Z_Registration_Info_UPackage__Script_BasketBallGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BasketBallGame_OnEnemyDied__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BasketBallGame_OnGameEnded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BasketBallGame_OnGameStarted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BasketBallGame_OnScoreChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BasketBallGame_OnTimerUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BasketBallGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEB7E52B0,
				0xC664ED38,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BasketBallGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BasketBallGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BasketBallGame(Z_Construct_UPackage__Script_BasketBallGame, TEXT("/Script/BasketBallGame"), Z_Registration_Info_UPackage__Script_BasketBallGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEB7E52B0, 0xC664ED38));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
