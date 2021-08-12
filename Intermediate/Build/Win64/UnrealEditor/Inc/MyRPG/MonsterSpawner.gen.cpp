// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyRPG/MonsterSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterSpawner() {}
// Cross Module References
	MYRPG_API UClass* Z_Construct_UClass_AMonsterSpawner_NoRegister();
	MYRPG_API UClass* Z_Construct_UClass_AMonsterSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyRPG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	void AMonsterSpawner::StaticRegisterNativesAMonsterSpawner()
	{
	}
	UClass* Z_Construct_UClass_AMonsterSpawner_NoRegister()
	{
		return AMonsterSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_monster_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_monster;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyRPG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonsterSpawner.h" },
		{ "ModuleRelativePath", "MonsterSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_monster_MetaData[] = {
		{ "Category", "MonsterSpawner" },
		{ "ModuleRelativePath", "MonsterSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_monster = { "monster", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterSpawner, monster), Z_Construct_UClass_ACharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_monster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_monster_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_amount_MetaData[] = {
		{ "Category", "MonsterSpawner" },
		{ "ModuleRelativePath", "MonsterSpawner.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterSpawner, amount), METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_amount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minX_MetaData[] = {
		{ "Category", "MonsterSpawner" },
		{ "ModuleRelativePath", "MonsterSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minX = { "minX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterSpawner, minX), METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxX_MetaData[] = {
		{ "Category", "MonsterSpawner" },
		{ "ModuleRelativePath", "MonsterSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxX = { "maxX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterSpawner, maxX), METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minY_MetaData[] = {
		{ "Category", "MonsterSpawner" },
		{ "ModuleRelativePath", "MonsterSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minY = { "minY", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterSpawner, minY), METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxY_MetaData[] = {
		{ "Category", "MonsterSpawner" },
		{ "ModuleRelativePath", "MonsterSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxY = { "maxY", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterSpawner, maxY), METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minZ_MetaData[] = {
		{ "Category", "MonsterSpawner" },
		{ "ModuleRelativePath", "MonsterSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minZ = { "minZ", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterSpawner, minZ), METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxZ_MetaData[] = {
		{ "Category", "MonsterSpawner" },
		{ "ModuleRelativePath", "MonsterSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxZ = { "maxZ", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterSpawner, maxZ), METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_offset_MetaData[] = {
		{ "Category", "MonsterSpawner" },
		{ "ModuleRelativePath", "MonsterSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterSpawner, offset), METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_monster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_minZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_maxZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawner_Statics::NewProp_offset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterSpawner_Statics::ClassParams = {
		&AMonsterSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMonsterSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterSpawner, 3920507711);
	template<> MYRPG_API UClass* StaticClass<AMonsterSpawner>()
	{
		return AMonsterSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterSpawner(Z_Construct_UClass_AMonsterSpawner, &AMonsterSpawner::StaticClass, TEXT("/Script/MyRPG"), TEXT("AMonsterSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
