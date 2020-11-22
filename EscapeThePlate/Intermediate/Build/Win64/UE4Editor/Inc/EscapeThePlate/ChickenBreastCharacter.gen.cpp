// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/ChickenBreastCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChickenBreastCharacter() {}
// Cross Module References
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AChickenBreastCharacter_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AChickenBreastCharacter();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
// End Cross Module References
	DEFINE_FUNCTION(AChickenBreastCharacter::execSetClimbing)
	{
		P_GET_UBOOL(Z_Param_CanClimb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClimbing(Z_Param_CanClimb);
		P_NATIVE_END;
	}
	void AChickenBreastCharacter::StaticRegisterNativesAChickenBreastCharacter()
	{
		UClass* Class = AChickenBreastCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetClimbing", &AChickenBreastCharacter::execSetClimbing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics
	{
		struct ChickenBreastCharacter_eventSetClimbing_Parms
		{
			bool CanClimb;
		};
		static void NewProp_CanClimb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanClimb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics::NewProp_CanClimb_SetBit(void* Obj)
	{
		((ChickenBreastCharacter_eventSetClimbing_Parms*)Obj)->CanClimb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics::NewProp_CanClimb = { "CanClimb", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChickenBreastCharacter_eventSetClimbing_Parms), &Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics::NewProp_CanClimb_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics::NewProp_CanClimb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChickenBreastCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChickenBreastCharacter, nullptr, "SetClimbing", nullptr, nullptr, sizeof(ChickenBreastCharacter_eventSetClimbing_Parms), Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChickenBreastCharacter_NoRegister()
	{
		return AChickenBreastCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AChickenBreastCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChickenBreastCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIngredientBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChickenBreastCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChickenBreastCharacter_SetClimbing, "SetClimbing" }, // 292945199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChickenBreastCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ChickenBreastCharacter.h" },
		{ "ModuleRelativePath", "ChickenBreastCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChickenBreastCharacter_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ChickenBreastCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AChickenBreastCharacter_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((AChickenBreastCharacter*)Obj)->bIsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChickenBreastCharacter_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChickenBreastCharacter), &Z_Construct_UClass_AChickenBreastCharacter_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChickenBreastCharacter_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChickenBreastCharacter_Statics::NewProp_bIsMoving_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChickenBreastCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChickenBreastCharacter_Statics::NewProp_bIsMoving,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChickenBreastCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChickenBreastCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChickenBreastCharacter_Statics::ClassParams = {
		&AChickenBreastCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChickenBreastCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChickenBreastCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChickenBreastCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChickenBreastCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChickenBreastCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChickenBreastCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChickenBreastCharacter, 3355972677);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<AChickenBreastCharacter>()
	{
		return AChickenBreastCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChickenBreastCharacter(Z_Construct_UClass_AChickenBreastCharacter, &AChickenBreastCharacter::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("AChickenBreastCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChickenBreastCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
