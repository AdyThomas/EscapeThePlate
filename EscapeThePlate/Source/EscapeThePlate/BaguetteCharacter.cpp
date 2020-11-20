// Fill out your copyright notice in the Description page of Project Settings.


#include "BaguetteCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"

ABaguetteCharacter::ABaguetteCharacter()
{
	MoveSpeed = 30.f;
	AbilityCooldown = 0.1;
	RelativeRotation = 90.f;

	bLaunchReady = false;
	//const FRotator DesiredRotation(RelativeRotation, 0, 0);
	//GetMesh()->SetRelativeRotation(DesiredRotation);
}

// Called to bind functionality to input
void ABaguetteCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	
	PlayerInputComponent->BindAxis("MoveY", this, &ABaguetteCharacter::MoveY);
	PlayerInputComponent->BindAxis("MoveX", this, &ABaguetteCharacter::MoveX);
}

void ABaguetteCharacter::MoveX(float magnitude)
{
	
	if (Controller && !FMath::IsNearlyZero(magnitude))
	{
		/*
		//Update relative rotation
		RelativeRotation += -1.f * magnitude * 90.f * GetWorld()->DeltaTimeSeconds;
		//if (RelativeRotation < -360.f)
		//	RelativeRotation = RelativeRotation * -1 - 360.f;
		//if(RelativeRotation > 360.f)
		//	RelativeRotation = RelativeRotation * -1 + 360.f;

		const FRotator DesiredRotation(RelativeRotation, 0, 0);

		// Find whether mesh should compensate by rising or falling
		float RelativeZ = 0.f;
		//if (DesiredRotation.Pitch <= -90.f || DesiredRotation.Pitch >= 90.f)
		//{
		//	RelativeZ = -1 * ((FMath::Cos(FMath::DegreesToRadians(RelativeRotation)) + 1.0 )/2.0)
		//		* GetCapsuleComponent()->GetScaledCapsuleHalfHeight();// *GetWorld()->DeltaTimeSeconds;
		//}

		FVector RelativeLocation = GetMesh()->GetRelativeLocation();
		RelativeLocation.Z = RelativeZ;
		RelativeLocation.X = ((FMath::Sin(FMath::DegreesToRadians(RelativeRotation))+1.0)/2.0) * GetCapsuleComponent()->GetScaledCapsuleHalfHeight();// *GetWorld()->DeltaTimeSeconds;

		GetMesh()->SetRelativeRotation(DesiredRotation);
		GetMesh()->SetRelativeLocation(RelativeLocation);
		UE_LOG(LogTemp, Warning, TEXT("%f, %f, %f"), GetMesh()->GetComponentRotation().Pitch, 
			GetMesh()->GetComponentRotation().Yaw, RelativeLocation.X)
			*/
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, magnitude * MoveSpeed * GetWorld()->DeltaTimeSeconds);
	}
}

void ABaguetteCharacter::PerformAbility()
{
	if (bLaunchReady)
	{
		StoredRotation = GetCapsuleComponent()->GetComponentRotation();
		bLaunchReady = false;
		AbilityCooldown = 1.0;
		LaunchCharacter(1000.f * FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Z), false, false);
		bUseControllerRotationPitch = false;
		
	}
	else
	{
		bLaunchReady = true;
		AbilityCooldown = 0.1;
		bUseControllerRotationPitch = true;
	}

	Super::PerformAbility();
}

void ABaguetteCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);
	GetCapsuleComponent()->SetWorldRotation(FRotator(0, StoredRotation.Yaw, StoredRotation.Roll));
}