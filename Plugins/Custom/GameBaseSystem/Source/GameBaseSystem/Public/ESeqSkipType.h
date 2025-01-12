#pragma once
#include "CoreMinimal.h"
#include "ESeqSkipType.generated.h"

UENUM(BlueprintType)
enum class ESeqSkipType : uint8 {
    Full,
    Section,
};

