// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_Course_HW1GameMode.h"
#include "UE_Course_HW1Character.h"
#include "UObject/ConstructorHelpers.h"

AUE_Course_HW1GameMode::AUE_Course_HW1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
