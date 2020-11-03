// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IngredientBaseCharacter.generated.h"

UCLASS()
class ESCAPETHEPLATE_API AIngredientBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AIngredientBaseCharacter();

	// Movement speed values
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float TurnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float TiltSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	float ContaminationLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	float ContaminationRate;

	UPROPERTY(BlueprintReadWrite)
	bool bIsInContaminationZone;

	UPROPERTY(BlueprintReadWrite, Category = Status)
	bool bIsDead;

	UPROPERTY(BlueprintReadWrite, Category = Status)
	bool bIsSafe;

	UPROPERTY(BlueprintReadOnly, Category = Ability)
	bool bCanPerformAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	float AbilityCooldown;

	FTimerHandle AbilityCooldownHandle;

	// The spring attaching the camera to the pawn
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	//	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* Camera;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement functions, implemented by child classes
	virtual void MoveX(float magnitude);
	virtual void MoveY(float magnitude);
	virtual void Turn(float magnitude);
	virtual void Tilt(float magnitude);

	// Ability/Interaction functions
	virtual void ActivateAbility();
	virtual void PerformAbility();
	virtual void ResetAbility();

	virtual void PerformInteraction();
	virtual void AskGameToPause();

	UFUNCTION(BlueprintCallable)
	virtual void KillThisIngredient();

	UFUNCTION(BlueprintCallable)
	virtual void SaveThisIngredient();

	UFUNCTION(BlueprintCallable)
	virtual bool IsIngredientUsable();

};
