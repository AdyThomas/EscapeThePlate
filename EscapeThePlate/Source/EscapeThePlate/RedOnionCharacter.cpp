// Fill out your copyright notice in the Description page of Project Settings.


#include "RedOnionCharacter.h"


ARedOnionCharacter::ARedOnionCharacter() : Super()
{
	AbilityCooldown = 0.0;

	MoveSpeed = 1.f;
	HorizontalAcceleration = 4;
	ForwardAcceleration = 4;
	MaxSpeed = 20.0;
	ForwardSpeed = 0;
	HorizontalSpeed = 0;
	Friction = 6.f;
	bUpPressed = false;
	bDownPressed = false;
	bLeftPressed = false;
	bRightPressed = false;
}

// Called every frame
void ARedOnionCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckAndPerformMovement(DeltaTime);
}

// Checks if keys are pressed, and performs corresponding acceleration and movement if so
void ARedOnionCharacter::CheckAndPerformMovement(float DeltaTime)
{
	// Handle forward movement
	if (bUpPressed)
	{
		ForwardSpeed = FMath::Clamp(ForwardSpeed + ForwardAcceleration * DeltaTime, -1 * MaxSpeed, MaxSpeed);
	}
	else if (bDownPressed)
	{
		ForwardSpeed = FMath::Clamp(ForwardSpeed - ForwardAcceleration * DeltaTime, -1 * MaxSpeed, MaxSpeed);
	}
	//Deceleration
	else if (ForwardSpeed < 0.f)
	{
		ForwardSpeed = FMath::Clamp(ForwardSpeed + Friction * DeltaTime, -1 * MaxSpeed, 0.f);
	}
	else if (ForwardSpeed > 0.f)
	{
		ForwardSpeed = FMath::Clamp(ForwardSpeed - Friction * DeltaTime, 0.f, MaxSpeed);
	}

	// Handle sideways movement
	if (bLeftPressed)
	{
		HorizontalSpeed = FMath::Clamp(HorizontalSpeed - HorizontalAcceleration * DeltaTime, -1 * MaxSpeed, MaxSpeed);
	}
	else if (bRightPressed)
	{
		HorizontalSpeed = FMath::Clamp(HorizontalSpeed + HorizontalAcceleration * DeltaTime, -1 * MaxSpeed, MaxSpeed);
	}
	// Deceleration
	else if (HorizontalSpeed < 0.f)
	{
		HorizontalSpeed = FMath::Clamp(HorizontalSpeed + Friction * DeltaTime, -1 * MaxSpeed, 0.f);
	}
	else if (HorizontalSpeed > 0.f)
	{
		HorizontalSpeed = FMath::Clamp(HorizontalSpeed - Friction * DeltaTime, 0.f, MaxSpeed);
	}

	if (Controller)
	{
		// Perform Movement
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(ForwardDirection, ForwardSpeed);
		const FVector HorizDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(HorizDirection, HorizontalSpeed);
	}
}

// Called to bind functionality to input
void ARedOnionCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	//PlayerInputComponent->BindAxis("MoveY", this, &ARedOnion::MoveY);
	//PlayerInputComponent->BindAxis("MoveX", this, &ARedOnion::MoveX);
	PlayerInputComponent->BindAction("MoveUp", IE_Pressed, this, &ARedOnionCharacter::UpPress);
	PlayerInputComponent->BindAction("MoveUp", IE_Released, this, &ARedOnionCharacter::UpRelease);
	PlayerInputComponent->BindAction("MoveDown", IE_Pressed, this, &ARedOnionCharacter::DownPress);
	PlayerInputComponent->BindAction("MoveDown", IE_Released, this, &ARedOnionCharacter::DownRelease);
	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &ARedOnionCharacter::LeftPress);
	PlayerInputComponent->BindAction("MoveLeft", IE_Released, this, &ARedOnionCharacter::LeftRelease);
	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &ARedOnionCharacter::RightPress);
	PlayerInputComponent->BindAction("MoveRight", IE_Released, this, &ARedOnionCharacter::RightRelease);
}

// Movement in the X direction with a magnitude
void ARedOnionCharacter::MoveX(float magnitude)
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

void ARedOnionCharacter::UpPress()
{
	bUpPressed = true;
}

void ARedOnionCharacter::UpRelease()
{
	bUpPressed = false;
}


void ARedOnionCharacter::DownPress()
{
	bDownPressed = true;
}


void ARedOnionCharacter::DownRelease()
{
	bDownPressed = false;
}


void ARedOnionCharacter::LeftPress()
{
	bLeftPressed = true;
}


void ARedOnionCharacter::LeftRelease()
{
	bLeftPressed = false;
}


void ARedOnionCharacter::RightPress()
{
	bRightPressed = true;
}


void ARedOnionCharacter::RightRelease()
{
	bRightPressed = false;
}
