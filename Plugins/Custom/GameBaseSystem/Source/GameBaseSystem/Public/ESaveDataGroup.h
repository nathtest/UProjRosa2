#pragma once
#include "CoreMinimal.h"
#include "ESaveDataGroup.generated.h"

UENUM(BlueprintType)
enum class ESaveDataGroup : uint8 {
    Game,
    System,
    Num,
    None,
};

