#pragma once
#include "CoreMinimal.h"
#include "G01BgmLayer.generated.h"

UENUM(BlueprintType)
enum class G01BgmLayer : uint8 {
    FIELD,
    EVENT,
    BATTLE,
    SEQUENCE,
    APPRECIATION,
    FRONT,
    NUM,
};

