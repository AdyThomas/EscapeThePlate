// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/EscapeThePlateSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeThePlateSaveGame() {}
// Cross Module References
	ESCAPETHEPLATE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSaveData();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_UEscapeThePlateSaveGame_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_UEscapeThePlateSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
// End Cross Module References
class UScriptStruct* FLevelSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ESCAPETHEPLATE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSaveData, Z_Construct_UPackage__Script_EscapeThePlate(), TEXT("LevelSaveData"), sizeof(FLevelSaveData), Get_Z_Construct_UScriptStruct_FLevelSaveData_Hash());
	}
	return Singleton;
}
template<> ESCAPETHEPLATE_API UScriptStruct* StaticStruct<FLevelSaveData>()
{
	return FLevelSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSaveData(FLevelSaveData::StaticStruct, TEXT("/Script/EscapeThePlate"), TEXT("LevelSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_EscapeThePlate_StaticRegisterNativesFLevelSaveData
{
	FScriptStruct_EscapeThePlate_StaticRegisterNativesFLevelSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSaveData")),new UScriptStruct::TCppStructOps<FLevelSaveData>);
	}
} ScriptStruct_EscapeThePlate_StaticRegisterNativesFLevelSaveData;
	struct Z_Construct_UScriptStruct_FLevelSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeCompleted_MetaData[];
#endif
		static void NewProp_ChallengeCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChallengeCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecordTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumStarsEarned_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumStarsEarned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "EscapeThePlateSaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_ChallengeCompleted_MetaData[] = {
		{ "Category", "LevelSaveData" },
		{ "ModuleRelativePath", "EscapeThePlateSaveGame.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_ChallengeCompleted_SetBit(void* Obj)
	{
		((FLevelSaveData*)Obj)->ChallengeCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_ChallengeCompleted = { "ChallengeCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSaveData), &Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_ChallengeCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_ChallengeCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_ChallengeCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_RecordTime_MetaData[] = {
		{ "Category", "LevelSaveData" },
		{ "ModuleRelativePath", "EscapeThePlateSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_RecordTime = { "RecordTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSaveData, RecordTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_RecordTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_RecordTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_NumStarsEarned_MetaData[] = {
		{ "Category", "LevelSaveData" },
		{ "ModuleRelativePath", "EscapeThePlateSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_NumStarsEarned = { "NumStarsEarned", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSaveData, NumStarsEarned), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_NumStarsEarned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_NumStarsEarned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_LevelName_MetaData[] = {
		{ "Category", "LevelSaveData" },
		{ "ModuleRelativePath", "EscapeThePlateSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSaveData, LevelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_LevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_ChallengeCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_RecordTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_NumStarsEarned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSaveData_Statics::NewProp_LevelName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
		nullptr,
		&NewStructOps,
		"LevelSaveData",
		sizeof(FLevelSaveData),
		alignof(FLevelSaveData),
		Z_Construct_UScriptStruct_FLevelSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EscapeThePlate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSaveData"), sizeof(FLevelSaveData), Get_Z_Construct_UScriptStruct_FLevelSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSaveData_Hash() { return 1863753774U; }
	void UEscapeThePlateSaveGame::StaticRegisterNativesUEscapeThePlateSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UEscapeThePlateSaveGame_NoRegister()
	{
		return UEscapeThePlateSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UEscapeThePlateSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelSaves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelSaves_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EscapeThePlateSaveGame.h" },
		{ "ModuleRelativePath", "EscapeThePlateSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::NewProp_LevelSaves_MetaData[] = {
		{ "Category", "EscapeThePlateSaveGame" },
		{ "ModuleRelativePath", "EscapeThePlateSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::NewProp_LevelSaves = { "LevelSaves", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscapeThePlateSaveGame, LevelSaves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::NewProp_LevelSaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::NewProp_LevelSaves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::NewProp_LevelSaves_Inner = { "LevelSaves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLevelSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::NewProp_LevelSaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::NewProp_LevelSaves_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEscapeThePlateSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::ClassParams = {
		&UEscapeThePlateSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEscapeThePlateSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEscapeThePlateSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEscapeThePlateSaveGame, 3778104182);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<UEscapeThePlateSaveGame>()
	{
		return UEscapeThePlateSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEscapeThePlateSaveGame(Z_Construct_UClass_UEscapeThePlateSaveGame, &UEscapeThePlateSaveGame::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("UEscapeThePlateSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEscapeThePlateSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
