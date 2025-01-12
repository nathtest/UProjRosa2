#pragma once
#include "CoreMinimal.h"
#include "EG01TitlePrologueStaffReqestTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01TitlePrologueStaffReqestTypeEnum : uint8 {
    LEFT_TOP,
    LEFT_MIDDLE,
    LEFT_BOTTOM,
    RIGHT_TOP,
    RIGHT_MIDDLE,
    RIGHT_BOTTOM,
    MIDDLE,
};

