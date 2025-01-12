#pragma once
#include "CoreMinimal.h"
#include "ForceSplineMoveBaseBTTask_StandardAISystem.h"
#include "SimpleForceSplineMoveBTTask_StandardAISystem.generated.h"

UCLASS(Abstract, Blueprintable)
class STANDARDAISYSTEM_API USimpleForceSplineMoveBTTask_StandardAISystem : public UForceSplineMoveBaseBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    USimpleForceSplineMoveBTTask_StandardAISystem();

};

