#pragma once
#include "CoreMinimal.h"
#include "ESaveDataInitType.generated.h"

UENUM(BlueprintType)
enum class ESaveDataInitType : uint8 {
    Unknown,
    FlowStart,
    NewGame00,
    NewGame01,
};

