#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "ForceSplineMoveBaseBTTask_StandardAISystem.generated.h"

UCLASS(Abstract, Blueprintable)
class STANDARDAISYSTEM_API UForceSplineMoveBaseBTTask_StandardAISystem : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MRepetition;
    
    UForceSplineMoveBaseBTTask_StandardAISystem();

};

