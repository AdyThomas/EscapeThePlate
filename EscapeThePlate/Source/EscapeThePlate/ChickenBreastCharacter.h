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

public:
	AChickenBreastCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
	bool bIsMoving;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Handles Hit events, used to allow the character to scale walls
	virtual void NotifyHit( class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, 
		FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

	// Movement functions
	void MoveX(float magnitude) override;
	void MoveY(float magnitude) override;
	
};
