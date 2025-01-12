#pragma once
#include "CoreMinimal.h"
#include "EG01PlayerType.generated.h"

UENUM(BlueprintType)
enum class EG01PlayerType : uint8 {
    HUMAN,
    SHIP,
    BOAT,
    STONESHIP,
    NUM,
};

