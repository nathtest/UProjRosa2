#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BehaviorTree/BTTaskNode.h"
#include "MoveToBaseBTTask_StandardAISystem.generated.h"

UCLASS(Abstract, Blueprintable)
class STANDARDAISYSTEM_API UMoveToBaseBTTask_StandardAISystem : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFly;
    
    UMoveToBaseBTTask_StandardAISystem();

};

