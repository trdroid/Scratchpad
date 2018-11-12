// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCRIPTINGSAMPLE_HealthPill_generated_h
#error "HealthPill.generated.h already included, missing '#pragma once' in HealthPill.h"
#endif
#define SCRIPTINGSAMPLE_HealthPill_generated_h

#define ScriptingSample_Source_ScriptingSample_HealthPill_h_12_RPC_WRAPPERS
#define ScriptingSample_Source_ScriptingSample_HealthPill_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ScriptingSample_Source_ScriptingSample_HealthPill_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthPill(); \
	friend struct Z_Construct_UClass_AHealthPill_Statics; \
public: \
	DECLARE_CLASS(AHealthPill, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptingSample"), NO_API) \
	DECLARE_SERIALIZER(AHealthPill)


#define ScriptingSample_Source_ScriptingSample_HealthPill_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHealthPill(); \
	friend struct Z_Construct_UClass_AHealthPill_Statics; \
public: \
	DECLARE_CLASS(AHealthPill, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptingSample"), NO_API) \
	DECLARE_SERIALIZER(AHealthPill)


#define ScriptingSample_Source_ScriptingSample_HealthPill_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthPill(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealthPill) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPill); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPill); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPill(AHealthPill&&); \
	NO_API AHealthPill(const AHealthPill&); \
public:


#define ScriptingSample_Source_ScriptingSample_HealthPill_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPill(AHealthPill&&); \
	NO_API AHealthPill(const AHealthPill&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPill); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPill); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthPill)


#define ScriptingSample_Source_ScriptingSample_HealthPill_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthPillEffect() { return STRUCT_OFFSET(AHealthPill, HealthPillEffect); }


#define ScriptingSample_Source_ScriptingSample_HealthPill_h_9_PROLOG
#define ScriptingSample_Source_ScriptingSample_HealthPill_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScriptingSample_Source_ScriptingSample_HealthPill_h_12_PRIVATE_PROPERTY_OFFSET \
	ScriptingSample_Source_ScriptingSample_HealthPill_h_12_RPC_WRAPPERS \
	ScriptingSample_Source_ScriptingSample_HealthPill_h_12_INCLASS \
	ScriptingSample_Source_ScriptingSample_HealthPill_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScriptingSample_Source_ScriptingSample_HealthPill_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScriptingSample_Source_ScriptingSample_HealthPill_h_12_PRIVATE_PROPERTY_OFFSET \
	ScriptingSample_Source_ScriptingSample_HealthPill_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ScriptingSample_Source_ScriptingSample_HealthPill_h_12_INCLASS_NO_PURE_DECLS \
	ScriptingSample_Source_ScriptingSample_HealthPill_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScriptingSample_Source_ScriptingSample_HealthPill_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
