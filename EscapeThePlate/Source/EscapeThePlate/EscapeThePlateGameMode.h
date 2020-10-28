// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "EscapeThePlateGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEPLATE_API AEscapeThePlateGameMode : public AGameMode
{
	GENERATED_BODY()

	public:

		UPROPERTY(BlueprintReadWrite, Category = GameObjects)
		TArray<class AIngredientBaseCharacter*> Characters;

		UPROPERTY(BlueprintReadWrite, Category = GameObjects)
		TArray<class AIngredientDeathZone*> DeathZones;

		UFUNCTION(BlueprintCallable)
		void RegisterCharacterWithGame(AIngredientBaseCharacter* Character);

		UFUNCTION(BlueprintCallable)
		void RegisterDeathZoneWithGame(AIngredientDeathZone* DeathZone);

		UFUNCTION(BlueprintCallable)
		void AutoReposessCharacter();

		UFUNCTION(BlueprintCallable)
		AIngredientDeathZone* GetClosestDeathZone(FVector ActorLocation);

		UFUNCTION(BlueprintCallable)
		bool CheckGameOver();

		UFUNCTION(BlueprintCallable)
		uint8 GetStarsEarned();

		UFUNCTION(BlueprintCallable)
		bool DidPlayerWin();

		UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void CharacterStatusChanged();

		UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void GameOver();
};
