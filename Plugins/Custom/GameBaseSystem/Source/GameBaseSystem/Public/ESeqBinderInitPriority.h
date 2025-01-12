#pragma once
#include "CoreMinimal.h"
#include "ESeqBinderInitPriority.generated.h"

UENUM(BlueprintType)
enum class ESeqBinderInitPriority : uint8 {
    Fast,
    Late,
};

