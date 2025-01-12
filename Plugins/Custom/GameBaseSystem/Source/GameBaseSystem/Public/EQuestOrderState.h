#pragma once
#include "CoreMinimal.h"
#include "EQuestOrderState.generated.h"

UENUM(BlueprintType)
namespace EQuestOrderState {
    enum Type {
        OS_NONE,
        OS_NOT_ORDERED,
        OS_NOT_PROGRESS,
        OS_IN_PROGRESS = 4,
        OS_STOP_PROGRESS = 8,
        OS_FAILED_END_PROGRESS = 16,
        OS_SUCCEEDED_END_PROGRESS = 32,
        OS_SECTION_END = 64,
        Active = -66,
    };
}

