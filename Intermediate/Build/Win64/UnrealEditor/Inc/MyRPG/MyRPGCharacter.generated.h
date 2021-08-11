// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYRPG_MyRPGCharacter_generated_h
#error "MyRPGCharacter.generated.h already included, missing '#pragma once' in MyRPGCharacter.h"
#endif
#define MYRPG_MyRPGCharacter_generated_h

#define MyRPG_Source_MyRPG_MyRPGCharacter_h_16_SPARSE_DATA
#define MyRPG_Source_MyRPG_MyRPGCharacter_h_16_RPC_WRAPPERS
#define MyRPG_Source_MyRPG_MyRPGCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MyRPG_Source_MyRPG_MyRPGCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyRPGCharacter(); \
	friend struct Z_Construct_UClass_AMyRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyRPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyRPG"), NO_API) \
	DECLARE_SERIALIZER(AMyRPGCharacter)


#define MyRPG_Source_MyRPG_MyRPGCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyRPGCharacter(); \
	friend struct Z_Construct_UClass_AMyRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyRPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyRPG"), NO_API) \
	DECLARE_SERIALIZER(AMyRPGCharacter)


#define MyRPG_Source_MyRPG_MyRPGCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyRPGCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyRPGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyRPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyRPGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyRPGCharacter(AMyRPGCharacter&&); \
	NO_API AMyRPGCharacter(const AMyRPGCharacter&); \
public:


#define MyRPG_Source_MyRPG_MyRPGCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyRPGCharacter(AMyRPGCharacter&&); \
	NO_API AMyRPGCharacter(const AMyRPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyRPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyRPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyRPGCharacter)


#define MyRPG_Source_MyRPG_MyRPGCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyRPGCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyRPGCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__sword() { return STRUCT_OFFSET(AMyRPGCharacter, sword); } \
	FORCEINLINE static uint32 __PPO__shield() { return STRUCT_OFFSET(AMyRPGCharacter, shield); }


#define MyRPG_Source_MyRPG_MyRPGCharacter_h_13_PROLOG
#define MyRPG_Source_MyRPG_MyRPGCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyRPG_Source_MyRPG_MyRPGCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	MyRPG_Source_MyRPG_MyRPGCharacter_h_16_SPARSE_DATA \
	MyRPG_Source_MyRPG_MyRPGCharacter_h_16_RPC_WRAPPERS \
	MyRPG_Source_MyRPG_MyRPGCharacter_h_16_INCLASS \
	MyRPG_Source_MyRPG_MyRPGCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyRPG_Source_MyRPG_MyRPGCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyRPG_Source_MyRPG_MyRPGCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	MyRPG_Source_MyRPG_MyRPGCharacter_h_16_SPARSE_DATA \
	MyRPG_Source_MyRPG_MyRPGCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyRPG_Source_MyRPG_MyRPGCharacter_h_16_INCLASS_NO_PURE_DECLS \
	MyRPG_Source_MyRPG_MyRPGCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYRPG_API UClass* StaticClass<class AMyRPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyRPG_Source_MyRPG_MyRPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
