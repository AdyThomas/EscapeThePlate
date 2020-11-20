// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IngredientBaseCharacter.h"
#include "BaguetteCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEPLATE_API ABaguetteCharacter : public AIngredientBaseCharacter
{
	GENERATED_BODY()
	
	private:

		float RelativeRotation;
		float RotateRate;
		bool bLaunchReady;

		FRotator StoredRotation;

	public:

		ABaguetteCharacter();

		// Called to bind functionality to input
		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

		void MoveX(float magnitude) override;
		void PerformAbility() override;

		void Landed(const FHitResult& Hit) override;
};
