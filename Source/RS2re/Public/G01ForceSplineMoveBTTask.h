#pragma once
#include "CoreMinimal.h"
#include "EAISpeed.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAISpeed -FallbackName=EAISpeed
#include "ForceSplineMoveBTTask_StandardAISystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=StandardAISystem -ObjectName=ForceSplineMoveBTTask_StandardAISystem -FallbackName=ForceSplineMoveBTTask_StandardAISystem
#include "G01ForceSplineMoveBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01ForceSplineMoveBTTask : public UForceSplineMoveBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAISpeed MoveSpeed;
    
    UG01ForceSplineMoveBTTask();

};

