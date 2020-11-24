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

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool bIsSneaking;

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sound)
		class USoundCue* AbilitySecondSound;

		ASalmonCharacter();

		// Called to bind functionality to input
		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

		// Movement functions
		void MoveX(float magnitude) override;
		void MoveY(float magnitude) override;

		// Ability functions
		void PerformAbility() override;

		UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnAbilityPerformed();

};
