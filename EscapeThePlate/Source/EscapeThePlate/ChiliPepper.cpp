// Fill out your copyright notice in the Description page of Project Settings.


#include "ChiliPepper.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "IngredientBaseMovementComponent.h"
#include "Components/BoxComponent.h"

AChiliPepper::AChiliPepper()
{
	// Set instance variables to defaults
	MoveSpeed = 2.f;
	LaunchSpeed = 10.f;
	VerticalSpeed = 0.f;
	AbilityCooldown = 2.f;
	AbilityCooldownTimer = 0.f;
	bAbilityPressed = false;
}

// Called every frame
void AChiliPepper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CheckLauchVars(DeltaTime);
}

// Called to bind functionality to input
void AChiliPepper::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Ability", IE_Pressed, this, &AChiliPepper::PerformAbility);
	PlayerInputComponent->BindAxis("MoveY", this, &AChiliPepper::MoveY);
	PlayerInputComponent->BindAxis("MoveX", this, &AChiliPepper::MoveX);
}

// Movement in the X direction with a magnitude
void AChiliPepper::MoveX(float magnitude)
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
void AChiliPepper::MoveY(float magnitude)
{
	if (MoveComponent && Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		MoveComponent->AddInputVector(magnitude * MoveSpeed * Direction);
	}
}

//Driver for the chili pepper's propulsion ability
void AChiliPepper::PerformAbility()
{
	if (FMath::IsNearlyZero(AbilityCooldownTimer))
	{
		bAbilityPressed = true;
	}
}

// Modifies launch variables, and if able, performs the launch
void AChiliPepper::CheckLauchVars(float DeltaTime)
{
	// Perform Ability
	if (bAbilityPressed)
	{
		// Reset vars
		bAbilityPressed = false;
		AbilityCooldownTimer = AbilityCooldown;
		VerticalSpeed = LaunchSpeed;
	}
	else if (!FMath::IsNearlyZero(AbilityCooldownTimer))
	{
		AbilityCooldownTimer = FMath::Clamp(AbilityCooldownTimer - DeltaTime, 0.f, AbilityCooldown);
		PerformLaunch(DeltaTime);
	}

	
}

// The function called to cause this pepper to launch vertically
void AChiliPepper::PerformLaunch(float DeltaTime)
{
	
	if (MoveComponent && Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Z);
		MoveComponent->AddInputVector(VerticalSpeed*Direction);

		const float gravity = GetWorld()->GetGravityZ();
		VerticalSpeed = FMath::Clamp(VerticalSpeed - gravity*DeltaTime, 0.f, LaunchSpeed);
	}
}