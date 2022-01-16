// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_CPP_Tutorial_1GameMode.h"
#include "UE_CPP_Tutorial_1HUD.h"
#include "UE_CPP_Tutorial_1Character.h"
#include "UObject/ConstructorHelpers.h"

AUE_CPP_Tutorial_1GameMode::AUE_CPP_Tutorial_1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE_CPP_Tutorial_1HUD::StaticClass();
}
