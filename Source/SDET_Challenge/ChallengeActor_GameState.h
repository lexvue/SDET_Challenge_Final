// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SDET_ChallengeCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "ChallengeActor_GameState.generated.h"

UCLASS()
class SDET_CHALLENGE_API AChallengeActor_GameState : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChallengeActor_GameState();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UFUNCTION()
    void DisplayDeathScreenEvent();
    
    ASDET_ChallengeCharacter* PlayerState;
    
};
