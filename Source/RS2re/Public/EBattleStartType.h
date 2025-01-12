#pragma once
#include "CoreMinimal.h"
#include "EBattleStartType.generated.h"

UENUM(BlueprintType)
enum class EBattleStartType : uint8 {
    NONE,
    NORMAL_ATTACK,
    FIRST_ATTACK,
    BACK_ATTACK,
    NUM,
};

