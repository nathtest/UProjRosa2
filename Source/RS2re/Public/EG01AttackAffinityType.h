#pragma once
#include "CoreMinimal.h"
#include "EG01AttackAffinityType.generated.h"

UENUM(BlueprintType)
enum class EG01AttackAffinityType : uint8 {
    Normal,
    Weak,
    Resist,
    Ignore,
};

