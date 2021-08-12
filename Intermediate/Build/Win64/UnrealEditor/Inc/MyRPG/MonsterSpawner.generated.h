// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYRPG_MonsterSpawner_generated_h
#error "MonsterSpawner.generated.h already included, missing '#pragma once' in MonsterSpawner.h"
#endif
#define MYRPG_MonsterSpawner_generated_h

#define MyRPG_Source_MyRPG_MonsterSpawner_h_13_SPARSE_DATA
#define MyRPG_Source_MyRPG_MonsterSpawner_h_13_RPC_WRAPPERS
#define MyRPG_Source_MyRPG_MonsterSpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyRPG_Source_MyRPG_MonsterSpawner_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterSpawner(); \
	friend struct Z_Construct_UClass_AMonsterSpawner_Statics; \
public: \
	DECLARE_CLASS(AMonsterSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyRPG"), NO_API) \
	DECLARE_SERIALIZER(AMonsterSpawner)


#define MyRPG_Source_MyRPG_MonsterSpawner_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMonsterSpawner(); \
	friend struct Z_Construct_UClass_AMonsterSpawner_Statics; \
public: \
	DECLARE_CLASS(AMonsterSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyRPG"), NO_API) \
	DECLARE_SERIALIZER(AMonsterSpawner)


#define MyRPG_Source_MyRPG_MonsterSpawner_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonsterSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonsterSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterSpawner(AMonsterSpawner&&); \
	NO_API AMonsterSpawner(const AMonsterSpawner&); \
public:


#define MyRPG_Source_MyRPG_MonsterSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterSpawner(AMonsterSpawner&&); \
	NO_API AMonsterSpawner(const AMonsterSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterSpawner)


#define MyRPG_Source_MyRPG_MonsterSpawner_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__monster() { return STRUCT_OFFSET(AMonsterSpawner, monster); } \
	FORCEINLINE static uint32 __PPO__amount() { return STRUCT_OFFSET(AMonsterSpawner, amount); } \
	FORCEINLINE static uint32 __PPO__minX() { return STRUCT_OFFSET(AMonsterSpawner, minX); } \
	FORCEINLINE static uint32 __PPO__maxX() { return STRUCT_OFFSET(AMonsterSpawner, maxX); } \
	FORCEINLINE static uint32 __PPO__minY() { return STRUCT_OFFSET(AMonsterSpawner, minY); } \
	FORCEINLINE static uint32 __PPO__maxY() { return STRUCT_OFFSET(AMonsterSpawner, maxY); } \
	FORCEINLINE static uint32 __PPO__minZ() { return STRUCT_OFFSET(AMonsterSpawner, minZ); } \
	FORCEINLINE static uint32 __PPO__maxZ() { return STRUCT_OFFSET(AMonsterSpawner, maxZ); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(AMonsterSpawner, offset); }


#define MyRPG_Source_MyRPG_MonsterSpawner_h_10_PROLOG
#define MyRPG_Source_MyRPG_MonsterSpawner_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyRPG_Source_MyRPG_MonsterSpawner_h_13_PRIVATE_PROPERTY_OFFSET \
	MyRPG_Source_MyRPG_MonsterSpawner_h_13_SPARSE_DATA \
	MyRPG_Source_MyRPG_MonsterSpawner_h_13_RPC_WRAPPERS \
	MyRPG_Source_MyRPG_MonsterSpawner_h_13_INCLASS \
	MyRPG_Source_MyRPG_MonsterSpawner_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyRPG_Source_MyRPG_MonsterSpawner_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyRPG_Source_MyRPG_MonsterSpawner_h_13_PRIVATE_PROPERTY_OFFSET \
	MyRPG_Source_MyRPG_MonsterSpawner_h_13_SPARSE_DATA \
	MyRPG_Source_MyRPG_MonsterSpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyRPG_Source_MyRPG_MonsterSpawner_h_13_INCLASS_NO_PURE_DECLS \
	MyRPG_Source_MyRPG_MonsterSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYRPG_API UClass* StaticClass<class AMonsterSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyRPG_Source_MyRPG_MonsterSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
