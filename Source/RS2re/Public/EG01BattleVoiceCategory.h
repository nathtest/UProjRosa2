#pragma once
#include "CoreMinimal.h"
#include "EG01BattleVoiceCategory.generated.h"

UENUM(BlueprintType)
enum class EG01BattleVoiceCategory : uint8 {
    Normal,
    Reaction,
    SpeechReaction,
};

