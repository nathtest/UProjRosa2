#pragma once
#include "CoreMinimal.h"
#include "EInputObjectPriorityGroup.generated.h"

UENUM(BlueprintType)
enum class EInputObjectPriorityGroup : uint8 {
    SYSTEM,
    FIRST,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH,
    ALWAYS,
    NUM,
};

