#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityPartyTargetType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityPartyTargetType : uint8 {
    Myself,
    All,
    Num,
};

