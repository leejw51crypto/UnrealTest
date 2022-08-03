// Copyright Epic Games, Inc. All Rights Reserved.

#include "HelloGameMode.h"
#include "HelloHUD.h"
#include "HelloCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHelloGameMode::AHelloGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHelloHUD::StaticClass();
}
