#pragma once
#include "CoreMinimal.h"
#include "EBattleCommandMode.generated.h"

UENUM(BlueprintType)
enum class EBattleCommandMode : uint8 {
    NONE,
    STANDARD,
    DETAIL,
    NUM,
};

