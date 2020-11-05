// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/EscapeThePlateGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeThePlateGameInstance() {}
// Cross Module References
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_UEscapeThePlateGameInstance_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_UEscapeThePlateGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
	ESCAPETHEPLATE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSaveData();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_UEscapeThePlateSaveGame_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEscapeThePlateGameInstance::execGetLevelRecords)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLevelSaveData*)Z_Param__Result=P_THIS->GetLevelRecords(Z_Param_LevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEscapeThePlateGameInstance::execAddDataToSave)
	{
		P_GET_STRUCT(FLevelSaveData,Z_Param_NewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDataToSave(Z_Param_NewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEscapeThePlateGameInstance::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame();
		P_NATIVE_END;
	}
	void UEscapeThePlateGameInstance::StaticRegisterNativesUEscapeThePlateGameInstance()
	{
		UClass* Class = UEscapeThePlateGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDataToSave", &UEscapeThePlateGameInstance::execAddDataToSave },
			{ "GetLevelRecords", &UEscapeThePlateGameInstance::execGetLevelRecords },
			{ "SaveGame", &UEscapeThePlateGameInstance::execSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave_Statics
	{
		struct EscapeThePlateGameInstance_eventAddDataToSave_Parms
		{
			FLevelSaveData NewData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeThePlateGameInstance_eventAddDataToSave_Parms, NewData), Z_Construct_UScriptStruct_FLevelSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave_Statics::NewProp_NewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeThePlateGameInstance, nullptr, "AddDataToSave", nullptr, nullptr, sizeof(EscapeThePlateGameInstance_eventAddDataToSave_Parms), Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics
	{
		struct EscapeThePlateGameInstance_eventGetLevelRecords_Parms
		{
			FString LevelName;
			FLevelSaveData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeThePlateGameInstance_eventGetLevelRecords_Parms, ReturnValue), Z_Construct_UScriptStruct_FLevelSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::NewProp_LevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeThePlateGameInstance_eventGetLevelRecords_Parms, LevelName), METADATA_PARAMS(Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::NewProp_LevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::NewProp_LevelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeThePlateGameInstance, nullptr, "GetLevelRecords", nullptr, nullptr, sizeof(EscapeThePlateGameInstance_eventGetLevelRecords_Parms), Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEscapeThePlateGameInstance_SaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeThePlateGameInstance_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeThePlateGameInstance_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeThePlateGameInstance, nullptr, "SaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeThePlateGameInstance_SaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeThePlateGameInstance_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeThePlateGameInstance_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEscapeThePlateGameInstance_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEscapeThePlateGameInstance_NoRegister()
	{
		return UEscapeThePlateGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEscapeThePlateGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSaveNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelSaveNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelSaveNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGameData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEscapeThePlateGameInstance_AddDataToSave, "AddDataToSave" }, // 1236200178
		{ &Z_Construct_UFunction_UEscapeThePlateGameInstance_GetLevelRecords, "GetLevelRecords" }, // 3734990860
		{ &Z_Construct_UFunction_UEscapeThePlateGameInstance_SaveGame, "SaveGame" }, // 1653708456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EscapeThePlateGameInstance.h" },
		{ "ModuleRelativePath", "EscapeThePlateGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "EscapeThePlateGameInstance" },
		{ "ModuleRelativePath", "EscapeThePlateGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscapeThePlateGameInstance, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_SaveSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelSaveNames_MetaData[] = {
		{ "Category", "EscapeThePlateGameInstance" },
		{ "ModuleRelativePath", "EscapeThePlateGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelSaveNames = { "LevelSaveNames", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscapeThePlateGameInstance, LevelSaveNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelSaveNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelSaveNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelSaveNames_Inner = { "LevelSaveNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelNames_MetaData[] = {
		{ "Category", "EscapeThePlateGameInstance" },
		{ "ModuleRelativePath", "EscapeThePlateGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelNames = { "LevelNames", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscapeThePlateGameInstance, LevelNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelNames_Inner = { "LevelNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_SaveGameData_MetaData[] = {
		{ "Category", "EscapeThePlateGameInstance" },
		{ "ModuleRelativePath", "EscapeThePlateGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscapeThePlateGameInstance, SaveGameData), Z_Construct_UClass_UEscapeThePlateSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_SaveGameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_SaveGameData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_SaveSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelSaveNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelSaveNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_LevelNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::NewProp_SaveGameData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEscapeThePlateGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::ClassParams = {
		&UEscapeThePlateGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEscapeThePlateGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEscapeThePlateGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEscapeThePlateGameInstance, 471181025);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<UEscapeThePlateGameInstance>()
	{
		return UEscapeThePlateGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEscapeThePlateGameInstance(Z_Construct_UClass_UEscapeThePlateGameInstance, &UEscapeThePlateGameInstance::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("UEscapeThePlateGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEscapeThePlateGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
