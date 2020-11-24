// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IngredientBaseCharacter.h"
#include "RedOnionCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEPLATE_API ARedOnionCharacter : public AIngredientBaseCharacter
{
	GENERATED_BODY()
	

public:
	ARedOnionCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float BoostSpeed;
	float BaseSpeed;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement functions
	void MoveX(float magnitude) override;
	void MoveY(float magnitude) override;

	void PerformAbility() override;
	void ResetAbility() override;
};
