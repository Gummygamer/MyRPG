// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyRPG/Rat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRat() {}
// Cross Module References
	MYRPG_API UClass* Z_Construct_UClass_ARat_NoRegister();
	MYRPG_API UClass* Z_Construct_UClass_ARat();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyRPG();
// End Cross Module References
	void ARat::StaticRegisterNativesARat()
	{
	}
	UClass* Z_Construct_UClass_ARat_NoRegister()
	{
		return ARat::StaticClass();
	}
	struct Z_Construct_UClass_ARat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyRPG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARat_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Rat.h" },
		{ "ModuleRelativePath", "Rat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARat_Statics::ClassParams = {
		&ARat::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ARat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARat, 24054380);
	template<> MYRPG_API UClass* StaticClass<ARat>()
	{
		return ARat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARat(Z_Construct_UClass_ARat, &ARat::StaticClass, TEXT("/Script/MyRPG"), TEXT("ARat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
