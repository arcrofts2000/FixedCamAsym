// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/DBDBaseCharacter.h"
#include "DBDKillerCharacter.generated.h"

class UCameraComponent;

/**
 * 
 */
UCLASS()
class FIXEDCAMASYM_API ADBDKillerCharacter : public ADBDBaseCharacter
{
	GENERATED_BODY()

public:
	ADBDKillerCharacter();
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, Category = "Sockets")
	FName HeadSocket;

	UPROPERTY(BlueprintReadOnly, Category = "Sockets")
	FName RightHandSocket;

	UPROPERTY(BlueprintReadOnly, Category = "Sockets")
	FName LeftHandSocket;

	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> CameraComponent;


public:
	// Getters and Setters 
	// Adding K2 to functions for Blueprint, to keep with Epic Games standards
	UCameraComponent* GetCamera() { return this->CameraComponent; }

	UFUNCTION(BlueprintPure, meta=(DisplayName="Get Camera"))
	UCameraComponent* K2_GetCamera() { return this->GetCamera(); }
};
