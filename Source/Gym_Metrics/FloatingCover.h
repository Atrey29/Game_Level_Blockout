// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingCover.generated.h"

UCLASS()
class GYM_METRICS_API AFloatingCover : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFloatingCover();

	UPROPERTY(EditAnywhere)
	AActor* CameraFollow;

	UPROPERTY(VisibleAnywhere);
	UStaticMeshComponent* VisualMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor");
	float FloatSpeed = 120.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor");
	float FloatRotation = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor");
	FVector StartPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor");
	FVector EndPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor");
	float speed;

	bool PositionFlag{ true };

	bool DetectionFlag{ false };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ActorMovementAtoB(FVector StartPosition, FVector EndPosition, float DeltaTime, float MovementSpeed);

	void ActorRotatorAtoB(FVector StartPosition, FVector EndPosition, float DeltaTime);

	void DetectObjects();
};
