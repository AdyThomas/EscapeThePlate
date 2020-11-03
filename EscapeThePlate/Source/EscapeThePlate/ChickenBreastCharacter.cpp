// Fill out your copyright notice in the Description page of Project Settings.


#include "ChickenBreastCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AChickenBreastCharacter::AChickenBreastCharacter() : Super()
{
	AbilityCooldown = 0.0;

	MoveSpeed = 20.f;
	bUpPressed = false;
	bDownPressed = false;
	bLeftPressed = false;
	bRightPressed = false;
	bIsMoving = false;
	bIsClimbing = false;
	
}

// Called every frame
void AChickenBreastCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckAndPerformMovement(DeltaTime);
}

// Checks to see if movement should be performed, and if so does according to key presses
void AChickenBreastCharacter::CheckAndPerformMovement(float DeltaTime)
{
	// Update the moving flag for climbing
	bIsMoving = bUpPressed || bDownPressed || bLeftPressed || bRightPressed;

	//UE_LOG(LogTemp, Warning, TEXT("Z velocity %f"), GetCharacterMovement()->Velocity.Z)

	// Change climbing state
	if (GetCharacterMovement()->Velocity.Z > 10.0)
		bIsClimbing = true;

	if (!bIsMoving || (bIsClimbing && GetCharacterMovement()->Velocity.Z < 10.0f))
	{
		bIsClimbing = false;
		GetCharacterMovement()->MovementMode = MOVE_Walking;
	}

	
	if (Controller)
	{
		// Perform Movement
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		

		// Forward movement
		if (bUpPressed)
		{
			const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
			AddMovementInput(ForwardDirection, MoveSpeed);
		}
		else if (bDownPressed)
		{
			const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
			AddMovementInput(ForwardDirection, -1 * MoveSpeed);
		}

		// Horizontal movement
		if (bRightPressed)
		{
			const FVector HorizDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
			AddMovementInput(HorizDirection, MoveSpeed);
		}
		else if (bLeftPressed)
		{
			const FVector HorizDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
			AddMovementInput(HorizDirection, -1 * MoveSpeed);
		}
	}
	
}

// Called to bind functionality to input
void AChickenBreastCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	//PlayerInputComponent->BindAxis("MoveY", this, &AChickenBreastCharacter::MoveY);
	//PlayerInputComponent->BindAxis("MoveX", this, &AChickenBreastCharacter::MoveX);
	PlayerInputComponent->BindAction("MoveUp", IE_Pressed, this, &AChickenBreastCharacter::UpPress);
	PlayerInputComponent->BindAction("MoveUp", IE_Released, this, &AChickenBreastCharacter::UpRelease);
	PlayerInputComponent->BindAction("MoveDown", IE_Pressed, this, &AChickenBreastCharacter::DownPress);
	PlayerInputComponent->BindAction("MoveDown", IE_Released, this, &AChickenBreastCharacter::DownRelease);
	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &AChickenBreastCharacter::LeftPress);
	PlayerInputComponent->BindAction("MoveLeft", IE_Released, this, &AChickenBreastCharacter::LeftRelease);
	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &AChickenBreastCharacter::RightPress);
	PlayerInputComponent->BindAction("MoveRight", IE_Released, this, &AChickenBreastCharacter::RightRelease);
}

// Handle hit events in this class to allow to scale walls
void AChickenBreastCharacter::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation,
	FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("Hit event and other %x"), Other)
	//Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);


	// Make sure this character is actually trying to scale a wall
	if (bSelfMoved && bIsMoving && Other)
	{
		// Make this fly without momentum so it mimics walking
		GetCharacterMovement()->bCheatFlying = true;
		GetCharacterMovement()->MovementMode = MOVE_Flying;

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

void AChickenBreastCharacter::UpPress()
{
	bUpPressed = true;
}

void AChickenBreastCharacter::UpRelease()
{
	bUpPressed = false;
}


void AChickenBreastCharacter::DownPress()
{
	bDownPressed = true;
}


void AChickenBreastCharacter::DownRelease()
{
	bDownPressed = false;
}


void AChickenBreastCharacter::LeftPress()
{
	bLeftPressed = true;
}


void AChickenBreastCharacter::LeftRelease()
{
	bLeftPressed = false;
}


void AChickenBreastCharacter::RightPress()
{
	bRightPressed = true;
}


void AChickenBreastCharacter::RightRelease()
{
	bRightPressed = false;
}