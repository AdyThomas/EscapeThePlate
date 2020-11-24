// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/SalmonCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSalmonCharacter() {}
// Cross Module References
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_ASalmonCharacter_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_ASalmonCharacter();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	static FName NAME_ASalmonCharacter_OnAbilityPerformed = FName(TEXT("OnAbilityPerformed"));
	void ASalmonCharacter::OnAbilityPerformed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASalmonCharacter_OnAbilityPerformed),NULL);
	}
	void ASalmonCharacter::StaticRegisterNativesASalmonCharacter()
	{
	}
	struct Z_Construct_UFunction_ASalmonCharacter_OnAbilityPerformed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASalmonCharacter_OnAbilityPerformed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SalmonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASalmonCharacter_OnAbilityPerformed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASalmonCharacter, nullptr, "OnAbilityPerformed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASalmonCharacter_OnAbilityPerformed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASalmonCharacter_OnAbilityPerformed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASalmonCharacter_OnAbilityPerformed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASalmonCharacter_OnAbilityPerformed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASalmonCharacter_NoRegister()
	{
		return ASalmonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASalmonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySecondSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySecondSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSneaking_MetaData[];
#endif
		static void NewProp_bIsSneaking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSneaking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASalmonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIngredientBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASalmonCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASalmonCharacter_OnAbilityPerformed, "OnAbilityPerformed" }, // 829296286
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASalmonCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SalmonCharacter.h" },
		{ "ModuleRelativePath", "SalmonCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASalmonCharacter_Statics::NewProp_AbilitySecondSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "SalmonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASalmonCharacter_Statics::NewProp_AbilitySecondSound = { "AbilitySecondSound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASalmonCharacter, AbilitySecondSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASalmonCharacter_Statics::NewProp_AbilitySecondSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASalmonCharacter_Statics::NewProp_AbilitySecondSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASalmonCharacter_Statics::NewProp_bIsSneaking_MetaData[] = {
		{ "Category", "SalmonCharacter" },
		{ "ModuleRelativePath", "SalmonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASalmonCharacter_Statics::NewProp_bIsSneaking_SetBit(void* Obj)
	{
		((ASalmonCharacter*)Obj)->bIsSneaking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASalmonCharacter_Statics::NewProp_bIsSneaking = { "bIsSneaking", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASalmonCharacter), &Z_Construct_UClass_ASalmonCharacter_Statics::NewProp_bIsSneaking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASalmonCharacter_Statics::NewProp_bIsSneaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASalmonCharacter_Statics::NewProp_bIsSneaking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASalmonCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASalmonCharacter_Statics::NewProp_AbilitySecondSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASalmonCharacter_Statics::NewProp_bIsSneaking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASalmonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASalmonCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASalmonCharacter_Statics::ClassParams = {
		&ASalmonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASalmonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASalmonCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASalmonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASalmonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASalmonCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASalmonCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASalmonCharacter, 1346749079);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<ASalmonCharacter>()
	{
		return ASalmonCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASalmonCharacter(Z_Construct_UClass_ASalmonCharacter, &ASalmonCharacter::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("ASalmonCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASalmonCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
