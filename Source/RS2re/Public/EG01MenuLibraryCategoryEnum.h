#pragma once
#include "CoreMinimal.h"
#include "EG01MenuLibraryCategoryEnum.generated.h"

UENUM(BlueprintType)
enum class EG01MenuLibraryCategoryEnum : uint8 {
    SKILL,
    SPELL,
    FATHOM,
    ITEM,
    ENEMY,
    SEARCHTEACHER,
    TUTORIAL,
    TOP,
    NUM,
};

