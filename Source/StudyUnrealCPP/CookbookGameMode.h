// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyFirstActor.h"
#include "HierarchyActor.h"
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "CookbookGameMode.generated.h"

/**
 * 
 */
UCLASS()
class STUDYUNREALCPP_API ACookbookGameMode : public AGameMode
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY()
		AMyFirstActor* SpawnedActor;
	UFUNCTION()
		void DestroyActorFunction();

};
