// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ARBlueprintLibrary.h"
#include "RandomizerBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UE_CPP_TUTORIAL_1_API URandomizerBlueprintLibrary : public UARBlueprintLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Randomizer")
	static void Initialize();

    UFUNCTION(BlueprintCallable, Category = "Randomizer")
    static int DiceRoll(int sides, int number = 1);
    
    UFUNCTION(BlueprintCallable, Category = "Randomizer")
    static bool ProbabilityCheck(float probability);


};
