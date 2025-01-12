#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StandardAISystem -ObjectName=TargetMoveToBTTask_StandardAISystem -FallbackName=TargetMoveToBTTask_StandardAISystem
#include "G01TargetMoveToBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01TargetMoveToBTTask : public UTargetMoveToBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UG01TargetMoveToBTTask();

};

