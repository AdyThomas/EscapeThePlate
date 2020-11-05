// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLevelSaveData;
#ifdef ESCAPETHEPLATE_EscapeThePlateGameInstance_generated_h
#error "EscapeThePlateGameInstance.generated.h already included, missing '#pragma once' in EscapeThePlateGameInstance.h"
#endif
#define ESCAPETHEPLATE_EscapeThePlateGameInstance_generated_h

#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_SPARSE_DATA
#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLevelRecords); \
	DECLARE_FUNCTION(execAddDataToSave); \
	DECLARE_FUNCTION(execSaveGame);


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLevelRecords); \
	DECLARE_FUNCTION(execAddDataToSave); \
	DECLARE_FUNCTION(execSaveGame);


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEscapeThePlateGameInstance(); \
	friend struct Z_Construct_UClass_UEscapeThePlateGameInstance_Statics; \
public: \
	DECLARE_CLASS(UEscapeThePlateGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EscapeThePlate"), NO_API) \
	DECLARE_SERIALIZER(UEscapeThePlateGameInstance)


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEscapeThePlateGameInstance(); \
	friend struct Z_Construct_UClass_UEscapeThePlateGameInstance_Statics; \
public: \
	DECLARE_CLASS(UEscapeThePlateGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EscapeThePlate"), NO_API) \
	DECLARE_SERIALIZER(UEscapeThePlateGameInstance)


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEscapeThePlateGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEscapeThePlateGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEscapeThePlateGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEscapeThePlateGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEscapeThePlateGameInstance(UEscapeThePlateGameInstance&&); \
	NO_API UEscapeThePlateGameInstance(const UEscapeThePlateGameInstance&); \
public:


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEscapeThePlateGameInstance(UEscapeThePlateGameInstance&&); \
	NO_API UEscapeThePlateGameInstance(const UEscapeThePlateGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEscapeThePlateGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEscapeThePlateGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEscapeThePlateGameInstance)


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_PRIVATE_PROPERTY_OFFSET
#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_13_PROLOG
#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_SPARSE_DATA \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_RPC_WRAPPERS \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_INCLASS \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_SPARSE_DATA \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESCAPETHEPLATE_API UClass* StaticClass<class UEscapeThePlateGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeThePlate_Source_EscapeThePlate_EscapeThePlateGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
