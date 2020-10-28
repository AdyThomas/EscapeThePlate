// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/IngredientBaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIngredientBaseCharacter() {}
// Cross Module References
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientBaseCharacter_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AIngredientBaseCharacter::execIsIngredientUsable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIngredientUsable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIngredientBaseCharacter::execSaveThisIngredient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveThisIngredient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIngredientBaseCharacter::execKillThisIngredient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillThisIngredient();
		P_NATIVE_END;
	}
	void AIngredientBaseCharacter::StaticRegisterNativesAIngredientBaseCharacter()
	{
		UClass* Class = AIngredientBaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsIngredientUsable", &AIngredientBaseCharacter::execIsIngredientUsable },
			{ "KillThisIngredient", &AIngredientBaseCharacter::execKillThisIngredient },
			{ "SaveThisIngredient", &AIngredientBaseCharacter::execSaveThisIngredient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics
	{
		struct IngredientBaseCharacter_eventIsIngredientUsable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IngredientBaseCharacter_eventIsIngredientUsable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IngredientBaseCharacter_eventIsIngredientUsable_Parms), &Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIngredientBaseCharacter, nullptr, "IsIngredientUsable", nullptr, nullptr, sizeof(IngredientBaseCharacter_eventIsIngredientUsable_Parms), Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIngredientBaseCharacter_KillThisIngredient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIngredientBaseCharacter_KillThisIngredient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIngredientBaseCharacter_KillThisIngredient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIngredientBaseCharacter, nullptr, "KillThisIngredient", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIngredientBaseCharacter_KillThisIngredient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIngredientBaseCharacter_KillThisIngredient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIngredientBaseCharacter_KillThisIngredient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIngredientBaseCharacter_KillThisIngredient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIngredientBaseCharacter_SaveThisIngredient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIngredientBaseCharacter_SaveThisIngredient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIngredientBaseCharacter_SaveThisIngredient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIngredientBaseCharacter, nullptr, "SaveThisIngredient", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIngredientBaseCharacter_SaveThisIngredient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIngredientBaseCharacter_SaveThisIngredient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIngredientBaseCharacter_SaveThisIngredient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIngredientBaseCharacter_SaveThisIngredient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AIngredientBaseCharacter_NoRegister()
	{
		return AIngredientBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AIngredientBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSafe_MetaData[];
#endif
		static void NewProp_bIsSafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSafe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInContaminationZone_MetaData[];
#endif
		static void NewProp_bIsInContaminationZone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInContaminationZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContaminationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ContaminationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContaminationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ContaminationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiltSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiltSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIngredientBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AIngredientBaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIngredientBaseCharacter_IsIngredientUsable, "IsIngredientUsable" }, // 2689368306
		{ &Z_Construct_UFunction_AIngredientBaseCharacter_KillThisIngredient, "KillThisIngredient" }, // 2852034930
		{ &Z_Construct_UFunction_AIngredientBaseCharacter_SaveThisIngredient, "SaveThisIngredient" }, // 3326321808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredientBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "IngredientBaseCharacter.h" },
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIngredientBaseCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// The spring attaching the camera to the pawn\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
		{ "ToolTip", "The spring attaching the camera to the pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIngredientBaseCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsSafe_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsSafe_SetBit(void* Obj)
	{
		((AIngredientBaseCharacter*)Obj)->bIsSafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsSafe = { "bIsSafe", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIngredientBaseCharacter), &Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsSafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsSafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsSafe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsDead_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((AIngredientBaseCharacter*)Obj)->bIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIngredientBaseCharacter), &Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsInContaminationZone_MetaData[] = {
		{ "Category", "IngredientBaseCharacter" },
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsInContaminationZone_SetBit(void* Obj)
	{
		((AIngredientBaseCharacter*)Obj)->bIsInContaminationZone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsInContaminationZone = { "bIsInContaminationZone", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIngredientBaseCharacter), &Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsInContaminationZone_SetBit, METADATA_PARAMS(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsInContaminationZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsInContaminationZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_ContaminationRate_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_ContaminationRate = { "ContaminationRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIngredientBaseCharacter, ContaminationRate), METADATA_PARAMS(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_ContaminationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_ContaminationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_ContaminationLevel_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_ContaminationLevel = { "ContaminationLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIngredientBaseCharacter, ContaminationLevel), METADATA_PARAMS(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_ContaminationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_ContaminationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_TiltSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_TiltSpeed = { "TiltSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIngredientBaseCharacter, TiltSpeed), METADATA_PARAMS(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_TiltSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_TiltSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIngredientBaseCharacter, TurnSpeed), METADATA_PARAMS(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_TurnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_TurnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Movement speed values\n" },
		{ "ModuleRelativePath", "IngredientBaseCharacter.h" },
		{ "ToolTip", "Movement speed values" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIngredientBaseCharacter, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_MoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIngredientBaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsSafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_bIsInContaminationZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_ContaminationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_ContaminationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_TiltSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_TurnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIngredientBaseCharacter_Statics::NewProp_MoveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIngredientBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIngredientBaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIngredientBaseCharacter_Statics::ClassParams = {
		&AIngredientBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AIngredientBaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AIngredientBaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIngredientBaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredientBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIngredientBaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIngredientBaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIngredientBaseCharacter, 695144054);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<AIngredientBaseCharacter>()
	{
		return AIngredientBaseCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIngredientBaseCharacter(Z_Construct_UClass_AIngredientBaseCharacter, &AIngredientBaseCharacter::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("AIngredientBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIngredientBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
