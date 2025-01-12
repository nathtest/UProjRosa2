#pragma once
#include "CoreMinimal.h"
#include "EEventState.generated.h"

UENUM(BlueprintType)
enum class EEventState : uint8 {
    None,
    Executable,
    Playing,
    End,
};

