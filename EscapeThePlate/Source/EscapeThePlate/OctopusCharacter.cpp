// Fill out your copyright notice in the Description page of Project Settings.


#include "OctopusCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

AOctopusCharacter::AOctopusCharacter()
{
	MoveSpeed = .3f;
	AbilityCooldown = 1.f;
}

// Called to bind functionality to input
void AOctopusCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveY", this, &AOctopusCharacter::MoveY);
	PlayerInputComponent->BindAxis("MoveX", this, &AOctopusCharacter::MoveX);
}

// Movement in the X direction with a magnitude
void AOctopusCharacter::MoveX(float magnitude)
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
void AOctopusCharacter::MoveY(float magnitude)
{
	if (Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, magnitude * MoveSpeed);
	}
}

//Driver for the chili pepper's propulsion ability
void AOctopusCharacter::PerformAbility()
{
	Super::PerformAbility();
	GrabObject();
}