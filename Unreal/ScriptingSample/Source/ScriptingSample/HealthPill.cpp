// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthPill.h"
#include "ConstructorHelpers.h"


// Sets default values
AHealthPill::AHealthPill()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HealthPillEffect = 0.0f;

	// Create an empty UStaticMeshComponent and call it "BaseMeshComponent"
	HealthPillMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");

	// Locate the asset from the UE4 Editor and assign it to the HealthPillMesh

	// Use the FObjectFinder helper to locate the asset from the UE4 Editor
	// auto was introduced in C++ 11 which infers the type of the object from the context.
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

	// Check to make sure that the MeshAsset actually refers to the UStaticMesh
	if (MeshAsset.Object != nullptr) 
	{
		HealthPillMesh->SetStaticMesh(MeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void AHealthPill::BeginPlay()
{
	Super::BeginPlay();
	
	HealthPillMesh->SetSimulatePhysics(true);
}

// Called every frame
void AHealthPill::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

