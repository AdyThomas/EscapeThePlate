// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/RedOnion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedOnion() {}
// Cross Module References
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_ARedOnion_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_ARedOnion();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientBaseClass();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
// End Cross Module References
	void ARedOnion::StaticRegisterNativesARedOnion()
	{
	}
	UClass* Z_Construct_UClass_ARedOnion_NoRegister()
	{
		return ARedOnion::StaticClass();
	}
	struct Z_Construct_UClass_ARedOnion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARedOnion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIngredientBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARedOnion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the red onion playable character, with a wrapper and the ability to not get contaminated\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RedOnion.h" },
		{ "ModuleRelativePath", "RedOnion.h" },
		{ "ToolTip", "Represents the red onion playable character, with a wrapper and the ability to not get contaminated" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARedOnion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARedOnion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARedOnion_Statics::ClassParams = {
		&ARedOnion::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARedOnion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARedOnion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARedOnion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARedOnion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARedOnion, 3528360764);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<ARedOnion>()
	{
		return ARedOnion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARedOnion(Z_Construct_UClass_ARedOnion, &ARedOnion::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("ARedOnion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARedOnion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
