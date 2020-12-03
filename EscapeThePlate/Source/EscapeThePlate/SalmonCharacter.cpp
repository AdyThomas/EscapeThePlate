// Fill out your copyright notice in the Description page of Project Settings.


#include "SalmonCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

ASalmonCharacter::ASalmonCharacter() : Super()
{
	// Set instance variables to defaults
	MoveSpeed = 0.3f;
	AbilityCooldown = 1.5f;
}

// Called to bind functionality to input
void ASalmonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveY", this, &ASalmonCharacter::MoveY);
	PlayerInputComponent->BindAxis("MoveX", this, &ASalmonCharacter::MoveX);
}

// Movement in the X direction with a magnitude
void ASalmonCharacter::MoveX(float magnitude)
{
	if (Controller && !bIsSneaking)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, magnitude * MoveSpeed);
	}
}

// Movement in the Y direction with a magnitude
void ASalmonCharacter::MoveY(float magnitude)
{
	if (Controller && !bIsSneaking)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, magnitude * MoveSpeed);
	}
}

//Driver for the chili pepper's propulsion ability
void ASalmonCharacter::PerformAbility()
{
	Super::PerformAbility();
	bIsSneaking = !bIsSneaking;

	if (AbilitySound && bIsSneaking)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), AbilitySound, GetActorLocation());
	}
	else if(AbilitySecondSound)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), AbilitySecondSound, GetActorLocation());
	}

	OnAbilityPerformed();
}