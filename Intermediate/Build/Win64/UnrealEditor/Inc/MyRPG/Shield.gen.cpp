// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyRPG/Shield.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShield() {}
// Cross Module References
	MYRPG_API UClass* Z_Construct_UClass_AShield_NoRegister();
	MYRPG_API UClass* Z_Construct_UClass_AShield();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyRPG();
// End Cross Module References
	void AShield::StaticRegisterNativesAShield()
	{
	}
	UClass* Z_Construct_UClass_AShield_NoRegister()
	{
		return AShield::StaticClass();
	}
	struct Z_Construct_UClass_AShield_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyRPG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShield_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shield.h" },
		{ "ModuleRelativePath", "Shield.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShield>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShield_Statics::ClassParams = {
		&AShield::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShield_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShield()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShield_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShield, 272611647);
	template<> MYRPG_API UClass* StaticClass<AShield>()
	{
		return AShield::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShield(Z_Construct_UClass_AShield, &AShield::StaticClass, TEXT("/Script/MyRPG"), TEXT("AShield"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShield);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
