// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeThePlate/EscapeThePlateGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeThePlateGameMode() {}
// Cross Module References
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AEscapeThePlateGameMode_NoRegister();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AEscapeThePlateGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_EscapeThePlate();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientDeathZone_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ESCAPETHEPLATE_API UClass* Z_Construct_UClass_AIngredientBaseCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AEscapeThePlateGameMode::execGetRecordedTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRecordedTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeThePlateGameMode::execRecordGameTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecordGameTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeThePlateGameMode::execPossessIngredient)
	{
		P_GET_OBJECT(AIngredientBaseCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PossessIngredient(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeThePlateGameMode::execDidPlayerWin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DidPlayerWin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeThePlateGameMode::execGetStarsEarned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetStarsEarned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeThePlateGameMode::execCheckGameOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckGameOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeThePlateGameMode::execSetupLevelData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelSaveName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewParTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupLevelData(Z_Param_LevelSaveName,Z_Param_NewParTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeThePlateGameMode::execGetClosestDeathZone)
	{
		P_GET_STRUCT(FVector,Z_Param_ActorLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AIngredientDeathZone**)Z_Param__Result=P_THIS->GetClosestDeathZone(Z_Param_ActorLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeThePlateGameMode::execAutoReposessCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoReposessCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeThePlateGameMode::execRegisterDeathZoneWithGame)
	{
		P_GET_OBJECT(AIngredientDeathZone,Z_Param_DeathZone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterDeathZoneWithGame(Z_Param_DeathZone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeThePlateGameMode::execRegisterCharacterWithGame)
	{
		P_GET_OBJECT(AIngredientBaseCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterCharacterWithGame(Z_Param_Character);
		P_NATIVE_END;
	}
	static FName NAME_AEscapeThePlateGameMode_CharacterPossessionChanged = FName(TEXT("CharacterPossessionChanged"));
	void AEscapeThePlateGameMode::CharacterPossessionChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEscapeThePlateGameMode_CharacterPossessionChanged),NULL);
	}
	static FName NAME_AEscapeThePlateGameMode_CharacterStatusChanged = FName(TEXT("CharacterStatusChanged"));
	void AEscapeThePlateGameMode::CharacterStatusChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEscapeThePlateGameMode_CharacterStatusChanged),NULL);
	}
	static FName NAME_AEscapeThePlateGameMode_GameOver = FName(TEXT("GameOver"));
	void AEscapeThePlateGameMode::GameOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEscapeThePlateGameMode_GameOver),NULL);
	}
	static FName NAME_AEscapeThePlateGameMode_PauseGame = FName(TEXT("PauseGame"));
	void AEscapeThePlateGameMode::PauseGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEscapeThePlateGameMode_PauseGame),NULL);
	}
	void AEscapeThePlateGameMode::StaticRegisterNativesAEscapeThePlateGameMode()
	{
		UClass* Class = AEscapeThePlateGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoReposessCharacter", &AEscapeThePlateGameMode::execAutoReposessCharacter },
			{ "CheckGameOver", &AEscapeThePlateGameMode::execCheckGameOver },
			{ "DidPlayerWin", &AEscapeThePlateGameMode::execDidPlayerWin },
			{ "GetClosestDeathZone", &AEscapeThePlateGameMode::execGetClosestDeathZone },
			{ "GetRecordedTime", &AEscapeThePlateGameMode::execGetRecordedTime },
			{ "GetStarsEarned", &AEscapeThePlateGameMode::execGetStarsEarned },
			{ "PossessIngredient", &AEscapeThePlateGameMode::execPossessIngredient },
			{ "RecordGameTime", &AEscapeThePlateGameMode::execRecordGameTime },
			{ "RegisterCharacterWithGame", &AEscapeThePlateGameMode::execRegisterCharacterWithGame },
			{ "RegisterDeathZoneWithGame", &AEscapeThePlateGameMode::execRegisterDeathZoneWithGame },
			{ "SetupLevelData", &AEscapeThePlateGameMode::execSetupLevelData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_AutoReposessCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_AutoReposessCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_AutoReposessCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "AutoReposessCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_AutoReposessCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_AutoReposessCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_AutoReposessCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_AutoReposessCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterPossessionChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterPossessionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterPossessionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "CharacterPossessionChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterPossessionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterPossessionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterPossessionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterPossessionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterStatusChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "CharacterStatusChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics
	{
		struct EscapeThePlateGameMode_eventCheckGameOver_Parms
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
	void Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EscapeThePlateGameMode_eventCheckGameOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeThePlateGameMode_eventCheckGameOver_Parms), &Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "CheckGameOver", nullptr, nullptr, sizeof(EscapeThePlateGameMode_eventCheckGameOver_Parms), Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics
	{
		struct EscapeThePlateGameMode_eventDidPlayerWin_Parms
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
	void Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EscapeThePlateGameMode_eventDidPlayerWin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeThePlateGameMode_eventDidPlayerWin_Parms), &Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "DidPlayerWin", nullptr, nullptr, sizeof(EscapeThePlateGameMode_eventDidPlayerWin_Parms), Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_GameOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "GameOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics
	{
		struct EscapeThePlateGameMode_eventGetClosestDeathZone_Parms
		{
			FVector ActorLocation;
			AIngredientDeathZone* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeThePlateGameMode_eventGetClosestDeathZone_Parms, ReturnValue), Z_Construct_UClass_AIngredientDeathZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeThePlateGameMode_eventGetClosestDeathZone_Parms, ActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics::NewProp_ActorLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "GetClosestDeathZone", nullptr, nullptr, sizeof(EscapeThePlateGameMode_eventGetClosestDeathZone_Parms), Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime_Statics
	{
		struct EscapeThePlateGameMode_eventGetRecordedTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeThePlateGameMode_eventGetRecordedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "GetRecordedTime", nullptr, nullptr, sizeof(EscapeThePlateGameMode_eventGetRecordedTime_Parms), Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned_Statics
	{
		struct EscapeThePlateGameMode_eventGetStarsEarned_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeThePlateGameMode_eventGetStarsEarned_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "GetStarsEarned", nullptr, nullptr, sizeof(EscapeThePlateGameMode_eventGetStarsEarned_Parms), Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_PauseGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_PauseGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_PauseGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "PauseGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_PauseGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_PauseGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_PauseGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_PauseGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient_Statics
	{
		struct EscapeThePlateGameMode_eventPossessIngredient_Parms
		{
			AIngredientBaseCharacter* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeThePlateGameMode_eventPossessIngredient_Parms, Character), Z_Construct_UClass_AIngredientBaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "PossessIngredient", nullptr, nullptr, sizeof(EscapeThePlateGameMode_eventPossessIngredient_Parms), Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_RecordGameTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_RecordGameTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_RecordGameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "RecordGameTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_RecordGameTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_RecordGameTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_RecordGameTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_RecordGameTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame_Statics
	{
		struct EscapeThePlateGameMode_eventRegisterCharacterWithGame_Parms
		{
			AIngredientBaseCharacter* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeThePlateGameMode_eventRegisterCharacterWithGame_Parms, Character), Z_Construct_UClass_AIngredientBaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "RegisterCharacterWithGame", nullptr, nullptr, sizeof(EscapeThePlateGameMode_eventRegisterCharacterWithGame_Parms), Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame_Statics
	{
		struct EscapeThePlateGameMode_eventRegisterDeathZoneWithGame_Parms
		{
			AIngredientDeathZone* DeathZone;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame_Statics::NewProp_DeathZone = { "DeathZone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeThePlateGameMode_eventRegisterDeathZoneWithGame_Parms, DeathZone), Z_Construct_UClass_AIngredientDeathZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame_Statics::NewProp_DeathZone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "RegisterDeathZoneWithGame", nullptr, nullptr, sizeof(EscapeThePlateGameMode_eventRegisterDeathZoneWithGame_Parms), Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics
	{
		struct EscapeThePlateGameMode_eventSetupLevelData_Parms
		{
			FString LevelSaveName;
			float NewParTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewParTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSaveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelSaveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::NewProp_NewParTime = { "NewParTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeThePlateGameMode_eventSetupLevelData_Parms, NewParTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::NewProp_LevelSaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::NewProp_LevelSaveName = { "LevelSaveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeThePlateGameMode_eventSetupLevelData_Parms, LevelSaveName), METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::NewProp_LevelSaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::NewProp_LevelSaveName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::NewProp_NewParTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::NewProp_LevelSaveName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeThePlateGameMode, nullptr, "SetupLevelData", nullptr, nullptr, sizeof(EscapeThePlateGameMode_eventSetupLevelData_Parms), Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEscapeThePlateGameMode_NoRegister()
	{
		return AEscapeThePlateGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEscapeThePlateGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathZones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeathZones;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathZones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Characters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Characters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanPlayerPause_MetaData[];
#endif
		static void NewProp_bCanPlayerPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanPlayerPause;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasChallengeCompleted_MetaData[];
#endif
		static void NewProp_HasChallengeCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasChallengeCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordedGameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecordedGameTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscapeThePlateGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeThePlate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEscapeThePlateGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_AutoReposessCharacter, "AutoReposessCharacter" }, // 2086198453
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterPossessionChanged, "CharacterPossessionChanged" }, // 3855730349
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_CharacterStatusChanged, "CharacterStatusChanged" }, // 1046316298
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_CheckGameOver, "CheckGameOver" }, // 1564297967
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_DidPlayerWin, "DidPlayerWin" }, // 1387468034
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_GameOver, "GameOver" }, // 850720122
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_GetClosestDeathZone, "GetClosestDeathZone" }, // 999074154
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_GetRecordedTime, "GetRecordedTime" }, // 1861002944
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_GetStarsEarned, "GetStarsEarned" }, // 2709263266
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_PauseGame, "PauseGame" }, // 1802859208
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_PossessIngredient, "PossessIngredient" }, // 2149214283
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_RecordGameTime, "RecordGameTime" }, // 3889324183
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterCharacterWithGame, "RegisterCharacterWithGame" }, // 1771449405
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_RegisterDeathZoneWithGame, "RegisterDeathZoneWithGame" }, // 4108094977
		{ &Z_Construct_UFunction_AEscapeThePlateGameMode_SetupLevelData, "SetupLevelData" }, // 2216717059
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeThePlateGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EscapeThePlateGameMode.h" },
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_DeathZones_MetaData[] = {
		{ "Category", "GameObjects" },
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_DeathZones = { "DeathZones", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeThePlateGameMode, DeathZones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_DeathZones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_DeathZones_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_DeathZones_Inner = { "DeathZones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AIngredientDeathZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_Characters_MetaData[] = {
		{ "Category", "GameObjects" },
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeThePlateGameMode, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_Characters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_Characters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AIngredientBaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_bCanPlayerPause_MetaData[] = {
		{ "Category", "GameStatus" },
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_bCanPlayerPause_SetBit(void* Obj)
	{
		((AEscapeThePlateGameMode*)Obj)->bCanPlayerPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_bCanPlayerPause = { "bCanPlayerPause", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEscapeThePlateGameMode), &Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_bCanPlayerPause_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_bCanPlayerPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_bCanPlayerPause_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_HasChallengeCompleted_MetaData[] = {
		{ "Category", "LevelData" },
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_HasChallengeCompleted_SetBit(void* Obj)
	{
		((AEscapeThePlateGameMode*)Obj)->HasChallengeCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_HasChallengeCompleted = { "HasChallengeCompleted", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEscapeThePlateGameMode), &Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_HasChallengeCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_HasChallengeCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_HasChallengeCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_ParTime_MetaData[] = {
		{ "Category", "LevelData" },
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_ParTime = { "ParTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeThePlateGameMode, ParTime), METADATA_PARAMS(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_ParTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_ParTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_LevelName_MetaData[] = {
		{ "Category", "LevelData" },
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeThePlateGameMode, LevelName), METADATA_PARAMS(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_LevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_RecordedGameTime_MetaData[] = {
		{ "ModuleRelativePath", "EscapeThePlateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_RecordedGameTime = { "RecordedGameTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeThePlateGameMode, RecordedGameTime), METADATA_PARAMS(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_RecordedGameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_RecordedGameTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscapeThePlateGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_DeathZones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_DeathZones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_Characters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_Characters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_bCanPlayerPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_HasChallengeCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_ParTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeThePlateGameMode_Statics::NewProp_RecordedGameTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscapeThePlateGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscapeThePlateGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscapeThePlateGameMode_Statics::ClassParams = {
		&AEscapeThePlateGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEscapeThePlateGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeThePlateGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscapeThePlateGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscapeThePlateGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscapeThePlateGameMode, 3238763182);
	template<> ESCAPETHEPLATE_API UClass* StaticClass<AEscapeThePlateGameMode>()
	{
		return AEscapeThePlateGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscapeThePlateGameMode(Z_Construct_UClass_AEscapeThePlateGameMode, &AEscapeThePlateGameMode::StaticClass, TEXT("/Script/EscapeThePlate"), TEXT("AEscapeThePlateGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeThePlateGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
