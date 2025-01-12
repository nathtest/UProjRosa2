#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityDefenseType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityDefenseType : uint8 {
    Physics,
    Magic,
    Num,
};

