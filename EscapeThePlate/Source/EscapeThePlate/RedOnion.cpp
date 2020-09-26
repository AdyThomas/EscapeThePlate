// Fill out your copyright notice in the Description page of Project Settings.


#include "RedOnion.h"

ARedOnion::ARedOnion()
{
	//Superclass constructor called automatically

	MoveSpeed = 1.f;

}

// Called to bind functionality to input
void ARedOnion::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveY", this, &ARedOnion::MoveY);
	PlayerInputComponent->BindAxis("MoveX", this, &ARedOnion::MoveX);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Tilt", this, &APawn::AddControllerPitchInput);
}

// Movement in the X direction with a magnitude
void ARedOnion::MoveX(float magnitude)
{
	if (Controller != nullptr && magnitude != 0.0f)
	{

		// Find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator Yaw(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(Yaw).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, magnitude * MoveSpeed);
	}
}

// Movement in the Y direction with a magnitude
void ARedOnion::MoveY(float magnitude)
{
	if (Controller != nullptr && magnitude != 0.0f)
	{

		// Find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator Yaw(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(Yaw).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, magnitude * MoveSpeed);
	}
}