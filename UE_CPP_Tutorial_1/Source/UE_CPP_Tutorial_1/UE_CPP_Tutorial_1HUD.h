// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UE_CPP_Tutorial_1HUD.generated.h"

UCLASS()
class AUE_CPP_Tutorial_1HUD : public AHUD
{
	GENERATED_BODY()

public:
	AUE_CPP_Tutorial_1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

