#pragma once
#include "CoreMinimal.h"
#include "EVFXATAPlayState.generated.h"

UENUM(BlueprintType)
enum class EVFXATAPlayState : uint8 {
    None,
    ModelSync,
    Playing,
    Stopped,
};

