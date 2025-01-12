#pragma once
#include "CoreMinimal.h"
#include "EUiNotify.generated.h"

UENUM(BlueprintType)
enum class EUiNotify : uint8 {
    NONE,
    BATTLE,
    BATTLE_COMMAND,
    PARAMETER,
    ROOM,
    INPUT,
    PLAYER,
    FIELD_ENEMY,
    BATTLE_UI,
    QUEST,
    OBJECTIVE,
    SEQUENCE,
    DROPITEM,
    FIELD_UI,
    MESSAGE,
    SCREEN,
    GENERATOR,
    LEVELTRANSITION,
    BATTLE_START,
    BATTLE_END,
    NUM,
};

