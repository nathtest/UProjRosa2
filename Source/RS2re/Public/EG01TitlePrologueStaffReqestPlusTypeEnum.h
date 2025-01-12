#pragma once
#include "CoreMinimal.h"
#include "EG01TitlePrologueStaffReqestPlusTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01TitlePrologueStaffReqestPlusTypeEnum : uint8 {
    LEFT_TOP_RIGHT_BOTTOM,
    LEFT_MIDDLE_RIGHT_MIDDLE,
    LEFT_BOTTOM_RIGHT_TOP,
    LEFT_NOSPACE_RIGHT_MIDDLE,
};

