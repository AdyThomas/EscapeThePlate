// Fill out your copyright notice in the Description page of Project Settings.


#include "HumanBaseCharacter.h"

// Sets default values
AHumanBaseCharacter::AHumanBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHumanBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHumanBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void AHumanBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

