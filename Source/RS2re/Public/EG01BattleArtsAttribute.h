#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsAttribute.generated.h"

UENUM(BlueprintType)
enum class EG01BattleArtsAttribute : uint8 {
    Cut,
    Blow,
    Thrust,
    Heat,
    Cold,
    Thunder,
    Light,
    Dark,
    Sword,
    GreatSword,
    ShortSword,
    Spear,
    Axe,
    Club,
    Bow,
    Martial,
    Pyrology,
    Hydrology,
    Terrology,
    Aerology,
    Cosmology,
    Umbrology,
    None,
    Num,
    BasisNum = None,
};

