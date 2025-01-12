#pragma once
#include "CoreMinimal.h"
#include "ESaveDataSlotNameType.generated.h"

UENUM(BlueprintType)
enum class ESaveDataSlotNameType : uint8 {
    Unknown,
    Index,
    Name,
};

