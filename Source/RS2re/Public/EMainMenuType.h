#pragma once
#include "CoreMinimal.h"
#include "EMainMenuType.generated.h"

UENUM(BlueprintType)
enum class EMainMenuType : uint8 {
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
    LIBRARY_SKILL,
    LIBRARY_SPELL,
    LIBRARY_FATHOM,
    LIBRARY_ITEM,
    LIBRARY_ENEMY,
    LIBRARY_SEARCHTEACHER,
    LIBRARY_TUTORIAL,
    TOP,
};

