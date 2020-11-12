// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/ChiliPepperCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChiliPepperCharacter() {}
// Cross Module References
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AChiliPepperCharacter_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AChiliPepperCharacter();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
// End Cross Module References
	void AChiliPepperCharacter::StaticRegisterNativesAChiliPepperCharacter()
	{
	}
	UClass* Z_Construct_UClass_AChiliPepperCharacter_NoRegister()
	{
		return AChiliPepperCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AChiliPepperCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChiliPepperCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIngredientBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChiliPepperCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ChiliPepperCharacter.h" },
		{ "ModuleRelativePath", "ChiliPepperCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChiliPepperCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChiliPepperCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChiliPepperCharacter_Statics::ClassParams = {
		&AChiliPepperCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChiliPepperCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChiliPepperCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChiliPepperCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChiliPepperCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChiliPepperCharacter, 3515750307);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<AChiliPepperCharacter>()
	{
		return AChiliPepperCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChiliPepperCharacter(Z_Construct_UClass_AChiliPepperCharacter, &AChiliPepperCharacter::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("AChiliPepperCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChiliPepperCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
