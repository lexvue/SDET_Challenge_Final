// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "SDET_ChallengeCharacter.h"
#include "HealPlayer.generated.h"

/**
 * 
 */
UCLASS()
class SDET_CHALLENGE_API AHealPlayer : public ATriggerBox
{
	GENERATED_BODY()
	
protected:
    UPROPERTY(EditAnywhere)
    float HealAmount;
    
public:
    AHealPlayer();
    
    virtual void BeginPlay();
    
    UPROPERTY(EditAnywhere)
    ASDET_ChallengeCharacter* Player;
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void healPlayer();
    

};
