#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "G01SearchNearPathLocationBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01SearchNearPathLocationBTTask : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UG01SearchNearPathLocationBTTask();

};

