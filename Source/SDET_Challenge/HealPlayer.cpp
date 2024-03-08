// Fill out your copyright notice in the Description page of Project Settings.


#include "HealPlayer.h"


AHealPlayer::AHealPlayer() {

    OnActorBeginOverlap.AddDynamic(this, &AHealPlayer::OnOverlapBegin);
}

void AHealPlayer::BeginPlay() {
    HealAmount = 5.f;
}

void AHealPlayer::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor && (OtherActor != this)) {
        
        //FString DebugMsg = FString::Printf(TEXT("Heal by: %f "), HealAmount);
        //GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, DebugMsg);
        //UE_LOG(LogTemp, Warning, TEXT("Heal by: %f "), HealAmount);
        
        Player = Cast<ASDET_ChallengeCharacter>(OtherActor);
        
        healPlayer();
    }
}

void AHealPlayer::healPlayer() {
    if (Player != nullptr) {
        //UE_LOG(LogTemp, Warning, TEXT("Player is not nullptr"));
        Player->HealCharacter(HealAmount);
    }
}
