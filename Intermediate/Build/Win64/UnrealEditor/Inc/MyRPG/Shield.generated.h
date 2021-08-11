// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYRPG_Shield_generated_h
#error "Shield.generated.h already included, missing '#pragma once' in Shield.h"
#endif
#define MYRPG_Shield_generated_h

#define MyRPG_Source_MyRPG_Shield_h_16_SPARSE_DATA
#define MyRPG_Source_MyRPG_Shield_h_16_RPC_WRAPPERS
#define MyRPG_Source_MyRPG_Shield_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MyRPG_Source_MyRPG_Shield_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShield(); \
	friend struct Z_Construct_UClass_AShield_Statics; \
public: \
	DECLARE_CLASS(AShield, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyRPG"), NO_API) \
	DECLARE_SERIALIZER(AShield)


#define MyRPG_Source_MyRPG_Shield_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAShield(); \
	friend struct Z_Construct_UClass_AShield_Statics; \
public: \
	DECLARE_CLASS(AShield, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyRPG"), NO_API) \
	DECLARE_SERIALIZER(AShield)


#define MyRPG_Source_MyRPG_Shield_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShield(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShield) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShield); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShield); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShield(AShield&&); \
	NO_API AShield(const AShield&); \
public:


#define MyRPG_Source_MyRPG_Shield_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShield(AShield&&); \
	NO_API AShield(const AShield&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShield); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShield); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShield)


#define MyRPG_Source_MyRPG_Shield_h_16_PRIVATE_PROPERTY_OFFSET
#define MyRPG_Source_MyRPG_Shield_h_13_PROLOG
#define MyRPG_Source_MyRPG_Shield_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyRPG_Source_MyRPG_Shield_h_16_PRIVATE_PROPERTY_OFFSET \
	MyRPG_Source_MyRPG_Shield_h_16_SPARSE_DATA \
	MyRPG_Source_MyRPG_Shield_h_16_RPC_WRAPPERS \
	MyRPG_Source_MyRPG_Shield_h_16_INCLASS \
	MyRPG_Source_MyRPG_Shield_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyRPG_Source_MyRPG_Shield_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyRPG_Source_MyRPG_Shield_h_16_PRIVATE_PROPERTY_OFFSET \
	MyRPG_Source_MyRPG_Shield_h_16_SPARSE_DATA \
	MyRPG_Source_MyRPG_Shield_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyRPG_Source_MyRPG_Shield_h_16_INCLASS_NO_PURE_DECLS \
	MyRPG_Source_MyRPG_Shield_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYRPG_API UClass* StaticClass<class AShield>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyRPG_Source_MyRPG_Shield_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
