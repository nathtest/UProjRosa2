#pragma once
#include "CoreMinimal.h"
#include "EG01LipSyncPlayState.generated.h"

UENUM(BlueprintType)
enum class EG01LipSyncPlayState : uint8 {
    None,
    Playing,
    Pausing,
    FadeOut,
};

