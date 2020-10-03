// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IngredientBaseCharacter.h"
#include "ChickenBreastCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEPLATE_API AChickenBreastCharacter : public AIngredientBaseCharacter
{
	GENERATED_BODY()

public:
	AChickenBreastCharacter();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement functions
	void MoveX(float magnitude) override;
	void MoveY(float magnitude) override;
	
};
