#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "AppBTTask.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API UAppBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UAppBTTask();

};

