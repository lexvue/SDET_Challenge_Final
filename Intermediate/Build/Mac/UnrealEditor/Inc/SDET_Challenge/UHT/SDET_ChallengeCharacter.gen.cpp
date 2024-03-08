// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SDET_Challenge/SDET_ChallengeCharacter.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDET_ChallengeCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	SDET_CHALLENGE_API UClass* Z_Construct_UClass_ASDET_ChallengeCharacter();
	SDET_CHALLENGE_API UClass* Z_Construct_UClass_ASDET_ChallengeCharacter_NoRegister();
	SDET_CHALLENGE_API UFunction* Z_Construct_UDelegateFunction_SDET_Challenge_DeathTriggerDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SDET_Challenge();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SDET_Challenge_DeathTriggerDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SDET_Challenge_DeathTriggerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SDET_Challenge_DeathTriggerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SDET_Challenge, nullptr, "DeathTriggerDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SDET_Challenge_DeathTriggerDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDET_Challenge_DeathTriggerDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SDET_Challenge_DeathTriggerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SDET_Challenge_DeathTriggerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDeathTriggerDelegate_DelegateWrapper(const FMulticastScriptDelegate& DeathTriggerDelegate)
{
	DeathTriggerDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ASDET_ChallengeCharacter::execPlayerDeathEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerDeathEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASDET_ChallengeCharacter::execHealCharacterByPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HealCharacterByPercent(Z_Param_percent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASDET_ChallengeCharacter::execHealCharacter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HealCharacter(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASDET_ChallengeCharacter::execDamageCharacter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageCharacter(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASDET_ChallengeCharacter::execSetCurrentHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentHealth(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASDET_ChallengeCharacter::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASDET_ChallengeCharacter::execGetCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASDET_ChallengeCharacter::execMove)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void ASDET_ChallengeCharacter::StaticRegisterNativesASDET_ChallengeCharacter()
	{
		UClass* Class = ASDET_ChallengeCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageCharacter", &ASDET_ChallengeCharacter::execDamageCharacter },
			{ "GetCurrentHealth", &ASDET_ChallengeCharacter::execGetCurrentHealth },
			{ "GetMaxHealth", &ASDET_ChallengeCharacter::execGetMaxHealth },
			{ "HealCharacter", &ASDET_ChallengeCharacter::execHealCharacter },
			{ "HealCharacterByPercent", &ASDET_ChallengeCharacter::execHealCharacterByPercent },
			{ "Move", &ASDET_ChallengeCharacter::execMove },
			{ "PlayerDeathEvent", &ASDET_ChallengeCharacter::execPlayerDeathEvent },
			{ "SetCurrentHealth", &ASDET_ChallengeCharacter::execSetCurrentHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter_Statics
	{
		struct SDET_ChallengeCharacter_eventDamageCharacter_Parms
		{
			float amount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDET_ChallengeCharacter_eventDamageCharacter_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDET_ChallengeCharacter, nullptr, "DamageCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter_Statics::SDET_ChallengeCharacter_eventDamageCharacter_Parms), Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth_Statics
	{
		struct SDET_ChallengeCharacter_eventGetCurrentHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDET_ChallengeCharacter_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDET_ChallengeCharacter, nullptr, "GetCurrentHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth_Statics::SDET_ChallengeCharacter_eventGetCurrentHealth_Parms), Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth_Statics
	{
		struct SDET_ChallengeCharacter_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDET_ChallengeCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDET_ChallengeCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth_Statics::SDET_ChallengeCharacter_eventGetMaxHealth_Parms), Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter_Statics
	{
		struct SDET_ChallengeCharacter_eventHealCharacter_Parms
		{
			float amount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDET_ChallengeCharacter_eventHealCharacter_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDET_ChallengeCharacter, nullptr, "HealCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter_Statics::SDET_ChallengeCharacter_eventHealCharacter_Parms), Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent_Statics
	{
		struct SDET_ChallengeCharacter_eventHealCharacterByPercent_Parms
		{
			float percent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_percent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDET_ChallengeCharacter_eventHealCharacterByPercent_Parms, percent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent_Statics::NewProp_percent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDET_ChallengeCharacter, nullptr, "HealCharacterByPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent_Statics::SDET_ChallengeCharacter_eventHealCharacterByPercent_Parms), Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics
	{
		struct SDET_ChallengeCharacter_eventMove_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDET_ChallengeCharacter_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called for movement input */" },
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
		{ "ToolTip", "Called for movement input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDET_ChallengeCharacter, nullptr, "Move", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::SDET_ChallengeCharacter_eventMove_Parms), Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASDET_ChallengeCharacter_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASDET_ChallengeCharacter_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASDET_ChallengeCharacter_PlayerDeathEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDET_ChallengeCharacter_PlayerDeathEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASDET_ChallengeCharacter_PlayerDeathEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDET_ChallengeCharacter, nullptr, "PlayerDeathEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASDET_ChallengeCharacter_PlayerDeathEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_PlayerDeathEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASDET_ChallengeCharacter_PlayerDeathEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASDET_ChallengeCharacter_PlayerDeathEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth_Statics
	{
		struct SDET_ChallengeCharacter_eventSetCurrentHealth_Parms
		{
			float amount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDET_ChallengeCharacter_eventSetCurrentHealth_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDET_ChallengeCharacter, nullptr, "SetCurrentHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth_Statics::SDET_ChallengeCharacter_eventSetCurrentHealth_Parms), Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASDET_ChallengeCharacter);
	UClass* Z_Construct_UClass_ASDET_ChallengeCharacter_NoRegister()
	{
		return ASDET_ChallengeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASDET_ChallengeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDeath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SDET_Challenge,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASDET_ChallengeCharacter_DamageCharacter, "DamageCharacter" }, // 356616010
		{ &Z_Construct_UFunction_ASDET_ChallengeCharacter_GetCurrentHealth, "GetCurrentHealth" }, // 747915576
		{ &Z_Construct_UFunction_ASDET_ChallengeCharacter_GetMaxHealth, "GetMaxHealth" }, // 304707621
		{ &Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacter, "HealCharacter" }, // 3792825012
		{ &Z_Construct_UFunction_ASDET_ChallengeCharacter_HealCharacterByPercent, "HealCharacterByPercent" }, // 2878726363
		{ &Z_Construct_UFunction_ASDET_ChallengeCharacter_Move, "Move" }, // 1587807261
		{ &Z_Construct_UFunction_ASDET_ChallengeCharacter_PlayerDeathEvent, "PlayerDeathEvent" }, // 2774060028
		{ &Z_Construct_UFunction_ASDET_ChallengeCharacter_SetCurrentHealth, "SetCurrentHealth" }, // 4259016842
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SDET_ChallengeCharacter.h" },
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASDET_ChallengeCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASDET_ChallengeCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASDET_ChallengeCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASDET_ChallengeCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASDET_ChallengeCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASDET_ChallengeCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_currentHealth_MetaData[] = {
		{ "Category", "SDET_ChallengeCharacter" },
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASDET_ChallengeCharacter, currentHealth), METADATA_PARAMS(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_currentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_currentHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "SDET_ChallengeCharacter" },
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASDET_ChallengeCharacter, maxHealth), METADATA_PARAMS(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_OnPlayerDeath_MetaData[] = {
		{ "ModuleRelativePath", "SDET_ChallengeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_OnPlayerDeath = { "OnPlayerDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASDET_ChallengeCharacter, OnPlayerDeath), Z_Construct_UDelegateFunction_SDET_Challenge_DeathTriggerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_OnPlayerDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_OnPlayerDeath_MetaData)) }; // 3776344237
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_currentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::NewProp_OnPlayerDeath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDET_ChallengeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::ClassParams = {
		&ASDET_ChallengeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASDET_ChallengeCharacter()
	{
		if (!Z_Registration_Info_UClass_ASDET_ChallengeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASDET_ChallengeCharacter.OuterSingleton, Z_Construct_UClass_ASDET_ChallengeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASDET_ChallengeCharacter.OuterSingleton;
	}
	template<> SDET_CHALLENGE_API UClass* StaticClass<ASDET_ChallengeCharacter>()
	{
		return ASDET_ChallengeCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASDET_ChallengeCharacter);
	ASDET_ChallengeCharacter::~ASDET_ChallengeCharacter() {}
	struct Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASDET_ChallengeCharacter, ASDET_ChallengeCharacter::StaticClass, TEXT("ASDET_ChallengeCharacter"), &Z_Registration_Info_UClass_ASDET_ChallengeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASDET_ChallengeCharacter), 394131882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_2583459383(TEXT("/Script/SDET_Challenge"),
		Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
