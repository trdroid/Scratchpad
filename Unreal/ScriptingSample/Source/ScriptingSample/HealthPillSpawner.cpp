// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthPillSpawner.h"
#include "HealthPill.h"
#include "Classes/Kismet/KismetMathLibrary.h"
// Grant access to the character to make sure a pill is spawned ONLY if our character enters the SpawnVolume
#include "ScriptingSampleCharacter.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"


// Sets default values
AHealthPillSpawner::AHealthPillSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpawningVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnerVolumeBox"));

	// Set the SpawningVolume (the UBoxComponent) as the RootComponent of this class to make this object to be a box volume. 
	RootComponent = (USceneComponent*)SpawningVolume;

	// This establishes the item to spawn is a HealthPill
	//ItemToSpawn = AHealthPill::StaticClass();
}

// Called when the game starts or when spawned
void AHealthPillSpawner::BeginPlay()
{
	Super::BeginPlay();
	SpawnHealthPills();
}

// Called every frame
void AHealthPillSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Returns a random point in a Spawning Volume. 
FVector AHealthPillSpawner::GetRandomPointInVolume()
{
	FVector Origin = SpawningVolume->Bounds.Origin;
	FVector Extent = SpawningVolume->Bounds.BoxExtent;

	// Returns a random vector around the origin within the extent
	return UKismetMathLibrary::RandomPointInBoundingBox(Origin, Extent);
}

void AHealthPillSpawner::SpawnHealthPills()
{
	// Check to see if the ItemToSpawn is assigned an item that has to be spawned (assigned from the Blueprint Editor)
	if (ItemToSpawn != NULL) 
	{
		// UWorld is used to spawn the object. 
		UWorld* const World = GetWorld();

		if (World)
		{
			FVector SpawnLocation = GetRandomPointInVolume();
			
			// Create a random rotation for the HealthPill
			FRotator SpawnRotation;

			SpawnRotation.Pitch = FMath::FRand() * 360.0f;
			SpawnRotation.Roll = FMath::FRand() * 360.0f;
			SpawnRotation.Yaw = FMath::FRand() * 360.0f;

			AHealthPill* SpawnedHealthPill = World->SpawnActor<AHealthPill>(ItemToSpawn, SpawnLocation, SpawnRotation);
		}
	}
}

void AHealthPillSpawner::NotifyActorBeginOverlap(AActor* otherActor)
{
	// Spawn the HealthPill ONLY if our character enters (but not the AI character, clouds)
	// The following cast returns null for any other non-player character that enters the SpawnVolume 
	AScriptingSampleCharacter* player = Cast<AScriptingSampleCharacter>(otherActor);

	if (player)
	{
		// -1 is the key, 1 is the TimeToDisplay
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("%s entered the volume!!!"), *(otherActor->GetName())));
		SpawnHealthPills();

		// GetWorld() is a global function that returns a reference to the world that the game is in. 
		UWorld* World = GetWorld();

		if (World != nullptr)
		{
			// To access the delegate get the GameMode object (i.e. an instance of AScriptingSampleGameMode)

			// First, get the GameMode base object by passing in the reference to the World to UGameplayStatics::GetGameMode method
			// i.e. get the GameMode from the world
			AGameModeBase* gameModeBase = UGameplayStatics::GetGameMode(World);

			// Then cast the GameMode base object to AScriptingSampleGameMode
			AScriptingSampleGameMode* gameMode = Cast<AScriptingSampleGameMode>(gameModeBase);

			if (gameMode != nullptr)
			{
				gameMode->VisualEffectsStart.ExecuteIfBound();
			}
		}
	}
}

void AHealthPillSpawner::NotifyActorEndOverlap(AActor* otherActor) 
{
	AScriptingSampleCharacter* player = Cast<AScriptingSampleCharacter>(otherActor);

	if (player)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("%s exited the volume!!!"), *(otherActor->GetName())));
		SpawnHealthPills();

		// GetWorld() is a global function that returns a reference to the world that the game is in. 
		UWorld* World = GetWorld();

		if (World != nullptr)
		{
			// To access the delegate get the GameMode object (i.e. an instance of AScriptingSampleGameMode)

			// First, get the GameMode base object by passing in the reference to the World to UGameplayStatics::GetGameMode method
			// i.e. get the GameMode from the world
			AGameModeBase* gameModeBase = UGameplayStatics::GetGameMode(World);

			// Then cast the GameMode base object to AScriptingSampleGameMode
			AScriptingSampleGameMode* gameMode = Cast<AScriptingSampleGameMode>(gameModeBase);

			if (gameMode != nullptr)
			{
				gameMode->VisualEffectsStop.ExecuteIfBound();
			}
		}
	}
}
