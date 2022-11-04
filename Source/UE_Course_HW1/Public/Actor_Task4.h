// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor_Task4.generated.h"

UCLASS()
class UE_COURSE_HW1_API AActor_Task4 : public AActor
{
	GENERATED_BODY()
	
	
public:	
	// Sets default values for this actor's properties
	AActor_Task4();

	float curr_time = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float time_until_disappear = 3.0;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	void Tick(float DeltaTime) override;

};
