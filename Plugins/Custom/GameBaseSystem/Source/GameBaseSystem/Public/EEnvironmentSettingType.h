#pragma once
#include "CoreMinimal.h"
#include "EEnvironmentSettingType.generated.h"

UENUM(BlueprintType)
enum class EEnvironmentSettingType : uint8 {
    None,
    Base,
    CaveBase,
    CloudyBase,
    DayBase,
    EveningBase,
    NightBase,
    RoomBase,
    AvalonDay,
    SormonDay,
    SormonCloudy,
};

