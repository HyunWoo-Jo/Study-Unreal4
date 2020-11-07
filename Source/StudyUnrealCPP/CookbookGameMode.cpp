// Fill out your copyright notice in the Description page of Project Settings.


#include "CookbookGameMode.h"


void ACookbookGameMode::BeginPlay() {

	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, TEXT("Actor Spawning"));
	
	FTransform SpawnLocation;
	
	SpawnedActor = Cast<AMyFirstActor>(GetWorld()->SpawnActor(AMyFirstActor::StaticClass(), &SpawnLocation));

	GetWorld()->SpawnActor(AHierarchyActor::StaticClass(), &SpawnLocation);

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &ACookbookGameMode::DestroyActorFunction, 5.0f);

}

void ACookbookGameMode::DestroyActorFunction() {
	if (SpawnedActor != NULL) {
		SpawnedActor->Destroy();
	}
}