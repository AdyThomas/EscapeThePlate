// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/OctopusCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOctopusCharacter() {}
// Cross Module References
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AOctopusCharacter_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AOctopusCharacter();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_AOctopusCharacter_GrabObject = FName(TEXT("GrabObject"));
	void AOctopusCharacter::GrabObject()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOctopusCharacter_GrabObject),NULL);
	}
	void AOctopusCharacter::StaticRegisterNativesAOctopusCharacter()
	{
	}
	struct Z_Construct_UFunction_AOctopusCharacter_GrabObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOctopusCharacter_GrabObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OctopusCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOctopusCharacter_GrabObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOctopusCharacter, nullptr, "GrabObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOctopusCharacter_GrabObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOctopusCharacter_GrabObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOctopusCharacter_GrabObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOctopusCharacter_GrabObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOctopusCharacter_NoRegister()
	{
		return AOctopusCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AOctopusCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOctopusCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIngredientBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOctopusCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOctopusCharacter_GrabObject, "GrabObject" }, // 1102293628
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOctopusCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OctopusCharacter.h" },
		{ "ModuleRelativePath", "OctopusCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOctopusCharacter_Statics::NewProp_OverlappedObject_MetaData[] = {
		{ "Category", "OctopusCharacter" },
		{ "ModuleRelativePath", "OctopusCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOctopusCharacter_Statics::NewProp_OverlappedObject = { "OverlappedObject", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOctopusCharacter, OverlappedObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOctopusCharacter_Statics::NewProp_OverlappedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOctopusCharacter_Statics::NewProp_OverlappedObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOctopusCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOctopusCharacter_Statics::NewProp_OverlappedObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOctopusCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOctopusCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOctopusCharacter_Statics::ClassParams = {
		&AOctopusCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOctopusCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOctopusCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOctopusCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOctopusCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOctopusCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOctopusCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOctopusCharacter, 3687273672);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<AOctopusCharacter>()
	{
		return AOctopusCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOctopusCharacter(Z_Construct_UClass_AOctopusCharacter, &AOctopusCharacter::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("AOctopusCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOctopusCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
