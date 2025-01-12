#pragma once
#include "CoreMinimal.h"
#include "EG01TextTagType.generated.h"

UENUM(BlueprintType)
enum class EG01TextTagType : uint8 {
    None,
    Normal,
    Reference,
    Num,
    Begin = None,
    End = Reference,
};

