#pragma once
#include "CoreMinimal.h"
#include "EFXLoadType.generated.h"

UENUM(BlueprintType)
enum class EFXLoadType : uint8 {
    None,
    Default,
    PreLoadBP,
    Create,
};

