#pragma once
#include "CoreMinimal.h"
#include "EG01EnemyMoveProperty.generated.h"

UENUM(BlueprintType)
enum class EG01EnemyMoveProperty : uint8 {
    None,
    Ground,
    Fly,
    Swim,
    Amphibian,
    Jump,
    NUM,
};

