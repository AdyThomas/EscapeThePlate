// Fill out your copyright notice in the Description page of Project Settings.


#include "RedOnion.h"
#include "IngredientBaseMovementComponent.h"

ARedOnion::ARedOnion()
{
	//Superclass constructor called automatically

	MoveSpeed = 1.f;
	HorizontalAcceleration = 2;
	ForwardAcceleration = 2;
	MaxSpeed = 20.0;
	ForwardSpeed = 0;
	HorizontalSpeed = 0;
	Friction = 2.f;
	bUpPressed = false;
	bDownPressed = false;
	bLeftPressed = false;
	bRightPressed = false;
}

// Called every frame
void ARedOnion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckAndPerformMovement(DeltaTime);
}

// Checks if keys are pressed, and performs corresponding acceleration and movement if so
void ARedOnion::CheckAndPerformMovement(float DeltaTime)
{
	// Handle forward movement
	if (bUpPressed)
	{
		ForwardSpeed = FMath::Clamp(ForwardSpeed + ForwardAcceleration*DeltaTime, -1*MaxSpeed, MaxSpeed);
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

	if (MoveComponent && Controller)
	{
		// Perform Movement
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		MoveComponent->AddInputVector(ForwardSpeed * ForwardDirection);
		const FVector HorizDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		MoveComponent->AddInputVector(HorizontalSpeed * HorizDirection);
	}
}

// Called to bind functionality to input
void ARedOnion::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	//PlayerInputComponent->BindAxis("MoveY", this, &ARedOnion::MoveY);
	//PlayerInputComponent->BindAxis("MoveX", this, &ARedOnion::MoveX);
	PlayerInputComponent->BindAction("MoveUp", IE_Pressed, this, &ARedOnion::UpPress);
	PlayerInputComponent->BindAction("MoveUp", IE_Released, this, &ARedOnion::UpRelease);
	PlayerInputComponent->BindAction("MoveDown", IE_Pressed, this, &ARedOnion::DownPress);
	PlayerInputComponent->BindAction("MoveDown", IE_Released, this, &ARedOnion::DownRelease);
	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &ARedOnion::LeftPress);
	PlayerInputComponent->BindAction("MoveLeft", IE_Released, this, &ARedOnion::LeftRelease);
	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &ARedOnion::RightPress);
	PlayerInputComponent->BindAction("MoveRight", IE_Released, this, &ARedOnion::RightRelease);
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

void ARedOnion::UpPress()
{
	bUpPressed = true;
}

void ARedOnion::UpRelease()
{
	bUpPressed = false;
}


void ARedOnion::DownPress()
{
	bDownPressed = true;
}


void ARedOnion::DownRelease()
{
	bDownPressed = false;
}


void ARedOnion::LeftPress()
{
	bLeftPressed = true;
}


void ARedOnion::LeftRelease()
{
	bLeftPressed = false;
}


void ARedOnion::RightPress()
{
	bRightPressed = true;
}


void ARedOnion::RightRelease()
{
	bRightPressed = false;
}

