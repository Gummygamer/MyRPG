// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYRPG_Sword_generated_h
#error "Sword.generated.h already included, missing '#pragma once' in Sword.h"
#endif
#define MYRPG_Sword_generated_h

#define MyRPG_Source_MyRPG_Sword_h_17_SPARSE_DATA
#define MyRPG_Source_MyRPG_Sword_h_17_RPC_WRAPPERS
#define MyRPG_Source_MyRPG_Sword_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define MyRPG_Source_MyRPG_Sword_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASword(); \
	friend struct Z_Construct_UClass_ASword_Statics; \
public: \
	DECLARE_CLASS(ASword, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyRPG"), NO_API) \
	DECLARE_SERIALIZER(ASword)


#define MyRPG_Source_MyRPG_Sword_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASword(); \
	friend struct Z_Construct_UClass_ASword_Statics; \
public: \
	DECLARE_CLASS(ASword, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyRPG"), NO_API) \
	DECLARE_SERIALIZER(ASword)


#define MyRPG_Source_MyRPG_Sword_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASword(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASword) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASword); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASword); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASword(ASword&&); \
	NO_API ASword(const ASword&); \
public:


#define MyRPG_Source_MyRPG_Sword_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASword(ASword&&); \
	NO_API ASword(const ASword&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASword); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASword); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASword)


#define MyRPG_Source_MyRPG_Sword_h_17_PRIVATE_PROPERTY_OFFSET
#define MyRPG_Source_MyRPG_Sword_h_14_PROLOG
#define MyRPG_Source_MyRPG_Sword_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyRPG_Source_MyRPG_Sword_h_17_PRIVATE_PROPERTY_OFFSET \
	MyRPG_Source_MyRPG_Sword_h_17_SPARSE_DATA \
	MyRPG_Source_MyRPG_Sword_h_17_RPC_WRAPPERS \
	MyRPG_Source_MyRPG_Sword_h_17_INCLASS \
	MyRPG_Source_MyRPG_Sword_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyRPG_Source_MyRPG_Sword_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyRPG_Source_MyRPG_Sword_h_17_PRIVATE_PROPERTY_OFFSET \
	MyRPG_Source_MyRPG_Sword_h_17_SPARSE_DATA \
	MyRPG_Source_MyRPG_Sword_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MyRPG_Source_MyRPG_Sword_h_17_INCLASS_NO_PURE_DECLS \
	MyRPG_Source_MyRPG_Sword_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYRPG_API UClass* StaticClass<class ASword>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyRPG_Source_MyRPG_Sword_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
