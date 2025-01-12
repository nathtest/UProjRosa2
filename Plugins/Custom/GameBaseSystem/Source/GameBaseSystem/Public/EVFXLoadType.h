#pragma once
#include "CoreMinimal.h"
#include "EVFXLoadType.generated.h"

UENUM(BlueprintType)
enum class EVFXLoadType : uint8 {
    None,
    Default,
    LevelLoad,
};

