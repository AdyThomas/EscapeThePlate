// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "IngredientBaseClass.generated.h"

UCLASS()
class ESCAPETHEPLATE_API AIngredientBaseClass : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AIngredientBaseClass();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		float MoveSpeed;

	// The spring attaching the camera to the pawn
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = Mesh)
	class USkeletalMeshComponent* Skeleton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Collision)
	class UBoxComponent* BoxCollider;

	UPROPERTY()
	class UIngredientBaseMovementComponent* MoveComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UPawnMovementComponent* GetMovementComponent() const override;

	// Movement functions, implemented by child classes
	virtual void MoveX(float magnitude);
	virtual void MoveY(float magnitude);

};
