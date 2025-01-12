#pragma once
#include "CoreMinimal.h"
#include "EG01AddedPotentUsageEnum.generated.h"

UENUM(BlueprintType)
enum class EG01AddedPotentUsageEnum : uint8 {
    AILMENT_GRANT,
    AILMENT_DEPRIVATION,
    ENHANCE_GRANT,
    ENHANCE_DEPRIVATION,
    EXTERNAL_GRANT,
    EXTERNAL_DEPRIVATION,
};

