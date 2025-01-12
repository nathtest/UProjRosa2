#pragma once
#include "CoreMinimal.h"
#include "EG01OptionMenuAffectScopeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01OptionMenuAffectScopeEnum : uint8 {
    ALL,
    SINGLE,
    NONE,
};

