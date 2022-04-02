// Fill out your copyright notice in the Description page of Project Settings.


#include "BagPlayerController.h"

ABagPlayerController::ABagPlayerController()
{
	PrimaryActorTick.bCanEverTick = true; 
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void ABagPlayerController::BeginPlay()
{
	PawnRef = GetPawn();
}

void ABagPlayerController::OnClick()
{
	FHitResult hit; 
	GetHitResultUnderCursor(ECC_PhysicsBody, false, hit);
}