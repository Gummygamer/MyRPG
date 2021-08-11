// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyRPG/Sword.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSword() {}
// Cross Module References
	MYRPG_API UClass* Z_Construct_UClass_ASword_NoRegister();
	MYRPG_API UClass* Z_Construct_UClass_ASword();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyRPG();
// End Cross Module References
	void ASword::StaticRegisterNativesASword()
	{
	}
	UClass* Z_Construct_UClass_ASword_NoRegister()
	{
		return ASword::StaticClass();
	}
	struct Z_Construct_UClass_ASword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyRPG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASword_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sword.h" },
		{ "ModuleRelativePath", "Sword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASword>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASword_Statics::ClassParams = {
		&ASword::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASword_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASword()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASword_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASword, 2320556875);
	template<> MYRPG_API UClass* StaticClass<ASword>()
	{
		return ASword::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASword(Z_Construct_UClass_ASword, &ASword::StaticClass, TEXT("/Script/MyRPG"), TEXT("ASword"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASword);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
