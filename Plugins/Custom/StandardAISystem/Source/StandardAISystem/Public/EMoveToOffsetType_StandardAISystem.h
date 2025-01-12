#pragma once
#include "CoreMinimal.h"
#include "EMoveToOffsetType_StandardAISystem.generated.h"

UENUM(BlueprintType)
enum class EMoveToOffsetType_StandardAISystem : uint8 {
    World,
    Local,
    Both,
};

