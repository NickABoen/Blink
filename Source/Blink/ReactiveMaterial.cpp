// Fill out your copyright notice in the Description page of Project Settings.

#include "ReactiveMaterial.h"


// Sets default values for this component's properties
UReactiveMaterial::UReactiveMaterial()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UReactiveMaterial::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UReactiveMaterial::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UReactiveMaterial::SetMeshMaterial(UStaticMeshComponent* static_mesh_component)
{
	static_mesh_component->SetMaterial(0, m_default_material);
	// ...
}

void UReactiveMaterial::HandleProjectileHit(AEmissive* EmissiveActor, FVector HitLocation, FVector HitNormal, FHitResult Hit) {}

void UReactiveMaterial::HandlePawnHit(AEmissivePawn* EmissivePawn, FVector HitLocation, FVector HitNormal, FHitResult Hit) {}
