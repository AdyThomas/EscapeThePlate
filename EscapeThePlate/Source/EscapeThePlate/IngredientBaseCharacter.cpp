// Fill out your copyright notice in the Description page of Project Settings.


#include "IngredientBaseCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EscapeThePlateGameMode.h"
#include "Sound/SoundCue.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AIngredientBaseCharacter::AIngredientBaseCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Preset variables
	MoveSpeed = 1.0;
	TurnSpeed = 30.f;
	TiltSpeed = 30.f;
	ContaminationLevel = 0.f;
	ContaminationRate = 40.f;
	bIsDead = false;
	bIsSafe = false;
	bIsInContaminationZone = false;
	bCanPerformAbility = true;
	AbilityCooldown = 0.f;

	// Make springarm, connect to character
	//SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	//SpringArm->SetupAttachment(RootComponent);
	//SpringArm->TargetArmLength = 200.f;
	//SpringArm->bUsePawnControlRotation = true;

	// Connect camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(RootComponent);
	Camera->bUsePawnControlRotation = true;
	Camera->SetRelativeLocation(FVector(-90, 0, 90));
	Camera->SetRelativeRotation(FRotator(0, 45, 0));

	// Rotate only for turning
	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = false;

	if (MoveSound)
	{
		MoveAudioComponent = UGameplayStatics::SpawnSound2D(this, MoveSound);
	}
}

// Called every frame
void AIngredientBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bIsInContaminationZone && !bIsDead)
	{
		
		ContaminationLevel += ContaminationRate * DeltaTime;

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

	PlayerInputComponent->BindAction("Ability", IE_Pressed, this, &AIngredientBaseCharacter::ActivateAbility);
	PlayerInputComponent->BindAxis("Turn", this, &AIngredientBaseCharacter::Turn);
	PlayerInputComponent->BindAxis("Tilt", this, &AIngredientBaseCharacter::Tilt);
	PlayerInputComponent->BindAction("PauseGame", IE_Pressed, this, &AIngredientBaseCharacter::AskGameToPause);

	PlayerInputComponent->BindAction("MoveUp", IE_Pressed, this, &AIngredientBaseCharacter::UpPress);
	PlayerInputComponent->BindAction("MoveUp", IE_Released, this, &AIngredientBaseCharacter::UpRelease);
	PlayerInputComponent->BindAction("MoveDown", IE_Pressed, this, &AIngredientBaseCharacter::DownPress);
	PlayerInputComponent->BindAction("MoveDown", IE_Released, this, &AIngredientBaseCharacter::DownRelease);
	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &AIngredientBaseCharacter::LeftPress);
	PlayerInputComponent->BindAction("MoveLeft", IE_Released, this, &AIngredientBaseCharacter::LeftRelease);
	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &AIngredientBaseCharacter::RightPress);
	PlayerInputComponent->BindAction("MoveRight", IE_Released, this, &AIngredientBaseCharacter::RightRelease);
}

void AIngredientBaseCharacter::Turn(float magnitude)
{
	AddControllerYawInput(magnitude * TurnSpeed * GetWorld()->GetDeltaSeconds());
}

void AIngredientBaseCharacter::Tilt(float magnitude)
{
	AddControllerPitchInput(magnitude * TiltSpeed * GetWorld()->GetDeltaSeconds());
}

void AIngredientBaseCharacter::AskGameToPause()
{
	AEscapeThePlateGameMode* GameMode = Cast<AEscapeThePlateGameMode>(GetWorld()->GetAuthGameMode());
	GameMode->PauseGame();
}

void AIngredientBaseCharacter::KillThisIngredient()
{
	bIsDead = true;


	if(GetController())
		GetController()->UnPossess();

	GetCapsuleComponent()->SetVisibility(false, true);

	if (MoveAudioComponent)
		MoveAudioComponent->SetPaused(true);

	AEscapeThePlateGameMode* GameMode = Cast<AEscapeThePlateGameMode>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		GameMode->CharacterStatusChanged();
	}
}

void AIngredientBaseCharacter::SaveThisIngredient()
{
	bIsSafe = true;

	
	if (GetController())
		GetController()->UnPossess();

	GetCapsuleComponent()->SetVisibility(false, true);

	if(MoveAudioComponent)
		MoveAudioComponent->SetPaused(true);

	AEscapeThePlateGameMode* GameMode = Cast<AEscapeThePlateGameMode>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		GameMode->CharacterStatusChanged();
	}
}

bool AIngredientBaseCharacter::IsIngredientUsable()
{
	return !(bIsSafe || bIsDead);
}

void AIngredientBaseCharacter::ActivateAbility()
{
	if (!FMath::IsNearlyZero(AbilityCooldown) && bCanPerformAbility)
	{
		UE_LOG(LogTemp, Warning, TEXT("Ability Performed"))
		PerformAbility();
		GetWorld()->GetTimerManager().SetTimer(AbilityCooldownHandle, this, &AIngredientBaseCharacter::ResetAbility, AbilityCooldown, false);
	}
}

/*
* No ability implementation that should be overriden by children with abilities
*/
void AIngredientBaseCharacter::PerformAbility() 
{
	bCanPerformAbility = false;
}

void AIngredientBaseCharacter::ResetAbility()
{
	UE_LOG(LogTemp, Warning, TEXT("Ability Reset"))
	bCanPerformAbility = true;
}

void AIngredientBaseCharacter::CheckAndPlayMoveAudio()
{
	if (!MoveAudioComponent && MoveSound)
	{
		UE_LOG(LogTemp, Warning, TEXT("Making noise"))
		MoveAudioComponent = UGameplayStatics::SpawnSound2D(this, MoveSound);
		MoveAudioComponent->SetPaused(true);
	}

	if (MoveAudioComponent)
		if (!bIsMoveSoundPlaying)
		{
			UE_LOG(LogTemp, Warning, TEXT("Play"))
			MoveAudioComponent->SetPaused(false);
			bIsMoveSoundPlaying = true;
		}
		else if (!bUpPressed && !bDownPressed && !bLeftPressed && !bRightPressed)
		{
			UE_LOG(LogTemp, Warning, TEXT("Stop"))
			bIsMoveSoundPlaying = false;
			MoveAudioComponent->SetPaused(true);
		}
}

void AIngredientBaseCharacter::UpPress()
{
	bUpPressed = true;
	CheckAndPlayMoveAudio();
}

void AIngredientBaseCharacter::UpRelease()
{
	bUpPressed = false;
	CheckAndPlayMoveAudio();
}


void AIngredientBaseCharacter::DownPress()
{
	bDownPressed = true;
	CheckAndPlayMoveAudio();
}


void AIngredientBaseCharacter::DownRelease()
{
	bDownPressed = false;
	CheckAndPlayMoveAudio();
}


void AIngredientBaseCharacter::LeftPress()
{
	bLeftPressed = true;
	CheckAndPlayMoveAudio();
}


void AIngredientBaseCharacter::LeftRelease()
{
	bLeftPressed = false;
	CheckAndPlayMoveAudio();
}


void AIngredientBaseCharacter::RightPress()
{
	bRightPressed = true;
	CheckAndPlayMoveAudio();
}


void AIngredientBaseCharacter::RightRelease()
{
	bRightPressed = false;
	CheckAndPlayMoveAudio();
}

//Pointless implementations, should be overridden by children
void AIngredientBaseCharacter::MoveX(float magnitude) {}
void AIngredientBaseCharacter::MoveY(float magnitude) {}
void AIngredientBaseCharacter::PerformInteraction() {}
