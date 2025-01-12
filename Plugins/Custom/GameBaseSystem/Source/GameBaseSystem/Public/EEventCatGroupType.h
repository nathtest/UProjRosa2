#pragma once
#include "CoreMinimal.h"
#include "EEventCatGroupType.generated.h"

UENUM(BlueprintType)
enum class EEventCatGroupType : uint8 {
    None,
    MainCategory,
    SubCategory,
    SubGroup,
};

