#pragma once
#include "CoreMinimal.h"
#include "EG01LibraryTopCategoryEnum.generated.h"

UENUM(BlueprintType)
enum class EG01LibraryTopCategoryEnum : uint8 {
    SKILL,
    SPELL,
    FATHOM,
    ITEM,
    ENEMY,
    SEARCHTEACHER,
    TUTORIAL,
    NUM,
};

