#pragma once
#include "CoreMinimal.h"
#include "EG01SpotScopeType.generated.h"

UENUM(BlueprintType)
enum class EG01SpotScopeType : uint8 {
    Always,
    Once,
    Once_NoResurrect,
    NUM,
};

