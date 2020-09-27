// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IngredientBaseClass.h"
#include "RedOnion.generated.h"

/**
 * Represents the red onion playable character, with a wrapper and the ability to not get contaminated
 */
UCLASS()
class ESCAPETHEPLATE_API ARedOnion : public AIngredientBaseClass
{
	GENERATED_BODY()

public:
	ARedOnion();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement functions
	void MoveX(float magnitude) override;
	void MoveY(float magnitude) override;

};
