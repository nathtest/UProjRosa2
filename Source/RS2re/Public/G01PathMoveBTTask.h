#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "G01PathMoveBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01PathMoveBTTask : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MTargetChangeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsFly;
    
public:
    UG01PathMoveBTTask();

};

