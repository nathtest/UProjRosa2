#pragma once
#include "CoreMinimal.h"
#include "ELevelObjectFindResultValidMask.generated.h"

UENUM(BlueprintType)
enum class ELevelObjectFindResultValidMask : uint8 {
    None,
    Actor,
    Generator,
    VisualActorClass = 4,
    GeneralString = 8,
};

