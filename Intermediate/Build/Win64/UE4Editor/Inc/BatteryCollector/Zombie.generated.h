// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABatteryCollectorCharacter;
class AActor;
#ifdef BATTERYCOLLECTOR_Zombie_generated_h
#error "Zombie.generated.h already included, missing '#pragma once' in Zombie.h"
#endif
#define BATTERYCOLLECTOR_Zombie_generated_h

#define BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTargetAsBatteryCollectorCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ABatteryCollectorCharacter**)Z_Param__Result=this->GetTargetAsBatteryCollectorCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->GetTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTarget) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTarget(Z_Param_NewTarget); \
		P_NATIVE_END; \
	}


#define BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTargetAsBatteryCollectorCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ABatteryCollectorCharacter**)Z_Param__Result=this->GetTargetAsBatteryCollectorCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->GetTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTarget) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTarget(Z_Param_NewTarget); \
		P_NATIVE_END; \
	}


#define BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_AZombie(); \
public: \
	DECLARE_CLASS(AZombie, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(AZombie) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_AZombie(); \
public: \
	DECLARE_CLASS(AZombie, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(AZombie) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombie(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie(AZombie&&); \
	NO_API AZombie(const AZombie&); \
public:


#define BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie(AZombie&&); \
	NO_API AZombie(const AZombie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombie)


#define BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(AZombie, TargetActor); } \
	FORCEINLINE static uint32 __PPO__TargetBatteryCollectorCharacter() { return STRUCT_OFFSET(AZombie, TargetBatteryCollectorCharacter); } \
	FORCEINLINE static uint32 __PPO__HitShake() { return STRUCT_OFFSET(AZombie, HitShake); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AZombie, Health); } \
	FORCEINLINE static uint32 __PPO__SightDistance() { return STRUCT_OFFSET(AZombie, SightDistance); } \
	FORCEINLINE static uint32 __PPO__SightAngle() { return STRUCT_OFFSET(AZombie, SightAngle); } \
	FORCEINLINE static uint32 __PPO__YawSpeed() { return STRUCT_OFFSET(AZombie, YawSpeed); } \
	FORCEINLINE static uint32 __PPO__WalkSpeed() { return STRUCT_OFFSET(AZombie, WalkSpeed); } \
	FORCEINLINE static uint32 __PPO__RunSpeed() { return STRUCT_OFFSET(AZombie, RunSpeed); } \
	FORCEINLINE static uint32 __PPO__AttackDistance() { return STRUCT_OFFSET(AZombie, AttackDistance); } \
	FORCEINLINE static uint32 __PPO__AttackAngle() { return STRUCT_OFFSET(AZombie, AttackAngle); } \
	FORCEINLINE static uint32 __PPO__AttackCooldown() { return STRUCT_OFFSET(AZombie, AttackCooldown); } \
	FORCEINLINE static uint32 __PPO__AttackAvailableTime() { return STRUCT_OFFSET(AZombie, AttackAvailableTime); }


#define BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_11_PROLOG
#define BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_INCLASS \
	BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_Enemies_Zombie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
