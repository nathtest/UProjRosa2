#pragma once
#include "CoreMinimal.h"
#include "EJumpState_StandardAISystem.generated.h"

UENUM(BlueprintType)
enum class EJumpState_StandardAISystem : uint8 {
    Standby,
    Jumped,
    Landing,
};

