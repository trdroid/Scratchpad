// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "HealthPillSpawner.generated.h"

UCLASS()
class SCRIPTINGSAMPLE_API AHealthPillSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealthPillSpawner();
	
	// As this function would not be used in the Blueprint Editor (for example it would not be executed from within the Blueprint Editor)
	// so marking it as BlueprintPure makes it relatively more efficient. 

	// Gets a random point in a Spawning Volume where a HealthPill can be placed
	UFUNCTION(BlueprintPure, Category="Spawning")
	FVector GetRandomPointInVolume();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// The following includes a forward reference to "AHealthPill" (by specifying class AHealthPill) to avoid including its header file

	// The type of item that the Spawner has to spawn
	UPROPERTY(EditAnyWhere, Category="Spawning")
	TSubclassOf<class AHealthPill> ItemToSpawn;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// The following also uses a forward declaration
	// The Spawner component should not be modified from the Blueprint; Hence "BlueprintReadOnly"

	// The SpawningVolume component refers to its visual representation/the geometry/the shape of the volume within which 
	// the HealthPins would have to be spawned. 
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category="Spawning", meta=(AllowPrivateAccess="true"))
	class UBoxComponent* SpawningVolume;
	
	// This function spawns HealthPills
	// Since this function should not be exposed to the Blueprint Editor, it is not marked as a UFUNCTION
	void SpawnHealthPills();

	// Event associated with another actor entering the volume
	virtual void NotifyActorBeginOverlap(AActor* otherActor) override; 

	// Event associated with another actor exiting the volume
	virtual void NotifyActorEndOverlap(AActor* otherActor) override;
};
