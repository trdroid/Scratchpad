// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptingSample/HealthPill.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPill() {}
// Cross Module References
	SCRIPTINGSAMPLE_API UClass* Z_Construct_UClass_AHealthPill_NoRegister();
	SCRIPTINGSAMPLE_API UClass* Z_Construct_UClass_AHealthPill();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ScriptingSample();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AHealthPill::StaticRegisterNativesAHealthPill()
	{
	}
	UClass* Z_Construct_UClass_AHealthPill_NoRegister()
	{
		return AHealthPill::StaticClass();
	}
	struct Z_Construct_UClass_AHealthPill_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPillMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthPillMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPillEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPillEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthPill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptingSample,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPill_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HealthPill.h" },
		{ "ModuleRelativePath", "HealthPill.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPill_Statics::NewProp_HealthPillMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HealthPill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealthPill_Statics::NewProp_HealthPillMesh = { UE4CodeGen_Private::EPropertyClass::Object, "HealthPillMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AHealthPill, HealthPillMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHealthPill_Statics::NewProp_HealthPillMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealthPill_Statics::NewProp_HealthPillMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPill_Statics::NewProp_HealthPillEffect_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "HealthPill.h" },
		{ "ToolTip", "The amount of effect that a pill has on the health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPill_Statics::NewProp_HealthPillEffect = { UE4CodeGen_Private::EPropertyClass::Float, "HealthPillEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AHealthPill, HealthPillEffect), METADATA_PARAMS(Z_Construct_UClass_AHealthPill_Statics::NewProp_HealthPillEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealthPill_Statics::NewProp_HealthPillEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPill_Statics::NewProp_HealthPillMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPill_Statics::NewProp_HealthPillEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthPill_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPill>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHealthPill_Statics::ClassParams = {
		&AHealthPill::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AHealthPill_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AHealthPill_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHealthPill_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHealthPill_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealthPill()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHealthPill_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHealthPill, 4263707096);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHealthPill(Z_Construct_UClass_AHealthPill, &AHealthPill::StaticClass, TEXT("/Script/ScriptingSample"), TEXT("AHealthPill"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPill);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
