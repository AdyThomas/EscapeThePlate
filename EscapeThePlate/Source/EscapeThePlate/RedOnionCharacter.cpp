// Fill out your copyright notice in the Description page of Project Settings.


#include "RedOnionCharacter.h"


ARedOnionCharacter::ARedOnionCharacter() : Super()
{
	AbilityCooldown = 4.0;

	BaseSpeed = 1.f;
	BoostSpeed = 4.f;

	MoveSpeed = BaseSpeed;
	bUpPressed = false;
	bDownPressed = false;
	bLeftPressed = false;
	bRightPressed = false;
}

// Called every frame
void ARedOnionCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Called to bind functionality to input
void ARedOnionCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveY", this, &ARedOnionCharacter::MoveY);
	PlayerInputComponent->BindAxis("MoveX", this, &ARedOnionCharacter::MoveX);
}

// Movement in the X direction with a magnitude
void ARedOnionCharacter::MoveX(float magnitude)
{
	if (Controller)
	{
		UE_LOG(LogTemp, Warning, TEXT("%f"), MoveSpeed);
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, magnitude * MoveSpeed);
	}
}

// Movement in the Y direction with a magnitude
void ARedOnionCharacter::MoveY(float magnitude)
{
	if (Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, magnitude * MoveSpeed);
	}
}

void ARedOnionCharacter::PerformAbility()
{
	Super::PerformAbility();
	MoveSpeed = BoostSpeed;
}

void ARedOnionCharacter::ResetAbility()
{
	Super::ResetAbility();
	MoveSpeed = BaseSpeed;
}