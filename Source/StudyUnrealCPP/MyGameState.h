// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MyGameState.generated.h"

/**
 * 
 */
UCLASS()
class STUDYUNREALCPP_API AMyGameState : public AGameState
{
	GENERATED_BODY()

public:
	AMyGameState();

	UPROPERTY()
		int32 CurrentScore;

	UFUNCTION()
		void SetScore(int32 NewScore);

	UFUNCTION()
		int32 GetScore();
	
};
