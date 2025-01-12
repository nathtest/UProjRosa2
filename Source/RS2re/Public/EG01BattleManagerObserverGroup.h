#pragma once
#include "CoreMinimal.h"
#include "EG01BattleManagerObserverGroup.generated.h"

UENUM(BlueprintType)
enum class EG01BattleManagerObserverGroup : uint8 {
    Internal,
    Manager,
    External,
    Num,
};

