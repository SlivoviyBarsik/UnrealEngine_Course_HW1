// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor_Task4.h"

// Sets default values
AActor_Task4::AActor_Task4()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActor_Task4::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AActor_Task4::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	curr_time += DeltaTime;
	if (curr_time >= time_until_disappear){
		this->SetActorHiddenInGame(true);
	}
}

