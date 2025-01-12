#pragma once
#include "CoreMinimal.h"
#include "ESeqSkipSectionType.generated.h"

UENUM(BlueprintType)
enum class ESeqSkipSectionType : uint8 {
    Normal,
    CheckPoint,
};

