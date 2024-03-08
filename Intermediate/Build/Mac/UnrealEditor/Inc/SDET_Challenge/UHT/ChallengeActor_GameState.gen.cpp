// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SDET_Challenge/ChallengeActor_GameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeActor_GameState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SDET_CHALLENGE_API UClass* Z_Construct_UClass_AChallengeActor_GameState();
	SDET_CHALLENGE_API UClass* Z_Construct_UClass_AChallengeActor_GameState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SDET_Challenge();
// End Cross Module References
	DEFINE_FUNCTION(AChallengeActor_GameState::execDisplayDeathScreenEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayDeathScreenEvent();
		P_NATIVE_END;
	}
	void AChallengeActor_GameState::StaticRegisterNativesAChallengeActor_GameState()
	{
		UClass* Class = AChallengeActor_GameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayDeathScreenEvent", &AChallengeActor_GameState::execDisplayDeathScreenEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChallengeActor_GameState_DisplayDeathScreenEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChallengeActor_GameState_DisplayDeathScreenEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChallengeActor_GameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeActor_GameState_DisplayDeathScreenEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChallengeActor_GameState, nullptr, "DisplayDeathScreenEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChallengeActor_GameState_DisplayDeathScreenEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeActor_GameState_DisplayDeathScreenEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChallengeActor_GameState_DisplayDeathScreenEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChallengeActor_GameState_DisplayDeathScreenEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChallengeActor_GameState);
	UClass* Z_Construct_UClass_AChallengeActor_GameState_NoRegister()
	{
		return AChallengeActor_GameState::StaticClass();
	}
	struct Z_Construct_UClass_AChallengeActor_GameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChallengeActor_GameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SDET_Challenge,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChallengeActor_GameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChallengeActor_GameState_DisplayDeathScreenEvent, "DisplayDeathScreenEvent" }, // 4151688820
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChallengeActor_GameState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChallengeActor_GameState.h" },
		{ "ModuleRelativePath", "ChallengeActor_GameState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChallengeActor_GameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChallengeActor_GameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChallengeActor_GameState_Statics::ClassParams = {
		&AChallengeActor_GameState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChallengeActor_GameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChallengeActor_GameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChallengeActor_GameState()
	{
		if (!Z_Registration_Info_UClass_AChallengeActor_GameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChallengeActor_GameState.OuterSingleton, Z_Construct_UClass_AChallengeActor_GameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChallengeActor_GameState.OuterSingleton;
	}
	template<> SDET_CHALLENGE_API UClass* StaticClass<AChallengeActor_GameState>()
	{
		return AChallengeActor_GameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChallengeActor_GameState);
	AChallengeActor_GameState::~AChallengeActor_GameState() {}
	struct Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_ChallengeActor_GameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_ChallengeActor_GameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChallengeActor_GameState, AChallengeActor_GameState::StaticClass, TEXT("AChallengeActor_GameState"), &Z_Registration_Info_UClass_AChallengeActor_GameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChallengeActor_GameState), 1992557387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_ChallengeActor_GameState_h_2823228766(TEXT("/Script/SDET_Challenge"),
		Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_ChallengeActor_GameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_ChallengeActor_GameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
