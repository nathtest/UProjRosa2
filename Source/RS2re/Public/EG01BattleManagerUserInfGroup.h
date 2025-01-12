#pragma once
#include "CoreMinimal.h"
#include "EG01BattleManagerUserInfGroup.generated.h"

UENUM(BlueprintType)
enum class EG01BattleManagerUserInfGroup : uint8 {
    Internal,
    Manager,
    External,
    Num,
};

