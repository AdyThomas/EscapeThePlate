// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/TofuCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTofuCharacter() {}
// Cross Module References
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_ATofuCharacter_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_ATofuCharacter();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void ATofuCharacter::StaticRegisterNativesATofuCharacter()
	{
	}
	UClass* Z_Construct_UClass_ATofuCharacter_NoRegister()
	{
		return ATofuCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATofuCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JumpCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySecondSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySecondSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATofuCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIngredientBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATofuCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TofuCharacter.h" },
		{ "ModuleRelativePath", "TofuCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATofuCharacter_Statics::NewProp_JumpCount_MetaData[] = {
		{ "Category", "TofuCharacter" },
		{ "ModuleRelativePath", "TofuCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATofuCharacter_Statics::NewProp_JumpCount = { "JumpCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATofuCharacter, JumpCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATofuCharacter_Statics::NewProp_JumpCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATofuCharacter_Statics::NewProp_JumpCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATofuCharacter_Statics::NewProp_AbilitySecondSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "TofuCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATofuCharacter_Statics::NewProp_AbilitySecondSound = { "AbilitySecondSound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATofuCharacter, AbilitySecondSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATofuCharacter_Statics::NewProp_AbilitySecondSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATofuCharacter_Statics::NewProp_AbilitySecondSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATofuCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATofuCharacter_Statics::NewProp_JumpCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATofuCharacter_Statics::NewProp_AbilitySecondSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATofuCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATofuCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATofuCharacter_Statics::ClassParams = {
		&ATofuCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATofuCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATofuCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATofuCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATofuCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATofuCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATofuCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATofuCharacter, 2097267270);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<ATofuCharacter>()
	{
		return ATofuCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATofuCharacter(Z_Construct_UClass_ATofuCharacter, &ATofuCharacter::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("ATofuCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATofuCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
