#pragma once
#include "CoreMinimal.h"
#include "EG01SeqBattleDamageType.generated.h"

UENUM(BlueprintType)
enum class EG01SeqBattleDamageType : uint8 {
    Normal,
    ReactionOnly,
    DamageOnly,
};

