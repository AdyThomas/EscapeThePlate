// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IngredientBaseCharacter.h"
#include "GameFramework/Character.h"
#include "TofuCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEPLATE_API ATofuCharacter : public AIngredientBaseCharacter
{
	GENERATED_BODY()

	protected:

		uint8 JumpCount;

	public:

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sound)
		class USoundCue* AbilitySecondSound;

		// Jump control vars
		float MaxJumpHeight;
		float AirControl;

		ATofuCharacter();

		// Called every frame
		virtual void Tick(float DeltaTime) override;

		// Called to bind functionality to input
		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

		// Movement functions
		void MoveX(float magnitude) override;
		void MoveY(float magnitude) override;

		// Ability functions
		void PerformAbility() override;
		void Landed(const FHitResult& Hit) override;
	
};
