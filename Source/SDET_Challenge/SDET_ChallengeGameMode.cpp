// Copyright Epic Games, Inc. All Rights Reserved.

#include "SDET_ChallengeGameMode.h"
#include "SDET_ChallengeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASDET_ChallengeGameMode::ASDET_ChallengeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
