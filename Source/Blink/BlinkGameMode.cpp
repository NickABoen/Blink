// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "BlinkGameMode.h"
#include "BlinkPlayerController.h"
#include "BlinkCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABlinkGameMode::ABlinkGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ABlinkPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}