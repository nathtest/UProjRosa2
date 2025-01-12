#pragma once
#include "CoreMinimal.h"
#include "ERecoveryPointType.generated.h"

UENUM(BlueprintType)
enum class ERecoveryPointType : uint8 {
    Always,
    Once,
    ResetByLevelMove,
};

