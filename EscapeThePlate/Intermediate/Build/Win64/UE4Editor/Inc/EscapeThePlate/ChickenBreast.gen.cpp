// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/ChickenBreast.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChickenBreast() {}
// Cross Module References
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AChickenBreast_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AChickenBreast();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientBaseClass();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
// End Cross Module References
	void AChickenBreast::StaticRegisterNativesAChickenBreast()
	{
	}
	UClass* Z_Construct_UClass_AChickenBreast_NoRegister()
	{
		return AChickenBreast::StaticClass();
	}
	struct Z_Construct_UClass_AChickenBreast_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChickenBreast_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIngredientBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChickenBreast_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ChickenBreast.h" },
		{ "ModuleRelativePath", "ChickenBreast.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChickenBreast_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChickenBreast>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChickenBreast_Statics::ClassParams = {
		&AChickenBreast::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChickenBreast_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChickenBreast_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChickenBreast()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChickenBreast_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChickenBreast, 447222917);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<AChickenBreast>()
	{
		return AChickenBreast::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChickenBreast(Z_Construct_UClass_AChickenBreast, &AChickenBreast::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("AChickenBreast"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChickenBreast);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
