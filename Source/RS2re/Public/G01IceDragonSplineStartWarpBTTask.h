#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "G01IceDragonSplineStartWarpBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01IceDragonSplineStartWarpBTTask : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UG01IceDragonSplineStartWarpBTTask();

};

