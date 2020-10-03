// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IngredientBaseCharacter.h"
#include "ChiliPepperCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEPLATE_API AChiliPepperCharacter : public AIngredientBaseCharacter
{
	GENERATED_BODY()

public:
	AChiliPepperCharacter();

	// The cooldown of the jump ability in seconds
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	float AbilityCooldown;
	float MaxJumpHeight;
	float AirControl;

	// The timer and flag used to trigger the ability
	UPROPERTY()
	float AbilityCooldownTimer;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement functions
	void MoveX(float magnitude) override;
	void MoveY(float magnitude) override;

	// ABility functions
	void PerformAbility() override;

private:
	void CheckLauchVars(float DeltaTime);
};
