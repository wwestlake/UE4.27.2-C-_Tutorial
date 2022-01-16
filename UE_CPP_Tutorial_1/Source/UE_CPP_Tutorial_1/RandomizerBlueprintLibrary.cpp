// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomizerBlueprintLibrary.h"

void URandomizerBlueprintLibrary::Initialize()
{
    double secs = FTimespan(FDateTime::Now().GetTicks()).GetTotalSeconds();
    int32 seed = (int32)(((int64)secs) % INT_MAX);
    FMath::RandInit(seed);
}

int URandomizerBlueprintLibrary::DiceRoll(int sides, int number)
{
    int result = 0;

    for (int i = 0; i < number; i++)
    {
        result += FMath::RandRange(1, sides);
    }
    return result;

}
    
bool URandomizerBlueprintLibrary::ProbabilityCheck(float probability)
{
    float num = FMath::RandRange(0.0f, 1.0f);
    return num <= probability;
}

