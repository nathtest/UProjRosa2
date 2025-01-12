#pragma once
#include "CoreMinimal.h"
#include "EG01TextPlayerGenderOverride.generated.h"

UENUM(BlueprintType)
enum class EG01TextPlayerGenderOverride : uint8 {
    None,
    Male,
    Female,
    Unknown,
};

