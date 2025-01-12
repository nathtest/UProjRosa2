#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "ChangeVisibilityBTTask.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UChangeVisibilityBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MVisibility;
    
    UChangeVisibilityBTTask();

};

