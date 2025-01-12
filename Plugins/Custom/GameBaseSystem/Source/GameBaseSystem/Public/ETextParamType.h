#pragma once
#include "CoreMinimal.h"
#include "ETextParamType.generated.h"

UENUM(BlueprintType)
enum class ETextParamType : uint8 {
    None,
    Speaker,
    TextContent,
};

