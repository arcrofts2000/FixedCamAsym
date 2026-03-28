// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/DBDSurvivorCharacter.h"
#include "DBDDebugHelper.h"

ADBDSurvivorCharacter::ADBDSurvivorCharacter()
{
	RightHandSocket = "RHSocket";
	LeftHandSocket = "LHSocket";

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
}

void ADBDSurvivorCharacter::BeginPlay()
{
	Super::BeginPlay();
	Debug::DebugPrint(TEXT("Survivor - Working!"));
}