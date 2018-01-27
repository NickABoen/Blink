// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReactiveMaterial.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLINK_API UReactiveMaterial : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UReactiveMaterial();

protected:
	// Material that base class should override
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UMaterial* m_default_material;
	
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Sets the provided static mesh components material to the material assigned to this Reactive Material
	UFUNCTION(BlueprintCallable)
	virtual void SetMeshMaterial(UStaticMeshComponent* static_mesh_component);

	// Have the ReactiveMaterial handle player collision
	UFUNCTION(BlueprintCallable)
	virtual void HandlePlayerHit(APawn const * player_pawn, APlayerController const*  player_controller);

};
