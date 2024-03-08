// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SDET_Challenge/SDET_ChallengeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDET_ChallengeGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SDET_CHALLENGE_API UClass* Z_Construct_UClass_ASDET_ChallengeGameMode();
	SDET_CHALLENGE_API UClass* Z_Construct_UClass_ASDET_ChallengeGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SDET_Challenge();
// End Cross Module References
	void ASDET_ChallengeGameMode::StaticRegisterNativesASDET_ChallengeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASDET_ChallengeGameMode);
	UClass* Z_Construct_UClass_ASDET_ChallengeGameMode_NoRegister()
	{
		return ASDET_ChallengeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASDET_ChallengeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASDET_ChallengeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SDET_Challenge,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDET_ChallengeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SDET_ChallengeGameMode.h" },
		{ "ModuleRelativePath", "SDET_ChallengeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASDET_ChallengeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDET_ChallengeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASDET_ChallengeGameMode_Statics::ClassParams = {
		&ASDET_ChallengeGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASDET_ChallengeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASDET_ChallengeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASDET_ChallengeGameMode()
	{
		if (!Z_Registration_Info_UClass_ASDET_ChallengeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASDET_ChallengeGameMode.OuterSingleton, Z_Construct_UClass_ASDET_ChallengeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASDET_ChallengeGameMode.OuterSingleton;
	}
	template<> SDET_CHALLENGE_API UClass* StaticClass<ASDET_ChallengeGameMode>()
	{
		return ASDET_ChallengeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASDET_ChallengeGameMode);
	ASDET_ChallengeGameMode::~ASDET_ChallengeGameMode() {}
	struct Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASDET_ChallengeGameMode, ASDET_ChallengeGameMode::StaticClass, TEXT("ASDET_ChallengeGameMode"), &Z_Registration_Info_UClass_ASDET_ChallengeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASDET_ChallengeGameMode), 2218235207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeGameMode_h_2550546949(TEXT("/Script/SDET_Challenge"),
		Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
