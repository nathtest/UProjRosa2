#pragma once
#include "CoreMinimal.h"
#include "JumpBTTask_StandardAISystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=StandardAISystem -ObjectName=JumpBTTask_StandardAISystem -FallbackName=JumpBTTask_StandardAISystem
#include "G01JumpToBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01JumpToBTTask : public UJumpBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UG01JumpToBTTask();

};

