// Fill out your copyright notice in the Description page of Project Settings.


#include "UnalivePlayer.h"


AUnalivePlayer::AUnalivePlayer() {

    OnActorBeginOverlap.AddDynamic(this, &AUnalivePlayer::OnOverlapBegin);
}

void AUnalivePlayer::BeginPlay() {

}

void AUnalivePlayer::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor && (OtherActor != this)) {
        
        Player = Cast<ASDET_ChallengeCharacter>(OtherActor);
        
        unalivePlayer();
    }
}

void AUnalivePlayer::unalivePlayer() {
    if (Player != nullptr) {
        DamageAmount = Player->GetMaxHealth();
        Player->DamageCharacter(DamageAmount);
    }
}
