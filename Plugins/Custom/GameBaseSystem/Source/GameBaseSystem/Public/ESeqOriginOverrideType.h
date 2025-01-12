#pragma once
#include "CoreMinimal.h"
#include "ESeqOriginOverrideType.generated.h"

UENUM(BlueprintType)
enum class ESeqOriginOverrideType : uint8 {
    None,
    Self,
    SlotActor,
    TargetActor,
};

