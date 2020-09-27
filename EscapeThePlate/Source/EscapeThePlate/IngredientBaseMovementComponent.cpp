// Fill out your copyright notice in the Description page of Project Settings.


#include "IngredientBaseMovementComponent.h"

void UIngredientBaseMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// If no pawn owner, updated component, or we should skip
    if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime))
        return;

	// Get mvmt input
    FVector DesiredMovementThisFrame = ConsumeInputVector().GetClampedToMaxSize(1.f);

	//Perform movment only if not arbitrary
	if (!DesiredMovementThisFrame.IsNearlyZero())
	{
		FHitResult Hit;
		SafeMoveUpdatedComponent(DesiredMovementThisFrame, UpdatedComponent->GetComponentRotation(), true, Hit);

		//If we bump into something, slide along slide
		if (Hit.IsValidBlockingHit())
		{
			SlideAlongSurface(DesiredMovementThisFrame, 1.f - Hit.Time, Hit.Normal, Hit);
		}
	}
}