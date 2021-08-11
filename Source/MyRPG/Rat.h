// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Hero.h"

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Rat.generated.h"

#define RAT_HP 5
#define RAT_MP 5
#define RAT_ATTACK 5
#define RAT_DEFENSE 5

UCLASS()
class MYRPG_API ARat : public ACharacter
{
	GENERATED_BODY()

private:

	Hero* monster;

public:
	// Sets default values for this character's properties
	ARat();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
