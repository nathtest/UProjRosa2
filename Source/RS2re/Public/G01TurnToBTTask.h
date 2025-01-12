#pragma once
#include "CoreMinimal.h"
#include "TurnToBTTask_StandardAISystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=StandardAISystem -ObjectName=TurnToBTTask_StandardAISystem -FallbackName=TurnToBTTask_StandardAISystem
#include "G01TurnToBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01TurnToBTTask : public UTurnToBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UG01TurnToBTTask();

};

