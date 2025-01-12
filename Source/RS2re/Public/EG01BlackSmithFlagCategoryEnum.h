#pragma once
#include "CoreMinimal.h"
#include "EG01BlackSmithFlagCategoryEnum.generated.h"

UENUM(BlueprintType)
enum class EG01BlackSmithFlagCategoryEnum : uint8 {
    Developable,
    Developing,
    DevelopmentCompleted,
};

