#pragma once
#include "CoreMinimal.h"
#include "ESavePropertyResetFlags.generated.h"

UENUM()
enum class ESavePropertyResetFlags {
    None,
    Always = -1,
    NormalLoad = 1,
    NewGame01,
    NewGame02 = 4,
    NewGameAlways = 6,
    DebugFlow01 = 8,
    DebugFlow02 = 16,
    DebugFlow03 = 32,
    DirectlyOpen = 64,
    DebugFlowAlways = 56,
};

