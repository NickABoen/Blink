// Fill out your copyright notice in the Description page of Project Settings.

#include "StaticMeshTilingComponent.h"


// Sets default values for this component's properties
UStaticMeshTilingComponent::UStaticMeshTilingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStaticMeshTilingComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UStaticMeshTilingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

UStaticMeshComponent* UStaticMeshTilingComponent::CreateStaticMesh(FVector position, USceneComponent* parent, UStaticMesh* mesh)
{
	//UStaticMeshComponent* NewMeshComponent = ConstructObject<UStaticMeshComponent>(UStaticMeshComponent::StaticClass(), parent, TEXT("TiledMesh"));
	UStaticMeshComponent* NewMeshComponent = NewObject<UStaticMeshComponent>(this, UStaticMeshComponent::StaticClass(), TEXT("TiledMesh"));

	if (NewMeshComponent)
	{
		NewMeshComponent->SetupAttachment(parent);
		NewMeshComponent->SetStaticMesh(mesh);
		NewMeshComponent->SetRelativeLocation(position);
	}

	return NewMeshComponent;
}
