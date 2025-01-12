#pragma once
#include "CoreMinimal.h"
#include "EActivityAction.generated.h"

UENUM(BlueprintType)
enum class EActivityAction : uint8 {
    Start,
    Compeleted,
    Failed,
    Cancelled,
    Enable,
    Disable,
    Terminate,
    NUM,
};

