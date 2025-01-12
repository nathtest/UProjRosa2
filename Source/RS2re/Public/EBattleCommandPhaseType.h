#pragma once
#include "CoreMinimal.h"
#include "EBattleCommandPhaseType.generated.h"

UENUM(BlueprintType)
enum class EBattleCommandPhaseType : uint8 {
    NONE,
    START,
    END,
    COMMAND_SELECT,
    ACTION_SELECT,
    TARGET_SELECT_ENEMY,
    TARGET_SELECT_PARTY,
    ESCAPE,
    FORMATION_CHANGE,
    NUM,
};

