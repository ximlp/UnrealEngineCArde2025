// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Vehiculo.h"
#include "MyVehiculo.generated.h"

/**
 * 
 */

UENUM()
enum class EVehicleBrand
{
	Toyota UMETA(DisplayName = "Toyota"),
	Ford UMETA(DisplayName = "Ford"),
};

UCLASS()
class UECARDEN2025_API AMyVehiculo : public AVehiculo
{
	GENERATED_BODY()

public:
	AMyVehiculo();

protected:
	virtual void BeginPlay() override;

public: 
	virtual void Tick(float DeltaTime) override;

	virtual void Move() override;

public: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehiculo")
	EVehicleBrand CarBrand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehiculo")
	FString CarModel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehiculo")
	FString LicensePlate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehiculo")
	AActor* Driver;
	
};
