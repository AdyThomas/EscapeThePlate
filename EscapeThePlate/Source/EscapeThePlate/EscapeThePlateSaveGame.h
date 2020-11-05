// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EscapeThePlateSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FLevelSaveData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString LevelName;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 NumStarsEarned;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RecordTime;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool ChallengeCompleted;
};

/**
 * 
 */
UCLASS()
class ESCAPETHEPLATE_API UEscapeThePlateSaveGame : public USaveGame
{
	GENERATED_BODY()

	public:
		UPROPERTY(EditAnywhere)
		TArray<FLevelSaveData> LevelSaves;
};
