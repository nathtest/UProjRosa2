#pragma once
#include "CoreMinimal.h"
#include "EBtTransitionType.generated.h"

UENUM(BlueprintType)
enum class EBtTransitionType : uint8 {
    NONE,
    CaptureScreen,
    Boss,
    BlackScreen,
    WhiteScreen,
    NUM,
};

