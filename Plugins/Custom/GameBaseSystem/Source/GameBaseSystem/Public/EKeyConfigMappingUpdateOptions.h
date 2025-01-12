#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigMappingUpdateOptions.generated.h"

UENUM(BlueprintType)
enum class EKeyConfigMappingUpdateOptions : uint8 {
    None,
    SwapWhenDuplicated,
};

