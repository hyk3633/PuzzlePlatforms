// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AMovingPlatform();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	float Speed = 100.f;

	UPROPERTY(EditAnywhere, meta = (MakeEditWidget = "true"))
	FVector TargetLocation;

	void AddActiveTrigger();
	void RemoveActiveTrigger();

private:

	FVector GlobalTargetLocation;
	FVector GlobalStartLocation;

	UPROPERTY(EditAnywhere)
	int ActiveTrigger = 1;
};
