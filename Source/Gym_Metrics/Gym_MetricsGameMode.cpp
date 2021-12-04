// Copyright Epic Games, Inc. All Rights Reserved.

#include "Gym_MetricsGameMode.h"
#include "Gym_MetricsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGym_MetricsGameMode::AGym_MetricsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/Anim_test")); //ThirdPersonCharacter 
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
