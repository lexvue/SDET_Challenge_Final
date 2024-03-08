// Fill out your copyright notice in the Description page of Project Settings.


#include "DamagePlayer.h"

ADamagePlayer::ADamagePlayer() {

    OnActorBeginOverlap.AddDynamic(this, &ADamagePlayer::OnOverlapBegin);
}

void ADamagePlayer::BeginPlay() {

    DamageAmount = 5.f;

}

void ADamagePlayer::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor && (OtherActor != this)) {
        
        //FString DebugMsg = FString::Printf(TEXT("Damage by: %f "), DamageAmount);
        //GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Yellow, DebugMsg);
        //UE_LOG(LogTemp, Warning, TEXT("Damage by: %f "), DamageAmount);
        
        Player = Cast<ASDET_ChallengeCharacter>(OtherActor);
        
        damagePlayer();
    }
}

void ADamagePlayer::damagePlayer() {
    if (Player != nullptr) {
        Player->DamageCharacter(DamageAmount);
    }
}
