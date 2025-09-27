// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vehiculo.generated.h"

UCLASS()
class UECARDEN2025_API AVehiculo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVehiculo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, Category = "Vehiculo")
	virtual void Move();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehiculo")
	float Speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehiculo")
	float Fuel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehiculo")
	FString VehicleName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehiculo")
	int32 Wheels;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehiculo")
	bool IsElectric;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehiculo")
	FColor VehicleColor;





};
