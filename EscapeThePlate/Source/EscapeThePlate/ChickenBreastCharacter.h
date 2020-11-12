// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IngredientBaseCharacter.h"
#include "ChickenBreastCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEPLATE_API AChickenBreastCharacter : public AIngredientBaseCharacter
{
	GENERATED_BODY()

private:
	void CheckAndPerformMovement(float DeltaTime);

public:
	AChickenBreastCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
	bool bIsMoving;

	UPROPERTY()
	bool bUpPressed;
	bool bDownPressed;
	bool bLeftPressed;
	bool bRightPressed;

	bool bIsClimbing;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Handles Hit events, used to allow the character to scale walls
	virtual void NotifyHit( class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, 
	FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

	UFUNCTION(BlueprintCallable)
	void SetClimbing(bool CanClimb);

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
