#pragma once
#include "CoreMinimal.h"
#include "EQuestTakeoverOperation.generated.h"

UENUM(BlueprintType)
enum class EQuestTakeoverOperation : uint8 {
    Reset,
    Takeover,
};

