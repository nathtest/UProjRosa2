#pragma once
#include "CoreMinimal.h"
#include "EG01PlayerDashType.generated.h"

UENUM(BlueprintType)
enum class EG01PlayerDashType : uint8 {
    Auto,
    Switch,
    Switch_AutoRelease,
    Push,
    NUM,
};

