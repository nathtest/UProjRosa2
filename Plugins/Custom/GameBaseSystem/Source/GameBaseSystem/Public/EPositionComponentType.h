#pragma once
#include "CoreMinimal.h"
#include "EPositionComponentType.generated.h"

UENUM(BlueprintType)
enum class EPositionComponentType : uint8 {
    PT_SPEECH_BUBBLE,
    PT_DRAW_NAME,
    PT_NUM,
    PT_NONE,
};

