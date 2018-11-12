// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptingSample/ScriptingSampleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptingSampleGameMode() {}
// Cross Module References
	SCRIPTINGSAMPLE_API UClass* Z_Construct_UClass_AScriptingSampleGameMode_NoRegister();
	SCRIPTINGSAMPLE_API UClass* Z_Construct_UClass_AScriptingSampleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ScriptingSample();
// End Cross Module References
	void AScriptingSampleGameMode::StaticRegisterNativesAScriptingSampleGameMode()
	{
	}
	UClass* Z_Construct_UClass_AScriptingSampleGameMode_NoRegister()
	{
		return AScriptingSampleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AScriptingSampleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScriptingSampleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptingSample,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScriptingSampleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ScriptingSampleGameMode.h" },
		{ "ModuleRelativePath", "ScriptingSampleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScriptingSampleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScriptingSampleGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScriptingSampleGameMode_Statics::ClassParams = {
		&AScriptingSampleGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AScriptingSampleGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AScriptingSampleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScriptingSampleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScriptingSampleGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScriptingSampleGameMode, 3258512146);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScriptingSampleGameMode(Z_Construct_UClass_AScriptingSampleGameMode, &AScriptingSampleGameMode::StaticClass, TEXT("/Script/ScriptingSample"), TEXT("AScriptingSampleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScriptingSampleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
