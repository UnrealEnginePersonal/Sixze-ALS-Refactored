// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "AlsPlayerController.generated.h"

/**
 * The Base ALS Player Controller class.
 */
UCLASS()
class ALS_API AAlsPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ALS|Player Controller")
	bool IsSlomoEnabled() const;	
		
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ALS|Player Controller")
	bool IsUIVissible() const;
};
