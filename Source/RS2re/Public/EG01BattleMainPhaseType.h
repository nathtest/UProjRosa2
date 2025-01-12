#pragma once
#include "CoreMinimal.h"
#include "EG01BattleMainPhaseType.generated.h"

UENUM(BlueprintType)
enum class EG01BattleMainPhaseType : uint8 {
    Inactive,
    DataCreate,
    DataLoad,
    DataLoadWait,
    DataSetting,
    BattleStart,
    BattleTurnStart,
    BattleCommand,
    BattleTask,
    BattlePlaybackStart,
    BattlePlayback,
    BattlePlaybackEnd,
    BattleTurnEnd,
    BattleTurnElapse,
    BattleWin,
    BattleEscape,
    BattleLose,
    BattleResult,
    BattleResultSpell,
    BattleResultAbility,
    BattleAbort,
    BattleArtsSeal,
    BattleEnd,
    DataDelete,
};

