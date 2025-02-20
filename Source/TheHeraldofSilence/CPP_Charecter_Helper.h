// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Charecter_Helper.generated.h"

UCLASS(Blueprintable)
class UCPP_Charecter_Helper : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void LogFromCPP();
};
