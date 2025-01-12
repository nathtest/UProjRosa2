#pragma once
#include "CoreMinimal.h"
#include "EDirectionType_StandardAISystem.generated.h"

UENUM(BlueprintType)
enum class EDirectionType_StandardAISystem : uint8 {
    Front,
    Left,
    Right,
    Back,
    Unknown,
};

