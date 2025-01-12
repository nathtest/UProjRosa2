#pragma once
#include "CoreMinimal.h"
#include "ESaveDataState.generated.h"

UENUM(BlueprintType)
enum class ESaveDataState : uint8 {
    ReadOnly,
    ReadWrite,
};

