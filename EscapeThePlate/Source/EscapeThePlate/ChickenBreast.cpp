// Fill out your copyright notice in the Description page of Project Settings.


#include "ChickenBreast.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "IngredientBaseMovementComponent.h"

AChickenBreast::AChickenBreast()
{
	MoveSpeed = .1f;
}

// Called to bind functionality to input
void AChickenBreast::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveY", this, &AChickenBreast::MoveY);
	PlayerInputComponent->BindAxis("MoveX", this, &AChickenBreast::MoveX);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Tilt", this, &APawn::AddControllerPitchInput);
}

// Movement in the X direction with a magnitude
void AChickenBreast::MoveX(float magnitude)
{
	if (MoveComponent && Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		MoveComponent->AddInputVector(magnitude * MoveSpeed * Direction);
	}
}

// Movement in the Y direction with a magnitude
void AChickenBreast::MoveY(float magnitude)
{
	if (MoveComponent && Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		MoveComponent->AddInputVector(magnitude * MoveSpeed * Direction);
	}
}