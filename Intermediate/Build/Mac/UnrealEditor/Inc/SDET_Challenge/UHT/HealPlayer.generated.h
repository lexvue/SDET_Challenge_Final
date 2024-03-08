// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HealPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SDET_CHALLENGE_HealPlayer_generated_h
#error "HealPlayer.generated.h already included, missing '#pragma once' in HealPlayer.h"
#endif
#define SDET_CHALLENGE_HealPlayer_generated_h

#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_SPARSE_DATA
#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(exechealPlayer); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(exechealPlayer); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_ACCESSORS
#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealPlayer(); \
	friend struct Z_Construct_UClass_AHealPlayer_Statics; \
public: \
	DECLARE_CLASS(AHealPlayer, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SDET_Challenge"), NO_API) \
	DECLARE_SERIALIZER(AHealPlayer)


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAHealPlayer(); \
	friend struct Z_Construct_UClass_AHealPlayer_Statics; \
public: \
	DECLARE_CLASS(AHealPlayer, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SDET_Challenge"), NO_API) \
	DECLARE_SERIALIZER(AHealPlayer)


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealPlayer(AHealPlayer&&); \
	NO_API AHealPlayer(const AHealPlayer&); \
public: \
	NO_API virtual ~AHealPlayer();


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealPlayer(AHealPlayer&&); \
	NO_API AHealPlayer(const AHealPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealPlayer) \
	NO_API virtual ~AHealPlayer();


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_13_PROLOG
#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_SPARSE_DATA \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_RPC_WRAPPERS \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_ACCESSORS \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_INCLASS \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_SPARSE_DATA \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_ACCESSORS \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_INCLASS_NO_PURE_DECLS \
	FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SDET_CHALLENGE_API UClass* StaticClass<class AHealPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_Desktop_UE5Projects_SDET_Challenge_Source_SDET_Challenge_HealPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
