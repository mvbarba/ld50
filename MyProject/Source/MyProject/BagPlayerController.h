// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BagPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API ABagPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ABagPlayerController();
	APawn* PawnRef;

protected:
	UFUNCTION(BlueprintCallable)
	void OnClick(); 
	virtual void BeginPlay() override;

};
