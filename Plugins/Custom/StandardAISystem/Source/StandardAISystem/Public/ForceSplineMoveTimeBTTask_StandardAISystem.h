#pragma once
#include "CoreMinimal.h"
#include "SimpleForceSplineMoveBTTask_StandardAISystem.h"
#include "ForceSplineMoveTimeBTTask_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UForceSplineMoveTimeBTTask_StandardAISystem : public USimpleForceSplineMoveBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MTargetTime;
    
    UForceSplineMoveTimeBTTask_StandardAISystem();

};

