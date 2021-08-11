// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYRPG_Rat_generated_h
#error "Rat.generated.h already included, missing '#pragma once' in Rat.h"
#endif
#define MYRPG_Rat_generated_h

#define MyRPG_Source_MyRPG_Rat_h_19_SPARSE_DATA
#define MyRPG_Source_MyRPG_Rat_h_19_RPC_WRAPPERS
#define MyRPG_Source_MyRPG_Rat_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define MyRPG_Source_MyRPG_Rat_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARat(); \
	friend struct Z_Construct_UClass_ARat_Statics; \
public: \
	DECLARE_CLASS(ARat, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyRPG"), NO_API) \
	DECLARE_SERIALIZER(ARat)


#define MyRPG_Source_MyRPG_Rat_h_19_INCLASS \
private: \
	static void StaticRegisterNativesARat(); \
	friend struct Z_Construct_UClass_ARat_Statics; \
public: \
	DECLARE_CLASS(ARat, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyRPG"), NO_API) \
	DECLARE_SERIALIZER(ARat)


#define MyRPG_Source_MyRPG_Rat_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARat(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARat(ARat&&); \
	NO_API ARat(const ARat&); \
public:


#define MyRPG_Source_MyRPG_Rat_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARat(ARat&&); \
	NO_API ARat(const ARat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARat)


#define MyRPG_Source_MyRPG_Rat_h_19_PRIVATE_PROPERTY_OFFSET
#define MyRPG_Source_MyRPG_Rat_h_16_PROLOG
#define MyRPG_Source_MyRPG_Rat_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyRPG_Source_MyRPG_Rat_h_19_PRIVATE_PROPERTY_OFFSET \
	MyRPG_Source_MyRPG_Rat_h_19_SPARSE_DATA \
	MyRPG_Source_MyRPG_Rat_h_19_RPC_WRAPPERS \
	MyRPG_Source_MyRPG_Rat_h_19_INCLASS \
	MyRPG_Source_MyRPG_Rat_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyRPG_Source_MyRPG_Rat_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyRPG_Source_MyRPG_Rat_h_19_PRIVATE_PROPERTY_OFFSET \
	MyRPG_Source_MyRPG_Rat_h_19_SPARSE_DATA \
	MyRPG_Source_MyRPG_Rat_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MyRPG_Source_MyRPG_Rat_h_19_INCLASS_NO_PURE_DECLS \
	MyRPG_Source_MyRPG_Rat_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYRPG_API UClass* StaticClass<class ARat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyRPG_Source_MyRPG_Rat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
