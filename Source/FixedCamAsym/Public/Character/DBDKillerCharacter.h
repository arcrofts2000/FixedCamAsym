// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/DBDBaseCharacter.h"
#include "DBDKillerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class FIXEDCAMASYM_API ADBDKillerCharacter : public ADBDBaseCharacter
{
	GENERATED_BODY()
	
	protected:
		virtual void BeginPlay() override;
};
