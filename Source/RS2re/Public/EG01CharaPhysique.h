#pragma once
#include "CoreMinimal.h"
#include "EG01CharaPhysique.generated.h"

UENUM(BlueprintType)
namespace EG01CharaPhysique {
    enum Type {
        None = -1,
        PLAYER_START = 0,
        PLAYER_POWOR = PLAYER_START,
        PLAYER_POWERLESS,
        PLAYER_END = PLAYER_POWERLESS,
        PLAYER_NUM,
        NPC_START = PLAYER_NUM,
        NPC_OLDMAN = PLAYER_NUM,
        NPC_ADULT,
        NPC_CHILD,
        NPC_SOLDIER,
        NPC_END = NPC_SOLDIER,
        NPC_NUM = NPC_CHILD,
        NUM = 6,
    };
}

