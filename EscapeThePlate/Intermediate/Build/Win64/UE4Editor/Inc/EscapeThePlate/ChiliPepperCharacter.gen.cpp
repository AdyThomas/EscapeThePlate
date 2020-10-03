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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCooldownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbilityCooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbilityCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChiliPepperCharacter_Statics::NewProp_AbilityCooldownTimer_MetaData[] = {
		{ "Comment", "// The timer and flag used to trigger the ability\n" },
		{ "ModuleRelativePath", "ChiliPepperCharacter.h" },
		{ "ToolTip", "The timer and flag used to trigger the ability" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChiliPepperCharacter_Statics::NewProp_AbilityCooldownTimer = { "AbilityCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChiliPepperCharacter, AbilityCooldownTimer), METADATA_PARAMS(Z_Construct_UClass_AChiliPepperCharacter_Statics::NewProp_AbilityCooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChiliPepperCharacter_Statics::NewProp_AbilityCooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChiliPepperCharacter_Statics::NewProp_AbilityCooldown_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "// The cooldown of the jump ability in seconds\n" },
		{ "ModuleRelativePath", "ChiliPepperCharacter.h" },
		{ "ToolTip", "The cooldown of the jump ability in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChiliPepperCharacter_Statics::NewProp_AbilityCooldown = { "AbilityCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChiliPepperCharacter, AbilityCooldown), METADATA_PARAMS(Z_Construct_UClass_AChiliPepperCharacter_Statics::NewProp_AbilityCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChiliPepperCharacter_Statics::NewProp_AbilityCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChiliPepperCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChiliPepperCharacter_Statics::NewProp_AbilityCooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChiliPepperCharacter_Statics::NewProp_AbilityCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChiliPepperCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChiliPepperCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChiliPepperCharacter_Statics::ClassParams = {
		&AChiliPepperCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChiliPepperCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChiliPepperCharacter_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AChiliPepperCharacter, 2872080152);
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
