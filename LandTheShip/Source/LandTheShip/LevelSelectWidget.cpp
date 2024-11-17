// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelSelectWidget.h"

void ULevelSelectWidget::NativeConstruct()
{
	Super::NativeConstruct();
	levelsOnorOff.Reserve(6);
	levelsOnorOff[0] = true;
	for (int i = 1; i >= levelsOnorOff.Num(); i++)
	{
		levelsOnorOff[i] = false;
	}
}
