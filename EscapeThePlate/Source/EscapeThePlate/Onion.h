// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Onion.generated.h"

UCLASS()
class ESCAPETHEPLATE_API AOnion : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AOnion();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float MoveSpeed;

	/** Components for the player camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;

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

	// Movement functions
	void MoveX(float magnitude);
	void MoveY(float magnitude);

};
