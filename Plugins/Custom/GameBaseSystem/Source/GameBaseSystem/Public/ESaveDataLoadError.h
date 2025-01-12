#pragma once
#include "CoreMinimal.h"
#include "ESaveDataLoadError.generated.h"

UENUM(BlueprintType)
enum class ESaveDataLoadError : uint8 {
    NoError,
    NotFound,
    Corrupt,
    Unknown,
};

