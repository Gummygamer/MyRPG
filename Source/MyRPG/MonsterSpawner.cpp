// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterSpawner.h"

// Sets default values
AMonsterSpawner::AMonsterSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMonsterSpawner::BeginPlay()
{

	float x, y, z;

	Super::BeginPlay();

	int i;

	for (i = 0; i < amount; i++)
	{
		//choose random location in the XY plane to spawn the monster

		x = FMath::RandRange(minX, maxX);
		y = FMath::RandRange(minY, maxY);

		FVector loc;
		FRotator rot = FRotator(0.0f, 0.0f, 0.0f);

		//raycast a position on the ground

		FVector startLocation{ x, y, maxZ };

		FVector endLocation{ x, y, minZ };

		FHitResult hitResult;
		GetWorld()->LineTraceSingleByObjectType(
			OUT hitResult,
			startLocation,
			endLocation,
			FCollisionObjectQueryParams(ECollisionChannel::ECC_WorldStatic),
			FCollisionQueryParams()
		);

		//apply a offset to get a point where to actually spawn the monster

		z = hitResult.ImpactPoint.Z + offset;

		loc = FVector(x, y, z);

		GetWorld()->SpawnActor(monster, &loc, &rot);
		
	}

	
}

// Called every frame
void AMonsterSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

