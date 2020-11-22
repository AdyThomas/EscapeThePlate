// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundCue;
class AIngredientBaseCharacter;
struct FVector;
class AIngredientDeathZone;
#ifdef ESCAPETHEPLATE_EscapeThePlateGameMode_generated_h
#error "EscapeThePlateGameMode.generated.h already included, missing '#pragma once' in EscapeThePlateGameMode.h"
#endif
#define ESCAPETHEPLATE_EscapeThePlateGameMode_generated_h

#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_SPARSE_DATA
#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPauseMusic); \
	DECLARE_FUNCTION(execToggleMusic); \
	DECLARE_FUNCTION(execRegisterAndStartBackgroundMusic); \
	DECLARE_FUNCTION(execGetRecordedTime); \
	DECLARE_FUNCTION(execRecordGameTime); \
	DECLARE_FUNCTION(execPossessIngredient); \
	DECLARE_FUNCTION(execDidPlayerWin); \
	DECLARE_FUNCTION(execGetStarsEarned); \
	DECLARE_FUNCTION(execCheckGameOver); \
	DECLARE_FUNCTION(execSetupLevelData); \
	DECLARE_FUNCTION(execGetClosestDeathZone); \
	DECLARE_FUNCTION(execAutoReposessCharacter); \
	DECLARE_FUNCTION(execRegisterDeathZoneWithGame); \
	DECLARE_FUNCTION(execRegisterCharacterWithGame);


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPauseMusic); \
	DECLARE_FUNCTION(execToggleMusic); \
	DECLARE_FUNCTION(execRegisterAndStartBackgroundMusic); \
	DECLARE_FUNCTION(execGetRecordedTime); \
	DECLARE_FUNCTION(execRecordGameTime); \
	DECLARE_FUNCTION(execPossessIngredient); \
	DECLARE_FUNCTION(execDidPlayerWin); \
	DECLARE_FUNCTION(execGetStarsEarned); \
	DECLARE_FUNCTION(execCheckGameOver); \
	DECLARE_FUNCTION(execSetupLevelData); \
	DECLARE_FUNCTION(execGetClosestDeathZone); \
	DECLARE_FUNCTION(execAutoReposessCharacter); \
	DECLARE_FUNCTION(execRegisterDeathZoneWithGame); \
	DECLARE_FUNCTION(execRegisterCharacterWithGame);


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_EVENT_PARMS
#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_CALLBACK_WRAPPERS
#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEscapeThePlateGameMode(); \
	friend struct Z_Construct_UClass_AEscapeThePlateGameMode_Statics; \
public: \
	DECLARE_CLASS(AEscapeThePlateGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeThePlate"), NO_API) \
	DECLARE_SERIALIZER(AEscapeThePlateGameMode)


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEscapeThePlateGameMode(); \
	friend struct Z_Construct_UClass_AEscapeThePlateGameMode_Statics; \
public: \
	DECLARE_CLASS(AEscapeThePlateGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeThePlate"), NO_API) \
	DECLARE_SERIALIZER(AEscapeThePlateGameMode)


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEscapeThePlateGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEscapeThePlateGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscapeThePlateGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscapeThePlateGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscapeThePlateGameMode(AEscapeThePlateGameMode&&); \
	NO_API AEscapeThePlateGameMode(const AEscapeThePlateGameMode&); \
public:


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEscapeThePlateGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscapeThePlateGameMode(AEscapeThePlateGameMode&&); \
	NO_API AEscapeThePlateGameMode(const AEscapeThePlateGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscapeThePlateGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscapeThePlateGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEscapeThePlateGameMode)


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_12_PROLOG \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_EVENT_PARMS


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_SPARSE_DATA \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_RPC_WRAPPERS \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_CALLBACK_WRAPPERS \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_INCLASS \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_SPARSE_DATA \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_CALLBACK_WRAPPERS \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_INCLASS_NO_PURE_DECLS \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESCAPETHEPLATE_API UClass* StaticClass<class AEscapeThePlateGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
