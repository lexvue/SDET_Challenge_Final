// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDET_Challenge_init() {}
	SDET_CHALLENGE_API UFunction* Z_Construct_UDelegateFunction_SDET_Challenge_DeathTriggerDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SDET_Challenge;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SDET_Challenge()
	{
		if (!Z_Registration_Info_UPackage__Script_SDET_Challenge.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SDET_Challenge_DeathTriggerDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SDET_Challenge",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x960ABEC3,
				0x851D706F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SDET_Challenge.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SDET_Challenge.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SDET_Challenge(Z_Construct_UPackage__Script_SDET_Challenge, TEXT("/Script/SDET_Challenge"), Z_Registration_Info_UPackage__Script_SDET_Challenge, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x960ABEC3, 0x851D706F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
