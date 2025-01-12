#pragma once
#include "CoreMinimal.h"
#include "EG01VFXDestActor.generated.h"

UENUM(BlueprintType)
enum class EG01VFXDestActor : uint8 {
    NonUse,
    OwnActor,
    OpponentActor,
    OwnPartyCenter,
    OpponentPartyCenter,
    PathLine,
    BattleFieldCenterDirOpponent,
    OpponentPartyTargetAverage,
    InputActorRoot,
    NUM,
};

