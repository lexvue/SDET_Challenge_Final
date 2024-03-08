// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SDET_Challenge/HealPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	SDET_CHALLENGE_API UClass* Z_Construct_UClass_AHealPlayer();
	SDET_CHALLENGE_API UClass* Z_Construct_UClass_AHealPlayer_NoRegister();
	SDET_CHALLENGE_API UClass* Z_Construct_UClass_ASDET_ChallengeCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SDET_Challenge();
// End Cross Module References
	DEFINE_FUNCTION(AHealPlayer::exechealPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->healPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHealPlayer::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AHealPlayer::StaticRegisterNativesAHealPlayer()
	{
		UClass* Class = AHealPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "healPlayer", &AHealPlayer::exechealPlayer },
			{ "OnOverlapBegin", &AHealPlayer::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHealPlayer_healPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHealPlayer_healPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHealPlayer_healPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHealPlayer, nullptr, "healPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHealPlayer_healPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHealPlayer_healPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHealPlayer_healPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHealPlayer_healPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics
	{
		struct HealPlayer_eventOnOverlapBegin_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HealPlayer_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HealPlayer_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::NewProp_OverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHealPlayer, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::HealPlayer_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHealPlayer_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHealPlayer_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealPlayer);
	UClass* Z_Construct_UClass_AHealPlayer_NoRegister()
	{
		return AHealPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AHealPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_SDET_Challenge,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHealPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHealPlayer_healPlayer, "healPlayer" }, // 781776612
		{ &Z_Construct_UFunction_AHealPlayer_OnOverlapBegin, "OnOverlapBegin" }, // 762533563
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HealPlayer.h" },
		{ "ModuleRelativePath", "HealPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealPlayer_Statics::NewProp_HealAmount_MetaData[] = {
		{ "Category", "HealPlayer" },
		{ "ModuleRelativePath", "HealPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealPlayer_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHealPlayer, HealAmount), METADATA_PARAMS(Z_Construct_UClass_AHealPlayer_Statics::NewProp_HealAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealPlayer_Statics::NewProp_HealAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealPlayer_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "HealPlayer" },
		{ "ModuleRelativePath", "HealPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHealPlayer, Player), Z_Construct_UClass_ASDET_ChallengeCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHealPlayer_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealPlayer_Statics::NewProp_Player_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealPlayer_Statics::NewProp_HealAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealPlayer_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealPlayer_Statics::ClassParams = {
		&AHealPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHealPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHealPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHealPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHealPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealPlayer()
	{
		if (!Z_Registration_Info_UClass_AHealPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealPlayer.OuterSingleton, Z_Construct_UClass_AHealPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHealPlayer.OuterSingleton;
	}
	template<> SDET_CHALLENGE_API UClass* StaticClass<AHealPlayer>()
	{
		return AHealPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealPlayer);
	AHealPlayer::~AHealPlayer() {}
	struct Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHealPlayer, AHealPlayer::StaticClass, TEXT("AHealPlayer"), &Z_Registration_Info_UClass_AHealPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealPlayer), 1801151573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_2943340758(TEXT("/Script/SDET_Challenge"),
		Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
