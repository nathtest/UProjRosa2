#pragma once
#include "CoreMinimal.h"
#include "ESavePropertyResetFlagsBP.generated.h"

UENUM(BlueprintType)
enum class ESavePropertyResetFlagsBP : uint8 {
    NormalLoad,
    NewGame01,
    NewGame02,
    DebugFlow01,
    DebugFlow02,
    DebugFlow03,
    DirectlyOpen,
};

