// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IngredientBaseClass.h"
#include "ChiliPepper.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEPLATE_API AChiliPepper : public AIngredientBaseClass
{
	GENERATED_BODY()
	
public:
	AChiliPepper();

	// Ability defined variables, TODO: Put in baseclass?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	float LaunchSpeed;
	float VerticalSpeed;
	float AbilityCooldown;
	float AbilityCooldownTimer;
	bool bAbilityPressed;

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
	void PerformLaunch(float DeltaTime);
};
