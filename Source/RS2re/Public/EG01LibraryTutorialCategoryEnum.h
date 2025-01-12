#pragma once
#include "CoreMinimal.h"
#include "EG01LibraryTutorialCategoryEnum.generated.h"

UENUM(BlueprintType)
enum class EG01LibraryTutorialCategoryEnum : uint8 {
    BATTLE,
    FIELD,
    SYSTEM,
    INSTITUTION,
    ALL,
    NUM,
};

