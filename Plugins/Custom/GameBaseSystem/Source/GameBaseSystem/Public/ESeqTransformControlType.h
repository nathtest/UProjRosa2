#pragma once
#include "CoreMinimal.h"
#include "ESeqTransformControlType.generated.h"

UENUM(BlueprintType)
enum class ESeqTransformControlType : uint8 {
    None,
    Override,
    Add,
    Sub,
};

