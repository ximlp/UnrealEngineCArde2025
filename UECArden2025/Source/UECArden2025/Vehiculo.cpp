// Fill out your copyright notice in the Description page of Project Settings.


#include "Vehiculo.h"

// Sets default values
AVehiculo::AVehiculo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VehicleColor = FColor::White;
	Speed = 100.0f;
	Fuel = 50.0f;
}

// Called when the game starts or when spawned
void AVehiculo::BeginPlay()
{
	Super::BeginPlay();
	Move();
	
}

// Called every frame
void AVehiculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVehiculo::Move()
{
	UE_LOG(LogTemp, Warning, TEXT("The vehicle is moving at speed"), Speed);
}