// Fill out your copyright notice in the Description page of Project Settings.


#include "IngredientDeathZone.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AIngredientDeathZone::AIngredientDeathZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	SetRootComponent(Collider);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	Mesh->SetupAttachment(Collider);
}

// Called when the game starts or when spawned
void AIngredientDeathZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIngredientDeathZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

