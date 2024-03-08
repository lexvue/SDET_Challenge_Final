// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SDET_Challenge/HealByPercent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealByPercent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	SDET_CHALLENGE_API UClass* Z_Construct_UClass_AHealByPercent();
	SDET_CHALLENGE_API UClass* Z_Construct_UClass_AHealByPercent_NoRegister();
	SDET_CHALLENGE_API UClass* Z_Construct_UClass_ASDET_ChallengeCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SDET_Challenge();
// End Cross Module References
	DEFINE_FUNCTION(AHealByPercent::exechealByPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->healByPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHealByPercent::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AHealByPercent::StaticRegisterNativesAHealByPercent()
	{
		UClass* Class = AHealByPercent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "healByPercent", &AHealByPercent::exechealByPercent },
			{ "OnOverlapBegin", &AHealByPercent::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHealByPercent_healByPercent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHealByPercent_healByPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealByPercent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHealByPercent_healByPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHealByPercent, nullptr, "healByPercent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHealByPercent_healByPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHealByPercent_healByPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHealByPercent_healByPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHealByPercent_healByPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics
	{
		struct HealByPercent_eventOnOverlapBegin_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HealByPercent_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HealByPercent_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::NewProp_OverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealByPercent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHealByPercent, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::HealByPercent_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHealByPercent_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHealByPercent_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealByPercent);
	UClass* Z_Construct_UClass_AHealByPercent_NoRegister()
	{
		return AHealByPercent::StaticClass();
	}
	struct Z_Construct_UClass_AHealByPercent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealByPercent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_SDET_Challenge,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHealByPercent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHealByPercent_healByPercent, "healByPercent" }, // 3436110480
		{ &Z_Construct_UFunction_AHealByPercent_OnOverlapBegin, "OnOverlapBegin" }, // 1751320663
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealByPercent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HealByPercent.h" },
		{ "ModuleRelativePath", "HealByPercent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealByPercent_Statics::NewProp_HealPercent_MetaData[] = {
		{ "Category", "HealByPercent" },
		{ "ModuleRelativePath", "HealByPercent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealByPercent_Statics::NewProp_HealPercent = { "HealPercent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHealByPercent, HealPercent), METADATA_PARAMS(Z_Construct_UClass_AHealByPercent_Statics::NewProp_HealPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealByPercent_Statics::NewProp_HealPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealByPercent_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "HealByPercent" },
		{ "ModuleRelativePath", "HealByPercent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealByPercent_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHealByPercent, Player), Z_Construct_UClass_ASDET_ChallengeCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHealByPercent_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealByPercent_Statics::NewProp_Player_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealByPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealByPercent_Statics::NewProp_HealPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealByPercent_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealByPercent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealByPercent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealByPercent_Statics::ClassParams = {
		&AHealByPercent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHealByPercent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHealByPercent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHealByPercent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHealByPercent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealByPercent()
	{
		if (!Z_Registration_Info_UClass_AHealByPercent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealByPercent.OuterSingleton, Z_Construct_UClass_AHealByPercent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHealByPercent.OuterSingleton;
	}
	template<> SDET_CHALLENGE_API UClass* StaticClass<AHealByPercent>()
	{
		return AHealByPercent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealByPercent);
	AHealByPercent::~AHealByPercent() {}
	struct Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealByPercent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealByPercent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHealByPercent, AHealByPercent::StaticClass, TEXT("AHealByPercent"), &Z_Registration_Info_UClass_AHealByPercent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealByPercent), 746590912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealByPercent_h_2531027818(TEXT("/Script/SDET_Challenge"),
		Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealByPercent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealByPercent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
