// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/DBDKillerCharacter.h"
#include "DBDDebugHelper.h"

void ADBDKillerCharacter::BeginPlay()
{
	Super::BeginPlay();
	Debug::DebugPrint(TEXT("Killer - Working!"));
}