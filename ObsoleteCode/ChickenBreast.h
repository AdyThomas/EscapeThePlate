// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IngredientBaseClass.h"
#include "ChickenBreast.generated.h"

/**
 *
 */
UCLASS()
class ESCAPETHEPLATE_API AChickenBreast : public AIngredientBaseClass
{
	GENERATED_BODY()

public:
	AChickenBreast();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement functions
	void MoveX(float magnitude) override;
	void MoveY(float magnitude) override;
};
