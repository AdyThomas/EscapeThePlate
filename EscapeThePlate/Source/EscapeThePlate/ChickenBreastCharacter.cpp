// Fill out your copyright notice in the Description page of Project Settings.


#include "ChickenBreastCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "IngredientBaseMovementComponent.h"

AChickenBreastCharacter::AChickenBreastCharacter()
{
	MoveSpeed = .1f;
}

// Called to bind functionality to input
void AChickenBreastCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveY", this, &AChickenBreastCharacter::MoveY);
	PlayerInputComponent->BindAxis("MoveX", this, &AChickenBreastCharacter::MoveX);
}

// Movement in the X direction with a magnitude
void AChickenBreastCharacter::MoveX(float magnitude)
{
	if (Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, magnitude * MoveSpeed);
	}
}

// Movement in the Y direction with a magnitude
void AChickenBreastCharacter::MoveY(float magnitude)
{
	if (Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, magnitude * MoveSpeed);
	}
}
