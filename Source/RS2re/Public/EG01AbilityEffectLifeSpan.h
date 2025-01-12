#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityEffectLifeSpan.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityEffectLifeSpan : uint8 {
    Infinite,
    TurnEnd,
    MyCharacterPlaybackEnd,
    MyCharacterIsTargetPlaybackEnd,
};

