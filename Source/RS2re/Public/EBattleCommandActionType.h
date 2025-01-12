#pragma once
#include "CoreMinimal.h"
#include "EBattleCommandActionType.generated.h"

UENUM(BlueprintType)
enum class EBattleCommandActionType : uint8 {
    NONE,
    SKILL,
    SPELL,
    ITEM,
    DEFENSE,
    LINK,
    NUM,
};

