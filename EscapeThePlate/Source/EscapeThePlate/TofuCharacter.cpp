// Fill out your copyright notice in the Description page of Project Settings.


#include "TofuCharacter.h"
#include "IngredientBaseCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ATofuCharacter::ATofuCharacter()
{
	// Set instance variables to defaults
	MoveSpeed = .5f;
	MaxJumpHeight = 300.f;
	AirControl = .5;
	AbilityCooldown = 0.1f;
	JumpCount = 0;

	GetCharacterMovement()->JumpZVelocity = MaxJumpHeight;
	GetCharacterMovement()->AirControl = AirControl;
}

// Called every frame
void ATofuCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ATofuCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Ability", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveY", this, &ATofuCharacter::MoveY);
	PlayerInputComponent->BindAxis("MoveX", this, &ATofuCharacter::MoveX);
}

// Movement in the X direction with a magnitude
void ATofuCharacter::MoveX(float magnitude)
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
void ATofuCharacter::MoveY(float magnitude)
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
void ATofuCharacter::PerformAbility()
{
	UE_LOG(LogTemp, Warning, TEXT("Jump"))

	if (JumpCount == 0)
	{
		Super::PerformAbility();
		Super::Jump();
		JumpCount++;
	}
	else if (JumpCount == 1)
	{
		Super::PerformAbility();
		LaunchCharacter(FVector(0, 0, MaxJumpHeight), false, false);
		JumpCount++;
	}

}

void ATofuCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);
	JumpCount = 0;
}