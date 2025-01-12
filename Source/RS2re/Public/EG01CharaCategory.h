#pragma once
#include "CoreMinimal.h"
#include "EG01CharaCategory.generated.h"

UENUM(BlueprintType)
enum class EG01CharaCategory : uint8 {
    PLAYER,
    NPC,
    ENEMY,
    OTHER,
    NUM,
};

