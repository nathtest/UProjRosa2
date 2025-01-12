#pragma once
#include "CoreMinimal.h"
#include "ETextTagType.generated.h"

UENUM(BlueprintType)
namespace ETextTagType {
    enum Type {
        ReplaceTag,
        CustomTag,
        Num,
    };
}

