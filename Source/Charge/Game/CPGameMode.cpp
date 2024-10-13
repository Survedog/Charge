// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/CPGameMode.h"

ACPGameMode::ACPGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> DefaultPawnClassRef(TEXT("/Script/Charge.CPPlayerCharacter"));
	if (DefaultPawnClassRef.Class)
	{
		DefaultPawnClass = DefaultPawnClassRef.Class;
	}

	static ConstructorHelpers::FClassFinder<AController> PlayerControllerClassRef(TEXT("/Script/Charge.CPPlayerController"));
	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}
}
