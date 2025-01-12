#pragma once
#include "CoreMinimal.h"
#include "EG01EmperorSuccessionType.generated.h"

UENUM(BlueprintType)
enum class EG01EmperorSuccessionType : uint8 {
    Dead,
    AllDead,
    Abdication,
    PeriodJump,
    ReviveEmperor,
    Unknown,
};

