// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IngredientBaseCharacter.h"
#include "SalmonCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEPLATE_API ASalmonCharacter : public AIngredientBaseCharacter
{
	GENERATED_BODY()
	
	public:

		UPROPERTY(BlueprintReadOnly)
		bool bIsSneaking;

		ASalmonCharacter();

		// Called to bind functionality to input
		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

		// Movement functions
		void MoveX(float magnitude) override;
		void MoveY(float magnitude) override;

		// Ability functions
		void PerformAbility() override;

};
