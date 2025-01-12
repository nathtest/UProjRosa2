#pragma once
#include "CoreMinimal.h"
#include "ESequencerSearchCondition.generated.h"

UENUM(BlueprintType)
namespace ESequencerSearchCondition {
    enum Type {
        All,
        UsingCameraTrack,
    };
}

