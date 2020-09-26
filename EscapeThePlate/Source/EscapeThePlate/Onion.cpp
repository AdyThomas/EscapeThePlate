// Fill out your copyright notice in the Description page of Project Settings.


#include "Onion.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AOnion::AOnion()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MoveSpeed = 1.0;

	// Make springarm, connect to character
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->TargetArmLength = 400.f;
	SpringArm->bUsePawnControlRotation = true;

	// Connect camera to springarm
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;

	// Don't rotate when controller rotates, only camera
	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	// Config character movement in dir of input
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);
}

// Called when the game starts or when spawned
void AOnion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOnion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOnion::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveY", this, &AOnion::MoveY);
	PlayerInputComponent->BindAxis("MoveX", this, &AOnion::MoveX);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Tilt", this, &APawn::AddControllerPitchInput);
}
 // Performs horizontal movement
void AOnion::MoveX(float magnitude)
{
	if (Controller != nullptr && magnitude != 0.0f)
	{

		// Find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator Yaw(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(Yaw).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, magnitude * MoveSpeed);
	}
}

// Performs forward movement
void AOnion::MoveY(float magnitude)
{
	if (Controller != nullptr && magnitude != 0.0f)
	{

		// Find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator Yaw(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(Yaw).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, magnitude * MoveSpeed);
	}
}

