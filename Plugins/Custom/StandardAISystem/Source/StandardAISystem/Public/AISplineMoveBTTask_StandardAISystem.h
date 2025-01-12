#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_MoveTo -FallbackName=BTTask_MoveTo
#include "ESplineMoveTypeEnum_StandardAISystem.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "AISplineMoveBTTask_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UAISplineMoveBTTask_StandardAISystem : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineMoveTypeEnum_StandardAISystem MMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAddDistance;
    
    UAISplineMoveBTTask_StandardAISystem();

};

