// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class SURVIVALGAME_API UItemObject : public UObject
{
	GENERATED_BODY()

	virtual bool IsSupportedForNetworking() const override{
		return true;
	}
};
