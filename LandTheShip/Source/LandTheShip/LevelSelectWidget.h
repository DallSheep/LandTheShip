// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Containers/Map.h"
#include "LevelSelectWidget.generated.h"

/**
 * 
 */
UCLASS()
class LANDTHESHIP_API ULevelSelectWidget : public UUserWidget
{
	GENERATED_BODY()
	
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Variable")
	bool buttonOn;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Variable")
	TMap<int, bool> levelsOnorOff;

public:
	virtual void NativeConstruct() override;
};
