// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Enemies/ZombieBrains.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieBrains() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_AZombieBrains_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_AZombieBrains();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References
	void AZombieBrains::StaticRegisterNativesAZombieBrains()
	{
	}
	UClass* Z_Construct_UClass_AZombieBrains_NoRegister()
	{
		return AZombieBrains::StaticClass();
	}
	UClass* Z_Construct_UClass_AZombieBrains()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AAIController,
				(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Enemies/ZombieBrains.h" },
				{ "ModuleRelativePath", "Enemies/ZombieBrains.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AZombieBrains>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AZombieBrains::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieBrains, 2805976837);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieBrains(Z_Construct_UClass_AZombieBrains, &AZombieBrains::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("AZombieBrains"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieBrains);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
