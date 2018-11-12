// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptingSample/HealthPillSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPillSpawner() {}
// Cross Module References
	SCRIPTINGSAMPLE_API UClass* Z_Construct_UClass_AHealthPillSpawner_NoRegister();
	SCRIPTINGSAMPLE_API UClass* Z_Construct_UClass_AHealthPillSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ScriptingSample();
	SCRIPTINGSAMPLE_API UFunction* Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SCRIPTINGSAMPLE_API UClass* Z_Construct_UClass_AHealthPill_NoRegister();
// End Cross Module References
	void AHealthPillSpawner::StaticRegisterNativesAHealthPillSpawner()
	{
		UClass* Class = AHealthPillSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomPointInVolume", &AHealthPillSpawner::execGetRandomPointInVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume_Statics
	{
		struct HealthPillSpawner_eventGetRandomPointInVolume_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HealthPillSpawner_eventGetRandomPointInVolume_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "HealthPillSpawner.h" },
		{ "ToolTip", "Gets a random point in a Spawning Volume where a HealthPill can be placed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHealthPillSpawner, "GetRandomPointInVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(HealthPillSpawner_eventGetRandomPointInVolume_Parms), Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHealthPillSpawner_NoRegister()
	{
		return AHealthPillSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AHealthPillSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawningVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawningVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthPillSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptingSample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHealthPillSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHealthPillSpawner_GetRandomPointInVolume, "GetRandomPointInVolume" }, // 1613638977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPillSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HealthPillSpawner.h" },
		{ "ModuleRelativePath", "HealthPillSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPillSpawner_Statics::NewProp_SpawningVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HealthPillSpawner.h" },
		{ "ToolTip", "The SpawningVolume component refers to its visual representation/the geometry/the shape of the volume within which\nthe HealthPins would have to be spawned." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealthPillSpawner_Statics::NewProp_SpawningVolume = { UE4CodeGen_Private::EPropertyClass::Object, "SpawningVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AHealthPillSpawner, SpawningVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHealthPillSpawner_Statics::NewProp_SpawningVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealthPillSpawner_Statics::NewProp_SpawningVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPillSpawner_Statics::NewProp_ItemToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "HealthPillSpawner.h" },
		{ "ToolTip", "The type of item that the Spawner has to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHealthPillSpawner_Statics::NewProp_ItemToSpawn = { UE4CodeGen_Private::EPropertyClass::Class, "ItemToSpawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(AHealthPillSpawner, ItemToSpawn), Z_Construct_UClass_AHealthPill_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHealthPillSpawner_Statics::NewProp_ItemToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealthPillSpawner_Statics::NewProp_ItemToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPillSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPillSpawner_Statics::NewProp_SpawningVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPillSpawner_Statics::NewProp_ItemToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthPillSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPillSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHealthPillSpawner_Statics::ClassParams = {
		&AHealthPillSpawner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AHealthPillSpawner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AHealthPillSpawner_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHealthPillSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHealthPillSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealthPillSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHealthPillSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHealthPillSpawner, 3058037378);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHealthPillSpawner(Z_Construct_UClass_AHealthPillSpawner, &AHealthPillSpawner::StaticClass, TEXT("/Script/ScriptingSample"), TEXT("AHealthPillSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPillSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
