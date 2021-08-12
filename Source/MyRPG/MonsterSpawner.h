// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "MonsterSpawner.generated.h"

UCLASS()
class MYRPG_API AMonsterSpawner : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		TSubclassOf<ACharacter> monster;
	UPROPERTY(EditAnywhere)
		int amount;
	UPROPERTY(EditAnywhere)
		float minX;
	UPROPERTY(EditAnywhere)
	    float maxX;
	UPROPERTY(EditAnywhere)
		float minY;
	UPROPERTY(EditAnywhere)
		float maxY;
	UPROPERTY(EditAnywhere)
		float minZ;
	UPROPERTY(EditAnywhere)
		float maxZ;
	UPROPERTY(EditAnywhere)
		float offset;

	
public:	
	// Sets default values for this actor's properties
	AMonsterSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
