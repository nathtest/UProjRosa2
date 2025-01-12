#pragma once
#include "CoreMinimal.h"
#include "EG01BuffType.generated.h"

UENUM(BlueprintType)
enum class EG01BuffType : uint8 {
    NONE,
    STR,
    DEX,
    MAG,
    LOG,
    SPD,
    STA,
    ALL,
    COUNTER,
    COMMAND_SPD,
};

