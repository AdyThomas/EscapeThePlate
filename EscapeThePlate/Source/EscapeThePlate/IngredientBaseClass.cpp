// Fill out your copyright notice in the Description page of Project Settings.


#include "IngredientBaseClass.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "IngredientBaseMovementComponent.h"

// Sets default values
AIngredientBaseClass::AIngredientBaseClass()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MoveSpeed = 1.0;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Make springarm, connect to character
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->TargetArmLength = 300.f;
	SpringArm->bUsePawnControlRotation = true;

	// Connect camera to springarm
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;

	// Don't rotate when controller rotates, only camera
	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	// Connect skeletal mesh to root
	Skeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeleton"));
	Skeleton->SetupAttachment(GetRootComponent());

	// Establish the movement component
	MoveComponent = CreateDefaultSubobject<UIngredientBaseMovementComponent>(TEXT("MoveComponent"));
	MoveComponent->UpdatedComponent = RootComponent;

	//TODO: Make this for Pawns
	// Config character movement in dir of input
	//GetCharacterMovement()->bOrientRotationToMovement = true;
	//GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);

	//GetCharacterMovement()->JumpZVelocity = 0;

}

// Called every frame
void AIngredientBaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called when the game starts or when spawned
void AIngredientBaseClass::BeginPlay()
{
	Super::BeginPlay();

}

// Called to bind functionality to input, Movement should be handled by child classes
void AIngredientBaseClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

}

// Simple getter for the movement component
UPawnMovementComponent* AIngredientBaseClass::GetMovementComponent() const
{
	return MoveComponent;
}

//Pointless implementations, should be overridden by children
void AIngredientBaseClass::MoveX(float magnitude){}

void AIngredientBaseClass::MoveY(float magnitude){}