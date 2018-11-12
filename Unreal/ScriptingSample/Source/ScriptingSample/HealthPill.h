// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HealthPill.generated.h"

UCLASS()
class SCRIPTINGSAMPLE_API AHealthPill : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealthPill();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// The amount of effect that a pill has on the health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health")
	float HealthPillEffect;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Components")
	UStaticMeshComponent* HealthPillMesh;
	
};
