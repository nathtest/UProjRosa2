#pragma once
#include "CoreMinimal.h"
#include "EG01BlackSmithMenuStateEnum.generated.h"

UENUM(BlueprintType)
enum class EG01BlackSmithMenuStateEnum : uint8 {
    NonDevelopable,
    DevelopDispLock,
    Developable,
    Developing,
    Complete,
    CompleteCheck,
};

