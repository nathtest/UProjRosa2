#pragma once
#include "CoreMinimal.h"
#include "EMainMenuTabType.generated.h"

UENUM(BlueprintType)
enum class EMainMenuTabType : uint8 {
    STATUS,
    EQUIP,
    SKILLSPELL,
    ABILITY,
    ITEM,
    FORMATION,
    QUEST,
    IMPERIALPOWER,
    LIBRARY,
    OPTION,
    NUM,
};

