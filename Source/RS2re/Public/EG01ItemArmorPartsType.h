#pragma once
#include "CoreMinimal.h"
#include "EG01ItemArmorPartsType.generated.h"

UENUM(BlueprintType)
enum class EG01ItemArmorPartsType : uint8 {
    HEAD,
    BODY,
    ARM,
    LEG,
    WHOLE,
    ACCESSORY,
};

