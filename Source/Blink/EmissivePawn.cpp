// Fill out your copyright notice in the Description page of Project Settings.

#include "EmissivePawn.h"


// Sets default values
AEmissivePawn::AEmissivePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEmissivePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEmissivePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEmissivePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

