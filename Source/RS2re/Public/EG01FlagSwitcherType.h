#pragma once
#include "CoreMinimal.h"
#include "EG01FlagSwitcherType.generated.h"

UENUM(BlueprintType)
enum class EG01FlagSwitcherType : uint8 {
    Once,
    Toggle,
    NUM,
};

