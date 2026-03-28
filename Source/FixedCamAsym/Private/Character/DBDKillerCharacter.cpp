// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/DBDKillerCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "DBDDebugHelper.h"

ADBDKillerCharacter::ADBDKillerCharacter()
{
	HeadSocket = "HeadSocket";
	LeftHandSocket = "LHSocket";
	RightHandSocket = "RHSocket";

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(GetMesh(), HeadSocket);

}

void ADBDKillerCharacter::BeginPlay()
{
	Super::BeginPlay();
	Debug::DebugPrint(TEXT("Killer - Working!"));
}