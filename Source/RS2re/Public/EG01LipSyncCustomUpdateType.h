#pragma once
#include "CoreMinimal.h"
#include "EG01LipSyncCustomUpdateType.generated.h"

UENUM(BlueprintType)
enum class EG01LipSyncCustomUpdateType : uint8 {
    Auto,
    Manual,
    Voice,
};

