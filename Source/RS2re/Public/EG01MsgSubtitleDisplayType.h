#pragma once
#include "CoreMinimal.h"
#include "EG01MsgSubtitleDisplayType.generated.h"

UENUM(BlueprintType)
enum class EG01MsgSubtitleDisplayType : uint8 {
    SpeakerAndContent,
    ContentOnly,
    Hidden,
};

