#pragma once
#include "CoreMinimal.h"
#include "ETextTagDelimType.generated.h"

UENUM(BlueprintType)
namespace ETextTagDelimType {
    enum Type {
        Start,
        End,
        Num,
    };
}

