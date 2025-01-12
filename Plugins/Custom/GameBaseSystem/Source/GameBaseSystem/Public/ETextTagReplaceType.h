#pragma once
#include "CoreMinimal.h"
#include "ETextTagReplaceType.generated.h"

UENUM(BlueprintType)
enum class ETextTagReplaceType : uint8 {
    None,
    TextID,
    TextContent,
};

