// Fill out your copyright notice in the Description page of Project Settings.


#include "IngredientBaseClass.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AIngredientBaseClass::AIngredientBaseClass()
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

	GetCharacterMovement()->JumpZVelocity = 0;
}

// Called when the game starts or when spawned
void AIngredientBaseClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIngredientBaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input, Movement should be handled by child classes
void AIngredientBaseClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

}

void AIngredientBaseClass::MoveX(float magnitude)
{

}

void AIngredientBaseClass::MoveY(float magnitude)
{

}