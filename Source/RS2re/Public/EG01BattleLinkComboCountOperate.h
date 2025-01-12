#pragma once
#include "CoreMinimal.h"
#include "EG01BattleLinkComboCountOperate.generated.h"

UENUM(BlueprintType)
enum class EG01BattleLinkComboCountOperate : uint8 {
    Reset,
    Continue,
    Add,
    Num,
};

