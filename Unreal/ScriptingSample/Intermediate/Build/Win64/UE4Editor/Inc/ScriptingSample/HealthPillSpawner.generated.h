// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef SCRIPTINGSAMPLE_HealthPillSpawner_generated_h
#error "HealthPillSpawner.generated.h already included, missing '#pragma once' in HealthPillSpawner.h"
#endif
#define SCRIPTINGSAMPLE_HealthPillSpawner_generated_h

#define ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomPointInVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRandomPointInVolume(); \
		P_NATIVE_END; \
	}


#define ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomPointInVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRandomPointInVolume(); \
		P_NATIVE_END; \
	}


#define ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthPillSpawner(); \
	friend struct Z_Construct_UClass_AHealthPillSpawner_Statics; \
public: \
	DECLARE_CLASS(AHealthPillSpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptingSample"), NO_API) \
	DECLARE_SERIALIZER(AHealthPillSpawner)


#define ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAHealthPillSpawner(); \
	friend struct Z_Construct_UClass_AHealthPillSpawner_Statics; \
public: \
	DECLARE_CLASS(AHealthPillSpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptingSample"), NO_API) \
	DECLARE_SERIALIZER(AHealthPillSpawner)


#define ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthPillSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealthPillSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPillSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPillSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPillSpawner(AHealthPillSpawner&&); \
	NO_API AHealthPillSpawner(const AHealthPillSpawner&); \
public:


#define ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPillSpawner(AHealthPillSpawner&&); \
	NO_API AHealthPillSpawner(const AHealthPillSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPillSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPillSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthPillSpawner)


#define ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemToSpawn() { return STRUCT_OFFSET(AHealthPillSpawner, ItemToSpawn); } \
	FORCEINLINE static uint32 __PPO__SpawningVolume() { return STRUCT_OFFSET(AHealthPillSpawner, SpawningVolume); }


#define ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_10_PROLOG
#define ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_PRIVATE_PROPERTY_OFFSET \
	ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_RPC_WRAPPERS \
	ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_INCLASS \
	ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_PRIVATE_PROPERTY_OFFSET \
	ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_INCLASS_NO_PURE_DECLS \
	ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScriptingSample_Source_ScriptingSample_HealthPillSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
