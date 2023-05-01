// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseNPC.h"
#include "NPCAIController.h"
#include "NPC_GarbageMan.generated.h"

/**
 * 
 */
UCLASS()
class LUDUMDAREJAM_API ANPC_GarbageMan : public ABaseNPC
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC Settings")
		AActor* TargetLocation;

protected:

	void BeginPlay() override;

	void PrimaryBehaviour() override;

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result);

public:

private:

	FVector StartLocation = FVector::ZeroVector;

	ANPCAIController* AIController;
	
};
