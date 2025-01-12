#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityActivateType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityActivateType : uint8 {
    None,
    Learn,
    Mastery,
};

