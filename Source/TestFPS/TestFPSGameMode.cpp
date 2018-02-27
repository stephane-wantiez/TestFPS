// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestFPSGameMode.h"
#include "TestFPSHUD.h"
#include "TestFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestFPSGameMode::ATestFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestFPSHUD::StaticClass();
}
