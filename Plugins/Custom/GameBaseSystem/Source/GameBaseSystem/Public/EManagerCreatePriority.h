#pragma once
#include "CoreMinimal.h"
#include "EManagerCreatePriority.generated.h"

UENUM(BlueprintType)
namespace EManagerCreatePriority {
    enum Type {
        TopLoad,
        PreLoad,
        Load,
        PostLoad,
        Highest,
        High,
        Normal,
        Low,
        Lowest,
        Final,
        Num,
    };
}

