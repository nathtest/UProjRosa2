#pragma once
#include "CoreMinimal.h"
#include "EG01BattleCameraPhaseType.generated.h"

UENUM(BlueprintType)
enum class EG01BattleCameraPhaseType : uint8 {
    Invalid,
    Intro,
    CommandSelect,
    CommandSelectLongTimed,
    TargetSelect,
    TargetAllySelect,
    FormationChange,
    Ready,
    StartPlayback,
    StartPlaybackParty,
    StartPlaybackEnemy,
    Playback,
    EndPlayback,
    EndPlaybackParty,
    EndPlaybackEnemy,
    MapAspectParty,
    MapAspectEnemy,
    Escape,
    Win,
    Lose,
    Result,
    LearnSpell,
    LearnAbility,
    Abort,
};

