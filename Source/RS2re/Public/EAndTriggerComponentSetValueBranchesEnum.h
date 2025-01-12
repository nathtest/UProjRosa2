#pragma once
#include "CoreMinimal.h"
#include "EAndTriggerComponentSetValueBranchesEnum.generated.h"

UENUM(BlueprintType)
enum class EAndTriggerComponentSetValueBranchesEnum : uint8 {
    TrigOn,
    TrigOff,
    Default,
};

