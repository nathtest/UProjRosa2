#pragma once
#include "CoreMinimal.h"
#include "EG01CharaAnimType.generated.h"

UENUM(BlueprintType)
enum class EG01CharaAnimType : uint8 {
    FIELD,
    BATTLE,
    MENU,
    EVENT,
    NUM,
};

