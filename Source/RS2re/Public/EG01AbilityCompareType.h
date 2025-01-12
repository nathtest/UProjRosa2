#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityCompareType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityCompareType : uint8 {
    Less,
    Greater,
    LessorEqual,
    GreaterorEqual,
    Equal,
};

