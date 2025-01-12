#pragma once
#include "CoreMinimal.h"
#include "EG01BattleCharacterAnimWaitReason.generated.h"

UENUM(BlueprintType)
enum class EG01BattleCharacterAnimWaitReason : uint8 {
    Basic,
    ArtsHit,
    ArtsRecover,
    Result,
};

