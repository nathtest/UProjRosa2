#pragma once
#include "CoreMinimal.h"
#include "ESeqActorVisibleType.generated.h"

UENUM(BlueprintType)
enum class ESeqActorVisibleType : uint8 {
    Keep,
    Visible,
    Hidden,
};

