#pragma once
#include "CoreMinimal.h"
#include "ESoundCategoryID.generated.h"

UENUM(BlueprintType)
enum class ESoundCategoryID : uint8 {
    SE,
    BGM,
    VOICE,
    NUM,
    NONE,
};

