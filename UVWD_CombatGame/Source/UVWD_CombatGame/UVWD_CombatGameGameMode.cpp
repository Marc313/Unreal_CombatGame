// Copyright Epic Games, Inc. All Rights Reserved.

#include "UVWD_CombatGameGameMode.h"
#include "UVWD_CombatGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUVWD_CombatGameGameMode::AUVWD_CombatGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
