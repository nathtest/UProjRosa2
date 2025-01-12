#pragma once
#include "CoreMinimal.h"
#include "EQuestSectionState.generated.h"

UENUM(BlueprintType)
namespace EQuestSectionState {
    enum Type {
        None,
        Idle,
        BeginSection,
        SectionRunning = 4,
        EndSection = 8,
        EndRunning = 16,
        ForceEnd = 64,
    };
}

