#pragma once
#include "CoreMinimal.h"
#include "AISplineMoveBTTask_StandardAISystem.h"
#include "SearchAISplineMoveBTTask_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API USearchAISplineMoveBTTask_StandardAISystem : public UAISplineMoveBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MNearPoint;
    
    USearchAISplineMoveBTTask_StandardAISystem();

};

