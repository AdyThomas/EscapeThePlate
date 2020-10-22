// Fill out your copyright notice in the Description page of Project Settings.


#include "IngredientBaseCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AIngredientBaseCharacter::AIngredientBaseCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Preset variables
	MoveSpeed = 1.0;
	TurnSpeed = 45.f;
	TiltSpeed = 45.f;
	ContaminationLevel = 0.f;
	ContaminationRate = 40.f;
	bIsDead = false;
	bIsInContaminationZone = false;

	// Make springarm, connect to character
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 200.f;
	SpringArm->bUsePawnControlRotation = true;

	// Connect camera to springarm
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;

	// Don't rotate when controller rotates, only camera
	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
}

// Called every frame
void AIngredientBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bIsInContaminationZone && !bIsDead)
	{
		
		ContaminationLevel += ContaminationRate * DeltaTime;

		UE_LOG(LogTemp, Warning, TEXT("%f"), ContaminationLevel);

		if (ContaminationLevel >= 100.f)
			KillThisIngredient();
	}
}

// Called when the game starts or when spawned
void AIngredientBaseCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called to bind functionality to input, Movement should be handled by child classes
void AIngredientBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &AIngredientBaseCharacter::Turn);
	PlayerInputComponent->BindAxis("Tilt", this, &AIngredientBaseCharacter::Tilt);
}

void AIngredientBaseCharacter::Turn(float magnitude)
{
	AddControllerYawInput(magnitude * TurnSpeed * GetWorld()->GetDeltaSeconds());
}

void AIngredientBaseCharacter::Tilt(float magnitude)
{
	AddControllerPitchInput(magnitude * TiltSpeed * GetWorld()->GetDeltaSeconds());
}

void AIngredientBaseCharacter::KillThisIngredient()
{
	bIsDead = true;
	GetController()->UnPossess();
}

//Pointless implementations, should be overridden by children
void AIngredientBaseCharacter::MoveX(float magnitude) {}
void AIngredientBaseCharacter::MoveY(float magnitude) {}
void AIngredientBaseCharacter::PerformAbility() {}
void AIngredientBaseCharacter::PerformInteraction() {}
