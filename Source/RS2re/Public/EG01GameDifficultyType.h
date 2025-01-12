#pragma once
#include "CoreMinimal.h"
#include "EG01GameDifficultyType.generated.h"

UENUM(BlueprintType)
enum class EG01GameDifficultyType : uint8 {
    CASUAL,
    NORMAL,
    HARD,
    VERYHARD,
    ROMANCING,
};

