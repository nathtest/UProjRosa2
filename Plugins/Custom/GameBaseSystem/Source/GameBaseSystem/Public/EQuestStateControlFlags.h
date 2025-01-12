#pragma once
#include "CoreMinimal.h"
#include "EQuestStateControlFlags.generated.h"

UENUM()
enum class EQuestStateControlFlags : uint32 {
    None,
    All = 4294967295,
    PendingEndRequest = 1,
    ClearLogWhenSectionRewind,
    SkipRewindProcess = 4,
    WaitFlowUpdate = 1024,
    WaitDestroy = 2048,
};

