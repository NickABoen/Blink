// Fill out your copyright notice in the Description page of Project Settings.

#include "Emissive.h"


// Sets default values
AEmissive::AEmissive()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEmissive::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEmissive::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsMoving() && ReadyForNewTrace) 
	{
		// TODO:
		// Keep tracing
	}
}

