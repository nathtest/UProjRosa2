#pragma once
#include "CoreMinimal.h"
#include "EG01DialogSoundTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01DialogSoundTypeEnum : uint8 {
    DEFAULT,
    ACQUIRED,
    SNATCH,
    OK,
    WORLDMAP,
    DISPOSEOFITEM,
    EMPERORCHOICE,
    AUTOREFILLON,
    AUTOREFILLOFF,
    NONE,
};

