#pragma once
#include "CoreMinimal.h"
#include "EG01EnemyFieldSize.generated.h"

UENUM(BlueprintType)
enum class EG01EnemyFieldSize : uint8 {
    S,
    M,
    L,
    LL,
    NUM,
};

