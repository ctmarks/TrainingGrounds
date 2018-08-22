// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "TrainingGroundsHUD.generated.h"

UCLASS()
class ATrainingGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATrainingGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

