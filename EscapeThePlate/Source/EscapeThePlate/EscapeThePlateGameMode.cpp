// Fill out your copyright notice in the Description page of Project Settings.


#include "EscapeThePlateGameMode.h"
#include "IngredientBaseCharacter.h"
#include "IngredientDeathZone.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Sound/SoundCue.h"
#include "Components/AudioComponent.h"

void AEscapeThePlateGameMode::BeginPlay()
{
	if (ChaseMusic)
	{
		ChaseMusicComponent = UGameplayStatics::SpawnSound2D(this, ChaseMusic);
		ChaseMusicComponent->SetPaused(true);
	}
}

void AEscapeThePlateGameMode::RegisterCharacterWithGame(AIngredientBaseCharacter* Character)
{
	Characters.Add(Character);
}

void AEscapeThePlateGameMode::RegisterDeathZoneWithGame(AIngredientDeathZone* DeathZone)
{
	DeathZones.Add(DeathZone);
}

void AEscapeThePlateGameMode::PossessIngredient(AIngredientBaseCharacter* Character)
{
	APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (Character->IsIngredientUsable())
	{
		Controller->Possess(Character);
		CharacterPossessionChanged();
	}
}

void AEscapeThePlateGameMode::AutoReposessCharacter()
{
	// Iterate all characters, possess first usable
	APlayerController * Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	int i;
	for (i = 0; i < Characters.Num(); i++)
	{
		AIngredientBaseCharacter* CurrChar = Characters[i];
		if (CurrChar->IsIngredientUsable())
		{
			Controller->Possess(CurrChar);
			CharacterPossessionChanged();
			return;
		}
	}
}

AIngredientDeathZone* AEscapeThePlateGameMode::GetClosestDeathZone(FVector ActorLocation)
{
	if (DeathZones.Num() == 0)
		return NULL;

	AIngredientDeathZone* ClosestZone = DeathZones[0];

	int i;
	for (i = 1; i < DeathZones.Num(); i++)
	{
		AIngredientDeathZone* CurrZone = DeathZones[i];

		FVector ClosestLoc = ClosestZone->GetActorLocation();
		FVector CurrLoc = CurrZone->GetActorLocation();

		ClosestLoc -= ActorLocation;
		CurrLoc -= ActorLocation;

		if (CurrLoc.Size() < ClosestLoc.Size())
			ClosestZone = CurrZone;
	}

	return ClosestZone;
}

bool AEscapeThePlateGameMode::CheckGameOver()
{
	// Simple check for any character being usable
	int i;
	for (i = 0; i < Characters.Num(); i++)
	{
		if (Characters[i]->IsIngredientUsable())
			return false;
	}
	return true;
}

uint8 AEscapeThePlateGameMode::GetStarsEarned()
{
	uint8 Stars = 0;
	bool AllIngredientsSafe = true;

	// TODO: Base off of Health left
	float percentSafe = 0.f;
	int i;
	for (i = 0; i < Characters.Num(); i++)
	{
		if (Characters[i]->bIsSafe)
			percentSafe += 100.f;
		else
			AllIngredientsSafe = false;
	}

	Stars += 3 * ((percentSafe / Characters.Num()) / 100.f);

	// Par time star, requires every ingredient saved
	if (AllIngredientsSafe && RecordedGameTime < ParTime)
		Stars++;

	// Collectible pickup star
	if(HasChallengeCompleted)
		Stars++;

	return Stars;
}

bool AEscapeThePlateGameMode::DidPlayerWin()
{
	return GetStarsEarned() >= 3;
}

void AEscapeThePlateGameMode::SetupLevelData(const FString& LevelSaveName, float NewParTime)
{
	LevelName = LevelSaveName;
	ParTime = NewParTime;
	HasChallengeCompleted = false;
}

void AEscapeThePlateGameMode::RecordGameTime()
{
	RecordedGameTime = UKismetSystemLibrary::GetGameTimeInSeconds(this);
}

float AEscapeThePlateGameMode::GetRecordedTime()
{
	return RecordedGameTime;
}

void AEscapeThePlateGameMode::RegisterAndStartBackgroundMusic(USoundCue* Music)
{
	BackgroundMusicComponent = UGameplayStatics::SpawnSound2D(this, Music);
	BackgroundMusicComponent->Play();
}

void AEscapeThePlateGameMode::ToggleMusic()
{
	if(BackgroundMusicComponent)
		BackgroundMusicComponent->SetPaused(!BackgroundMusicComponent->bIsPaused);
	if(ChaseMusicComponent)
		ChaseMusicComponent->SetPaused(!ChaseMusicComponent->bIsPaused);
}

void AEscapeThePlateGameMode::PauseMusic()
{
	if (BackgroundMusicComponent)
		BackgroundMusicComponent->SetPaused(true);
	if (ChaseMusicComponent)
		ChaseMusicComponent->SetPaused(true);
}