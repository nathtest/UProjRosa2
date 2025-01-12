#pragma once
#include "CoreMinimal.h"
#include "EG01VFXBattleHitSetting.generated.h"

UENUM(BlueprintType)
enum class EG01VFXBattleHitSetting : uint8 {
    NotSync,
    HitSync,
    NUM,
};

