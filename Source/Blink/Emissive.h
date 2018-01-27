// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Emissive.generated.h"

UCLASS()
class BLINK_API AEmissive : public AActor
{
	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	AEmissive();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	bool IsMoving() { return !IsStationary; }
	
	void Stop() { IsStationary = false; }
	void Start() { IsStationary = true; }
	
private:
	bool IsStationary;
	bool ReadyForNewTrace;
	
};
