// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/ChiliPepper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChiliPepper() {}
// Cross Module References
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AChiliPepper_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AChiliPepper();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientBaseClass();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
// End Cross Module References
	void AChiliPepper::StaticRegisterNativesAChiliPepper()
	{
	}
	UClass* Z_Construct_UClass_AChiliPepper_NoRegister()
	{
		return AChiliPepper::StaticClass();
	}
	struct Z_Construct_UClass_AChiliPepper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChiliPepper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIngredientBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChiliPepper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ChiliPepper.h" },
		{ "ModuleRelativePath", "ChiliPepper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChiliPepper_Statics::NewProp_LaunchSpeed_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Ability defined variables, TODO: Put in baseclass?\n" },
		{ "ModuleRelativePath", "ChiliPepper.h" },
		{ "ToolTip", "Ability defined variables, TODO: Put in baseclass?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChiliPepper_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChiliPepper, LaunchSpeed), METADATA_PARAMS(Z_Construct_UClass_AChiliPepper_Statics::NewProp_LaunchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChiliPepper_Statics::NewProp_LaunchSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChiliPepper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChiliPepper_Statics::NewProp_LaunchSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChiliPepper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChiliPepper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChiliPepper_Statics::ClassParams = {
		&AChiliPepper::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChiliPepper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChiliPepper_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChiliPepper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChiliPepper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChiliPepper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChiliPepper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChiliPepper, 3666238810);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<AChiliPepper>()
	{
		return AChiliPepper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChiliPepper(Z_Construct_UClass_AChiliPepper, &AChiliPepper::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("AChiliPepper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChiliPepper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
