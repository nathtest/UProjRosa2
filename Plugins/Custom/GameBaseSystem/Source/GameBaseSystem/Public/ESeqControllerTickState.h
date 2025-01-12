#pragma once
#include "CoreMinimal.h"
#include "ESeqControllerTickState.generated.h"

UENUM(BlueprintType)
enum class ESeqControllerTickState : uint8 {
    None,
    Update,
    EndDelay,
    End,
};

