#pragma once
#include "CoreMinimal.h"
#include "EAchievementUnlockType.generated.h"

UENUM(BlueprintType)
enum class EAchievementUnlockType : uint8 {
    Bool,
    Count,
    NUM,
};

