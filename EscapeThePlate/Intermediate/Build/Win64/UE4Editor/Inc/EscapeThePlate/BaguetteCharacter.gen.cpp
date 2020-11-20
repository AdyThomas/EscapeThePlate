// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/BaguetteCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaguetteCharacter() {}
// Cross Module References
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_ABaguetteCharacter_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_ABaguetteCharacter();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
// End Cross Module References
	void ABaguetteCharacter::StaticRegisterNativesABaguetteCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABaguetteCharacter_NoRegister()
	{
		return ABaguetteCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaguetteCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaguetteCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIngredientBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaguetteCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaguetteCharacter.h" },
		{ "ModuleRelativePath", "BaguetteCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaguetteCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaguetteCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaguetteCharacter_Statics::ClassParams = {
		&ABaguetteCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABaguetteCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaguetteCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaguetteCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaguetteCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaguetteCharacter, 3630432115);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<ABaguetteCharacter>()
	{
		return ABaguetteCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaguetteCharacter(Z_Construct_UClass_ABaguetteCharacter, &ABaguetteCharacter::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("ABaguetteCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaguetteCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
