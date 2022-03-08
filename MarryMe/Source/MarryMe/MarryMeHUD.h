// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MarryMeHUD.generated.h"

UCLASS()
class AMarryMeHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMarryMeHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

