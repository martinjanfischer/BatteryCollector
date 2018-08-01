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
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_AddAttackInput();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_AddRotationInput();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_ConsumeAttackInput();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_ConsumeRotationInput();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_GetAttackInput();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_GetRotationInput();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_GetTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_GetTargetAsBatteryCollectorCharacter();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_SetTarget();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_ZombieAI();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_ZombieAIShouldAttack();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_ZombieAttack();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_AZombie_ZombieWalk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
// End Cross Module References
	static FName NAME_AZombie_ZombieAI = FName(TEXT("ZombieAI"));
	void AZombie::ZombieAI(float DeltaSeconds)
	{
		Zombie_eventZombieAI_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AZombie_ZombieAI),&Parms);
	}
	static FName NAME_AZombie_ZombieAIShouldAttack = FName(TEXT("ZombieAIShouldAttack"));
	bool AZombie::ZombieAIShouldAttack()
	{
		Zombie_eventZombieAIShouldAttack_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AZombie_ZombieAIShouldAttack),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AZombie_ZombieAttack = FName(TEXT("ZombieAttack"));
	void AZombie::ZombieAttack(float DeltaSeconds)
	{
		Zombie_eventZombieAttack_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AZombie_ZombieAttack),&Parms);
	}
	static FName NAME_AZombie_ZombieWalk = FName(TEXT("ZombieWalk"));
	void AZombie::ZombieWalk(float DeltaSeconds, FVector DistanceWalkedThisFrame)
	{
		Zombie_eventZombieWalk_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		Parms.DistanceWalkedThisFrame=DistanceWalkedThisFrame;
		ProcessEvent(FindFunctionChecked(NAME_AZombie_ZombieWalk),&Parms);
	}
	void AZombie::StaticRegisterNativesAZombie()
	{
		UClass* Class = AZombie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAttackInput", (Native)&AZombie::execAddAttackInput },
			{ "AddRotationInput", (Native)&AZombie::execAddRotationInput },
			{ "ConsumeAttackInput", (Native)&AZombie::execConsumeAttackInput },
			{ "ConsumeRotationInput", (Native)&AZombie::execConsumeRotationInput },
			{ "GetAttackInput", (Native)&AZombie::execGetAttackInput },
			{ "GetRotationInput", (Native)&AZombie::execGetRotationInput },
			{ "GetTarget", (Native)&AZombie::execGetTarget },
			{ "GetTargetAsBatteryCollectorCharacter", (Native)&AZombie::execGetTargetAsBatteryCollectorCharacter },
			{ "SetTarget", (Native)&AZombie::execSetTarget },
			{ "ZombieAI", (Native)&AZombie::execZombieAI },
			{ "ZombieAIShouldAttack", (Native)&AZombie::execZombieAIShouldAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AZombie_AddAttackInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "Keywords", "AddInput" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Press the attack button. The pawn will know what to do with this. No arguments because it's a bool" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "AddAttackInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZombie_AddRotationInput()
	{
		struct Zombie_eventAddRotationInput_Parms
		{
			float DeltaYawDegrees;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaYawDegrees = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaYawDegrees", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombie_eventAddRotationInput_Parms, DeltaYawDegrees), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaYawDegrees,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "Keywords", "AddInput" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Add rotation equal to the yaw (in degrees) provided." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "AddRotationInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Zombie_eventAddRotationInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZombie_ConsumeAttackInput()
	{
		struct Zombie_eventConsumeAttackInput_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Zombie_eventConsumeAttackInput_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Zombie_eventConsumeAttackInput_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "Keywords", "ConsumeInput" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Get (and clear) the status of the attack button." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "ConsumeAttackInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Zombie_eventConsumeAttackInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZombie_ConsumeRotationInput()
	{
		struct Zombie_eventConsumeRotationInput_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Zombie_eventConsumeRotationInput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "Keywords", "ConsumeInput" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Get (and clear) rotation input. Returns pre-clear value." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "ConsumeRotationInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Zombie_eventConsumeRotationInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZombie_GetAttackInput()
	{
		struct Zombie_eventGetAttackInput_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Zombie_eventGetAttackInput_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Zombie_eventGetAttackInput_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "Keywords", "ConsumeInput" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Get the status of the attack button." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "GetAttackInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Zombie_eventGetAttackInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZombie_GetRotationInput()
	{
		struct Zombie_eventGetRotationInput_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Zombie_eventGetRotationInput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "Keywords", "ConsumeInput" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Get rotation input. Returns pre-clear value." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "GetRotationInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Zombie_eventGetRotationInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
	UFunction* Z_Construct_UFunction_AZombie_ZombieAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombie_eventZombieAI_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "Zombies will call this on Tick." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "ZombieAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(Zombie_eventZombieAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZombie_ZombieAIShouldAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Zombie_eventZombieAIShouldAttack_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Zombie_eventZombieAIShouldAttack_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "This function asks the zombie if it is in position to attack its current target. It does not actually" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "ZombieAIShouldAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(Zombie_eventZombieAIShouldAttack_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZombie_ZombieAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombie_eventZombieAttack_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "This can be used to start attack animations." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "ZombieAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Zombie_eventZombieAttack_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZombie_ZombieWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceWalkedThisFrame = { UE4CodeGen_Private::EPropertyClass::Struct, "DistanceWalkedThisFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombie_eventZombieWalk_Parms, DistanceWalkedThisFrame), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombie_eventZombieWalk_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceWalkedThisFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Enemies/Zombie.h" },
				{ "ToolTip", "This can be used to animate walking." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "ZombieWalk", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820800, sizeof(Zombie_eventZombieWalk_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
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
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AZombie_AddAttackInput, "AddAttackInput" }, // 3689077258
				{ &Z_Construct_UFunction_AZombie_AddRotationInput, "AddRotationInput" }, // 322918576
				{ &Z_Construct_UFunction_AZombie_ConsumeAttackInput, "ConsumeAttackInput" }, // 2344259068
				{ &Z_Construct_UFunction_AZombie_ConsumeRotationInput, "ConsumeRotationInput" }, // 2786396376
				{ &Z_Construct_UFunction_AZombie_GetAttackInput, "GetAttackInput" }, // 3633697456
				{ &Z_Construct_UFunction_AZombie_GetRotationInput, "GetRotationInput" }, // 1783127211
				{ &Z_Construct_UFunction_AZombie_GetTarget, "GetTarget" }, // 2315266388
				{ &Z_Construct_UFunction_AZombie_GetTargetAsBatteryCollectorCharacter, "GetTargetAsBatteryCollectorCharacter" }, // 3560455699
				{ &Z_Construct_UFunction_AZombie_SetTarget, "SetTarget" }, // 948223360
				{ &Z_Construct_UFunction_AZombie_ZombieAI, "ZombieAI" }, // 547587812
				{ &Z_Construct_UFunction_AZombie_ZombieAIShouldAttack, "ZombieAIShouldAttack" }, // 1756147604
				{ &Z_Construct_UFunction_AZombie_ZombieAttack, "ZombieAttack" }, // 232564636
				{ &Z_Construct_UFunction_AZombie_ZombieWalk, "ZombieWalk" }, // 1984949048
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
	IMPLEMENT_CLASS(AZombie, 1852890016);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombie(Z_Construct_UClass_AZombie, &AZombie::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("AZombie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
