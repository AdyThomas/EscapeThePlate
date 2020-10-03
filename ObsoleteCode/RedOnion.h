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

private:
	void CheckAndPerformMovement(float DeltaTime);

public:
	ARedOnion();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float HorizontalAcceleration;
	float ForwardAcceleration;
	float MaxSpeed;
	float ForwardSpeed;
	float HorizontalSpeed;
	float Friction;

	UPROPERTY()
	bool bUpPressed;
	bool bDownPressed;
	bool bLeftPressed;
	bool bRightPressed;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement functions
	void MoveX(float magnitude) override;
	void MoveY(float magnitude) override;
	void UpPress();
	void UpRelease();
	void DownPress();
	void DownRelease();
	void LeftPress();
	void LeftRelease();
	void RightPress();
	void RightRelease();

};
