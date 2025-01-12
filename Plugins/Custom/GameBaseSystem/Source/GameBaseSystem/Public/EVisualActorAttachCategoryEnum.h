#pragma once
#include "CoreMinimal.h"
#include "EVisualActorAttachCategoryEnum.generated.h"

UENUM(BlueprintType)
enum class EVisualActorAttachCategoryEnum : uint8 {
    Weapon,
    Accessory,
    Costume,
    Other,
    Num,
};

