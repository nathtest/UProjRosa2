#pragma once
#include "CoreMinimal.h"
#include "ESoundLoadType.generated.h"

UENUM(BlueprintType)
enum class ESoundLoadType : uint8 {
    LOAD_NORMAL,
    LOAD_RESIDENT,
    NONE,
};

