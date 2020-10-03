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

	// The acceleration for jumping and max time this can accelerate, respectively
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	float Acceleration;
	float JumpTime;

	// The timer used to start/stop jumping
	UPROPERTY()
	float AccelerationTimer;
	
	// The cooldown of the jump ability in seconds
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	float AbilityCooldown;

	// The timer and flag used to trigger the ability
	UPROPERTY()
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
	// Cancels any further jump acceleration
	void StopJump();
};
