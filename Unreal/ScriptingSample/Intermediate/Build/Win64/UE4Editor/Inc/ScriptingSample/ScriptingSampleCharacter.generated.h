// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCRIPTINGSAMPLE_ScriptingSampleCharacter_generated_h
#error "ScriptingSampleCharacter.generated.h already included, missing '#pragma once' in ScriptingSampleCharacter.h"
#endif
#define SCRIPTINGSAMPLE_ScriptingSampleCharacter_generated_h

#define ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_RPC_WRAPPERS
#define ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScriptingSampleCharacter(); \
	friend struct Z_Construct_UClass_AScriptingSampleCharacter_Statics; \
public: \
	DECLARE_CLASS(AScriptingSampleCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptingSample"), NO_API) \
	DECLARE_SERIALIZER(AScriptingSampleCharacter)


#define ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAScriptingSampleCharacter(); \
	friend struct Z_Construct_UClass_AScriptingSampleCharacter_Statics; \
public: \
	DECLARE_CLASS(AScriptingSampleCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptingSample"), NO_API) \
	DECLARE_SERIALIZER(AScriptingSampleCharacter)


#define ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScriptingSampleCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScriptingSampleCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScriptingSampleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScriptingSampleCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScriptingSampleCharacter(AScriptingSampleCharacter&&); \
	NO_API AScriptingSampleCharacter(const AScriptingSampleCharacter&); \
public:


#define ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScriptingSampleCharacter(AScriptingSampleCharacter&&); \
	NO_API AScriptingSampleCharacter(const AScriptingSampleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScriptingSampleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScriptingSampleCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScriptingSampleCharacter)


#define ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AScriptingSampleCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AScriptingSampleCharacter, FollowCamera); }


#define ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_11_PROLOG
#define ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_RPC_WRAPPERS \
	ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_INCLASS \
	ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScriptingSample_Source_ScriptingSample_ScriptingSampleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
