// Fill out your copyright notice in the Description page of Project Settings.

#include "EscapeThePlateSaveGame.h"
#include "EscapeThePlateGameInstance.h"
#include "kismet/GameplayStatics.h"


UEscapeThePlateGameInstance::UEscapeThePlateGameInstance()
{
	SaveSlotName = TEXT("DefaultSlot");

	// Unfortunately, currently only object storing level info
	LevelNames.Add(TEXT("Tutorial"));
	LevelSaveNames.Add(TEXT("TutorialLevel"));
	LevelParTimes.Add(600.f);
	LevelNames.Add(TEXT("The Noodle Shop"));
	LevelSaveNames.Add(TEXT("AsianEatery_v3"));
	LevelParTimes.Add(30.f);
}

void UEscapeThePlateGameInstance::Init()
{
	Super::Init();

	if (UGameplayStatics::DoesSaveGameExist(SaveSlotName, 0))
	{
		SaveGameData = Cast<UEscapeThePlateSaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, 0));
	}
	else
	{
		SaveGameData = Cast<UEscapeThePlateSaveGame>(UGameplayStatics::CreateSaveGameObject(UEscapeThePlateSaveGame::StaticClass()));
	}
}

void UEscapeThePlateGameInstance::SaveGame()
{
	UE_LOG(LogTemp, Warning, TEXT("Saving"))
	UGameplayStatics::SaveGameToSlot(SaveGameData, SaveSlotName, 0);
}

void UEscapeThePlateGameInstance::ClearSave()
{
	UGameplayStatics::DeleteGameInSlot(SaveSlotName, 0);
	SaveGameData = Cast<UEscapeThePlateSaveGame>(UGameplayStatics::CreateSaveGameObject(UEscapeThePlateSaveGame::StaticClass()));
}

void UEscapeThePlateGameInstance::AddDataToSave(FLevelSaveData NewData)
{
	UE_LOG(LogTemp, Warning, TEXT("Adding save data"))

	int i;
	for (i = 0; i < SaveGameData->LevelSaves.Num(); i++)
	{
		if (SaveGameData->LevelSaves[i].LevelName == NewData.LevelName)
		{
			// Stars Earned
			if (NewData.NumStarsEarned > SaveGameData->LevelSaves[i].NumStarsEarned)
				SaveGameData->LevelSaves[i].NumStarsEarned = NewData.NumStarsEarned;

			// Record times
			if (NewData.RecordTime < SaveGameData->LevelSaves[i].RecordTime)
				SaveGameData->LevelSaves[i].RecordTime = NewData.RecordTime;

			// Challenge completed
			SaveGameData->LevelSaves[i].ChallengeCompleted = SaveGameData->LevelSaves[i].ChallengeCompleted || NewData.ChallengeCompleted;

			return;
		}
	}

	// No instance of the played level in the save
	SaveGameData->LevelSaves.Add(NewData);
}

FLevelSaveData UEscapeThePlateGameInstance::GetLevelRecords(const FString& LevelName)
{
	int i;
	for (i = 0; i < SaveGameData->LevelSaves.Num(); i++)
	{
		if (SaveGameData->LevelSaves[i].LevelName == LevelName)
		{
			return SaveGameData->LevelSaves[i];
		}
	}

	FLevelSaveData EmptyData;
	EmptyData.LevelName = TEXT("EmptyLevel");
	EmptyData.ChallengeCompleted = false;
	EmptyData.RecordTime = 0.f;
	EmptyData.NumStarsEarned = 0;
	return EmptyData;
}