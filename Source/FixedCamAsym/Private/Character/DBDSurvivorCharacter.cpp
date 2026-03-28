// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/DBDSurvivorCharacter.h"
#include "DBDDebugHelper.h"

void ADBDSurvivorCharacter::BeginPlay()
{
	Super::BeginPlay();
	Debug::DebugPrint(TEXT("Survivor - Working!"));
}