// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "BarrelComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UBarrelComponent : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float DegreesPerSecond);

private:
	UPROPERTY(EditAnywhere)
		float MaxDEgreesPerSecond = 20.f;

	UPROPERTY(EditAnywhere)
		float MaxElevation = 40.f;

	UPROPERTY(EditAnywhere)
		float MinElevation = 0.f;
};
