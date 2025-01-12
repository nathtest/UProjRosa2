#pragma once
#include "CoreMinimal.h"
#include "EG01PartyCharacterSkillType.generated.h"

UENUM(BlueprintType)
enum class EG01PartyCharacterSkillType : uint8 {
    Sword,
    Greatsword,
    Axe,
    Club,
    Spear,
    Shortsword,
    Bow,
    Martial,
};

