#pragma once
#include "CoreMinimal.h"
#include "EG01VFXAttachTypeSubInfo.generated.h"

UENUM(BlueprintType)
enum class EG01VFXAttachTypeSubInfo : uint8 {
    Default,
    KeepGround,
    KeepHeadUpper,
    NUM,
};

