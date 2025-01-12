#pragma once
#include "CoreMinimal.h"
#include "EG01EnemyUniqueAnimID.generated.h"

UENUM(BlueprintType)
enum class EG01EnemyUniqueAnimID : uint8 {
    MF_NONE,
    MF_SEARCH,
    MF_INTIMIDATION,
    MF_ACTION,
    MF_AMBUSH,
    MF_AMBUSHBREAK,
    NUM,
};

