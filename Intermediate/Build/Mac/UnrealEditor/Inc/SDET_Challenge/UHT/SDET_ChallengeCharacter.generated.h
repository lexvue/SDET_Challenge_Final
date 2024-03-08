// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SDET_ChallengeCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef SDET_CHALLENGE_SDET_ChallengeCharacter_generated_h
#error "SDET_ChallengeCharacter.generated.h already included, missing '#pragma once' in SDET_ChallengeCharacter.h"
#endif
#define SDET_CHALLENGE_SDET_ChallengeCharacter_generated_h

#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_12_DELEGATE \
SDET_CHALLENGE_API void FDeathTriggerDelegate_DelegateWrapper(const FMulticastScriptDelegate& DeathTriggerDelegate);


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_SPARSE_DATA
#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayerDeathEvent); \
	DECLARE_FUNCTION(execHealCharacterByPercent); \
	DECLARE_FUNCTION(execHealCharacter); \
	DECLARE_FUNCTION(execDamageCharacter); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execMove);


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayerDeathEvent); \
	DECLARE_FUNCTION(execHealCharacterByPercent); \
	DECLARE_FUNCTION(execHealCharacter); \
	DECLARE_FUNCTION(execDamageCharacter); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execMove);


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_ACCESSORS
#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASDET_ChallengeCharacter(); \
	friend struct Z_Construct_UClass_ASDET_ChallengeCharacter_Statics; \
public: \
	DECLARE_CLASS(ASDET_ChallengeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SDET_Challenge"), NO_API) \
	DECLARE_SERIALIZER(ASDET_ChallengeCharacter)


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASDET_ChallengeCharacter(); \
	friend struct Z_Construct_UClass_ASDET_ChallengeCharacter_Statics; \
public: \
	DECLARE_CLASS(ASDET_ChallengeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SDET_Challenge"), NO_API) \
	DECLARE_SERIALIZER(ASDET_ChallengeCharacter)


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASDET_ChallengeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASDET_ChallengeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDET_ChallengeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDET_ChallengeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASDET_ChallengeCharacter(ASDET_ChallengeCharacter&&); \
	NO_API ASDET_ChallengeCharacter(const ASDET_ChallengeCharacter&); \
public: \
	NO_API virtual ~ASDET_ChallengeCharacter();


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASDET_ChallengeCharacter(ASDET_ChallengeCharacter&&); \
	NO_API ASDET_ChallengeCharacter(const ASDET_ChallengeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDET_ChallengeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDET_ChallengeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASDET_ChallengeCharacter) \
	NO_API virtual ~ASDET_ChallengeCharacter();


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_14_PROLOG
#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_SPARSE_DATA \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_RPC_WRAPPERS \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_ACCESSORS \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_INCLASS \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_SPARSE_DATA \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_ACCESSORS \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SDET_CHALLENGE_API UClass* StaticClass<class ASDET_ChallengeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_SDET_ChallengeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
