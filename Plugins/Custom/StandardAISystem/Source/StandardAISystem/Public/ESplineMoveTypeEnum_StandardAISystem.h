#pragma once
#include "CoreMinimal.h"
#include "ESplineMoveTypeEnum_StandardAISystem.generated.h"

UENUM(BlueprintType)
enum class ESplineMoveTypeEnum_StandardAISystem : uint8 {
    Normal,
    Repetition,
    EndPointWait,
    Loop,
    RepetitionLoop,
    ReverseLoop,
    Unknown,
};

