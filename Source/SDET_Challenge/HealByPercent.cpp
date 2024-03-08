// Fill out your copyright notice in the Description page of Project Settings.


#include "HealByPercent.h"

AHealByPercent::AHealByPercent() {

    OnActorBeginOverlap.AddDynamic(this, &AHealByPercent::OnOverlapBegin);
}

void AHealByPercent::BeginPlay() {
    HealPercent = (1.f/3.f);
    
    
}

void AHealByPercent::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor && (OtherActor != this)) {
        
        //FString DebugMsg = FString::Printf(TEXT("Heal Percent: %f percent"), HealPercent*100);
        //GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, DebugMsg);
        //UE_LOG(LogTemp, Warning, TEXT("Heal Percent: %f percent"), HealPercent*100);
        
        Player = Cast<ASDET_ChallengeCharacter>(OtherActor);
        
        healByPercent();
    }
}

void AHealByPercent::healByPercent() {
    if (Player != nullptr) {
        //UE_LOG(LogTemp, Warning, TEXT("Player is not nullptr"));
        Player->HealCharacterByPercent(HealPercent);
    }
}
