// Fill out your copyright notice in the Description page of Project Settings.


#include "ChickenBreastCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AChickenBreastCharacter::AChickenBreastCharacter()
{
	MoveSpeed = .3f;
	bIsMoving = true;
	GetCharacterMovement()->DefaultLandMovementMode = MOVE_Flying;
}

// Called to bind functionality to input
void AChickenBreastCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveY", this, &AChickenBreastCharacter::MoveY);
	PlayerInputComponent->BindAxis("MoveX", this, &AChickenBreastCharacter::MoveX);
}

// Handle hit events in this class to allow to scale walls
void AChickenBreastCharacter::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation,
	FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("Hit event"))
	//Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	// Make sure this character is actually trying to scale a wall
	if (bSelfMoved && bIsMoving && Other)
	{
		//TODO Enable a boolean in here, climb in tick? Need way to disable climb, switch to key press events
		UE_LOG(LogTemp, Warning, TEXT("Climb"))
		if (Controller)
		{
			const FRotator Rotation = Controller->GetControlRotation();
			const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

			const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Z);
			AddMovementInput(Direction, MoveSpeed);
		}
	}
}

// Movement in the X direction with a magnitude
void AChickenBreastCharacter::MoveX(float magnitude)
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
void AChickenBreastCharacter::MoveY(float magnitude)
{
	if (Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, magnitude * MoveSpeed);
	}
}
