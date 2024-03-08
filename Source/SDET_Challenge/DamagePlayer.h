// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "SDET_ChallengeCharacter.h"
#include "DamagePlayer.generated.h"

/**
 * 
 */
UCLASS()
class SDET_CHALLENGE_API ADamagePlayer : public ATriggerBox
{
	GENERATED_BODY()
protected:
    UPROPERTY(EditAnywhere)
    float DamageAmount;
    
public:
    ADamagePlayer();
    
    virtual void BeginPlay();
    
    ASDET_ChallengeCharacter* Player;
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void damagePlayer();
    

};
