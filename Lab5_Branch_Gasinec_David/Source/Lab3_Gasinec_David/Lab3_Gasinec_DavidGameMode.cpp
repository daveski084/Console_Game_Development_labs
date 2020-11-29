// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab3_Gasinec_DavidGameMode.h"
#include "Lab3_Gasinec_DavidCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALab3_Gasinec_DavidGameMode::ALab3_Gasinec_DavidGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
