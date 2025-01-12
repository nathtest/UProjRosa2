#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAutoSePartsType.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADAutoSePartsType {
    enum Type {
        Invalid = -1,
        Foot = 0,
        Arm,
        Wing,
        Swing,
        Body,
    };
}

