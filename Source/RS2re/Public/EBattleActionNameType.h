#pragma once
#include "CoreMinimal.h"
#include "EBattleActionNameType.generated.h"

UENUM(BlueprintType)
enum class EBattleActionNameType : uint8 {
    NONE,
    PARTY,
    ENEMY,
    NUM,
};

