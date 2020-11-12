// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EscapeThePlateSaveGame.h"
#include "Engine/GameInstance.h"
#include "EscapeThePlateGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEPLATE_API UEscapeThePlateGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	public:

		UEscapeThePlateGameInstance();

		UPROPERTY(BlueprintReadWrite)
		class UEscapeThePlateSaveGame* SaveGameData;

		UPROPERTY(BlueprintReadOnly)
		TArray<FString> LevelNames;

		UPROPERTY(BlueprintReadOnly)
		TArray<FString> LevelSaveNames;

		UPROPERTY(BlueprintReadOnly)
		TArray<float> LevelParTimes;

		UPROPERTY(EditAnywhere)
		FString SaveSlotName;

		UFUNCTION(BlueprintCallable)
		void SaveGame();

		UFUNCTION(BlueprintCallable)
		void ClearSave();

		UFUNCTION(BlueprintCallable)
		void AddDataToSave(FLevelSaveData NewData);

		UFUNCTION(BlueprintCallable)
		FLevelSaveData GetLevelRecords(const FString& LevelName);

	protected:
			virtual void Init() override;
};
