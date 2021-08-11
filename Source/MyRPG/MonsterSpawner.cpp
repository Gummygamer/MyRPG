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

	float x, y;
	float z = GetActorLocation().Z;

	Super::BeginPlay();

	int i;

	for (i = 0; i < amount; i++)
	{
		x = FMath::RandRange(minX, maxX);
		y = FMath::RandRange(minY, maxY);

		FVector loc = FVector(x, y, z);
		FRotator rot = FRotator(0.0f, 0.0f, 0.0f);

		GetWorld()->SpawnActor(monster, &loc, &rot);
	}

	
}

// Called every frame
void AMonsterSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

