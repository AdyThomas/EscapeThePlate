// Fill out your copyright notice in the Description page of Project Settings.


#include "RedOnion.h"
#include "IngredientBaseMovementComponent.h"

ARedOnion::ARedOnion()
{
	//Superclass constructor called automatically

	MoveSpeed = 1.f;

	//TODO: Add acceleration
}

// Called to bind functionality to input
void ARedOnion::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveY", this, &ARedOnion::MoveY);
	PlayerInputComponent->BindAxis("MoveX", this, &ARedOnion::MoveX);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Tilt", this, &APawn::AddControllerPitchInput);
}

// Movement in the X direction with a magnitude
void ARedOnion::MoveX(float magnitude)
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
void ARedOnion::MoveY(float magnitude)
{
	if (MoveComponent && Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		MoveComponent->AddInputVector(magnitude * MoveSpeed * Direction);
	}
}