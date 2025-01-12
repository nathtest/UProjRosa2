#pragma once
#include "CoreMinimal.h"
#include "ESeqActorOffsetDirection.generated.h"

UENUM(BlueprintType)
enum class ESeqActorOffsetDirection : uint8 {
    None,
    Forward,
    Back,
    Right,
    Left,
    Up,
    Down,
};

