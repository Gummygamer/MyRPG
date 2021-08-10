// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyRPG/MyRPGGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyRPGGameMode() {}
// Cross Module References
	MYRPG_API UClass* Z_Construct_UClass_AMyRPGGameMode_NoRegister();
	MYRPG_API UClass* Z_Construct_UClass_AMyRPGGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyRPG();
// End Cross Module References
	void AMyRPGGameMode::StaticRegisterNativesAMyRPGGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyRPGGameMode_NoRegister()
	{
		return AMyRPGGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyRPGGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyRPGGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyRPG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRPGGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "MyRPGGameMode.h" },
		{ "ModuleRelativePath", "MyRPGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyRPGGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyRPGGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyRPGGameMode_Statics::ClassParams = {
		&AMyRPGGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyRPGGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyRPGGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyRPGGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyRPGGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyRPGGameMode, 1007542188);
	template<> MYRPG_API UClass* StaticClass<AMyRPGGameMode>()
	{
		return AMyRPGGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyRPGGameMode(Z_Construct_UClass_AMyRPGGameMode, &AMyRPGGameMode::StaticClass, TEXT("/Script/MyRPG"), TEXT("AMyRPGGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyRPGGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
