// Fill out your copyright notice in the Description page of Project Settings.


#include "ChallengeActor_GameState.h"

// Sets default values
AChallengeActor_GameState::AChallengeActor_GameState()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChallengeActor_GameState::BeginPlay()
{
	Super::BeginPlay();
    
    UE_LOG(LogTemp, Warning, TEXT("Game State is active."));
    
    PlayerState = Cast<ASDET_ChallengeCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    if (PlayerState != nullptr) {
        PlayerState->OnPlayerDeath.AddDynamic(this, &AChallengeActor_GameState::DisplayDeathScreenEvent);
    }
    
}

// Called every frame
void AChallengeActor_GameState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChallengeActor_GameState::DisplayDeathScreenEvent() {
    //UE_LOG(LogTemp, Warning, TEXT("PLAYER DIED"));
    
    FString DebugMsg = FString::Printf(TEXT("PLAYER DIED"));
    GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Red, DebugMsg);
}
