// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ReactiveMaterial.h"
#include "OpaqueMaterial.generated.h"

class AActor;

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLINK_API UOpaqueMaterial : public UReactiveMaterial
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	virtual void HandleProjectileHit(AEmissive* EmissiveActor, FVector HitLocation, FVector HitNormal, FHitResult Hit) override;

	UFUNCTION(BlueprintCallable)
	virtual void HandlePawnHit(AEmissivePawn* EmissivePawn, FVector HitLocation, FVector HitNormal, FHitResult Hit) override;

};
