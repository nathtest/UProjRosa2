#pragma once
#include "CoreMinimal.h"
#include "EG01LadderMoveType.generated.h"

UENUM(BlueprintType)
enum class EG01LadderMoveType : uint8 {
    None,
    Loop,
    UpStart,
    UpEnd,
    DownStart,
    DownEnd,
    NUM,
};

