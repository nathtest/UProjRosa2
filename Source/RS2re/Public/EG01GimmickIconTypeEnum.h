#pragma once
#include "CoreMinimal.h"
#include "EG01GimmickIconTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01GimmickIconTypeEnum : uint8 {
    NONE,
    TREASUREBOX_OPEN,
    TREASUREBOX_DISCOVER,
    SAVE_POINT,
    HEAL,
    ESCAPE_POINT,
    MUSIC_ROOM,
    BED,
    THRONE,
};

