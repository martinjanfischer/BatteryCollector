// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Enemies/Zombie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombie() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_AZombie_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_AZombie();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_GetTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_GetTargetAsBatteryCollectorCharacter();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_SetTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
// End Cross Module References
	void AZombie::StaticRegisterNativesAZombie()
	{
		UClass* Class = AZombie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTarget", (Native)&AZombie::execGetTarget },
			{ "GetTargetAsBatteryCollectorCharacter", (Native)&AZombie::execGetTargetAsBatteryCollectorCharacter },
			{ "SetTarget", (Native)&AZombie::execSetTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AZombie_GetTarget()
	{
		struct Zombie_eventGetTarget_Parms
		{
			AActor* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Zombie_eventGetTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Return the target Actor. Returning NULL indicates no target." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "GetTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Zombie_eventGetTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZombie_GetTargetAsBatteryCollectorCharacter()
	{
		struct Zombie_eventGetTargetAsBatteryCollectorCharacter_Parms
		{
			ABatteryCollectorCharacter* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Zombie_eventGetTargetAsBatteryCollectorCharacter_Parms, ReturnValue), Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Return the target Actor as a BatteryCollectorCharacter, if possible. Returning NULL indicates no target, or that the BatteryCollectorCharacter ." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "GetTargetAsBatteryCollectorCharacter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Zombie_eventGetTargetAsBatteryCollectorCharacter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZombie_SetTarget()
	{
		struct Zombie_eventSetTarget_Parms
		{
			AActor* NewTarget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTarget = { UE4CodeGen_Private::EPropertyClass::Object, "NewTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombie_eventSetTarget_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTarget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Set this zombie's target. The base version of this function will handle updating TargetActor and T ." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "SetTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Zombie_eventSetTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZombie_NoRegister()
	{
		return AZombie::StaticClass();
	}
	UClass* Z_Construct_UClass_AZombie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AZombie_GetTarget, "GetTarget" }, // 2315266388
				{ &Z_Construct_UFunction_AZombie_GetTargetAsBatteryCollectorCharacter, "GetTargetAsBatteryCollectorCharacter" }, // 3560455699
				{ &Z_Construct_UFunction_AZombie_SetTarget, "SetTarget" }, // 948223360
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Enemies/Zombie.h" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAvailableTime_MetaData[] = {
				{ "Category", "Zombie" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Game time, in seconds, when the Zombie will be allowed to attack again." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackAvailableTime = { UE4CodeGen_Private::EPropertyClass::Float, "AttackAvailableTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000022805, 1, nullptr, STRUCT_OFFSET(AZombie, AttackAvailableTime), METADATA_PARAMS(NewProp_AttackAvailableTime_MetaData, ARRAY_COUNT(NewProp_AttackAvailableTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[] = {
				{ "Category", "Zombie" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Minimum time between attacks." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown = { UE4CodeGen_Private::EPropertyClass::Float, "AttackCooldown", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombie, AttackCooldown), METADATA_PARAMS(NewProp_AttackCooldown_MetaData, ARRAY_COUNT(NewProp_AttackCooldown_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAngle_MetaData[] = {
				{ "Category", "Zombie" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Half-angle (in degrees) for our attack." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackAngle = { UE4CodeGen_Private::EPropertyClass::Float, "AttackAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombie, AttackAngle), METADATA_PARAMS(NewProp_AttackAngle_MetaData, ARRAY_COUNT(NewProp_AttackAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDistance_MetaData[] = {
				{ "Category", "Zombie" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Attack distance." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDistance = { UE4CodeGen_Private::EPropertyClass::Float, "AttackDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombie, AttackDistance), METADATA_PARAMS(NewProp_AttackDistance_MetaData, ARRAY_COUNT(NewProp_AttackDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
				{ "Category", "Zombie" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Speed when running toward target." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "RunSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombie, RunSpeed), METADATA_PARAMS(NewProp_RunSpeed_MetaData, ARRAY_COUNT(NewProp_RunSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
				{ "Category", "Zombie" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Speed when wandering around, or when facing away from the target." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "WalkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombie, WalkSpeed), METADATA_PARAMS(NewProp_WalkSpeed_MetaData, ARRAY_COUNT(NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[] = {
				{ "Category", "Zombie" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Max yaw speed per second in degrees." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "YawSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombie, YawSpeed), METADATA_PARAMS(NewProp_YawSpeed_MetaData, ARRAY_COUNT(NewProp_YawSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightAngle_MetaData[] = {
				{ "Category", "Zombie" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Sight half-angle in degrees (when not target is present)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightAngle = { UE4CodeGen_Private::EPropertyClass::Float, "SightAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombie, SightAngle), METADATA_PARAMS(NewProp_SightAngle_MetaData, ARRAY_COUNT(NewProp_SightAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightDistance_MetaData[] = {
				{ "Category", "Zombie" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Sight distance (when not target is present)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightDistance = { UE4CodeGen_Private::EPropertyClass::Float, "SightDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombie, SightDistance), METADATA_PARAMS(NewProp_SightDistance_MetaData, ARRAY_COUNT(NewProp_SightDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
				{ "Category", "Zombie" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Current health value. Might be fun to have different values for different attack types, e.g. fire ." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombie, Health), METADATA_PARAMS(NewProp_Health_MetaData, ARRAY_COUNT(NewProp_Health_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitShake_MetaData[] = {
				{ "Category", "Zombie" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Camera effect, if any, to play when the player is hit by this Zombie." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_HitShake = { UE4CodeGen_Private::EPropertyClass::Class, "HitShake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(AZombie, HitShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_HitShake_MetaData, ARRAY_COUNT(NewProp_HitShake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBatteryCollectorCharacter_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "The actor we're targeting, cast to a BatteryCollectorCharacter and cached. Will be NULL if no target if the target a ." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetBatteryCollectorCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "TargetBatteryCollectorCharacter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020801, 1, nullptr, STRUCT_OFFSET(AZombie, TargetBatteryCollectorCharacter), Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister, METADATA_PARAMS(NewProp_TargetBatteryCollectorCharacter_MetaData, ARRAY_COUNT(NewProp_TargetBatteryCollectorCharacter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "The actor we're targeting. Will be NULL if there is not target." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor = { UE4CodeGen_Private::EPropertyClass::Object, "TargetActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020801, 1, nullptr, STRUCT_OFFSET(AZombie, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_TargetActor_MetaData, ARRAY_COUNT(NewProp_TargetActor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackAvailableTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackCooldown,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RunSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WalkSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_YawSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SightAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SightDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitShake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetBatteryCollectorCharacter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetActor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AZombie>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AZombie::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombie, 2548350749);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombie(Z_Construct_UClass_AZombie, &AZombie::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("AZombie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
