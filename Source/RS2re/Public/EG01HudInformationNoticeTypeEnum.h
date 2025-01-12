#pragma once
#include "CoreMinimal.h"
#include "EG01HudInformationNoticeTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01HudInformationNoticeTypeEnum : uint8 {
    Developable,
    Developing,
    DevelopmentCompleted,
};

