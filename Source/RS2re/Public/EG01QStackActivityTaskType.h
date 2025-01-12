#pragma once
#include "CoreMinimal.h"
#include "EG01QStackActivityTaskType.generated.h"

UENUM(BlueprintType)
enum class EG01QStackActivityTaskType : uint8 {
    Launch,
    Complete,
};

