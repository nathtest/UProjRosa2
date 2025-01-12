#pragma once
#include "CoreMinimal.h"
#include "ESTAFFROLL_OPERATIONTYPE.generated.h"

UENUM(BlueprintType)
enum class ESTAFFROLL_OPERATIONTYPE : uint8 {
    DownUpScroll,
    RightLeftScroll,
    FadeInOut,
    Num,
};

