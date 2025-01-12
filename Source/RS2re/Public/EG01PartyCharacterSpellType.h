#pragma once
#include "CoreMinimal.h"
#include "EG01PartyCharacterSpellType.generated.h"

UENUM(BlueprintType)
enum class EG01PartyCharacterSpellType : uint8 {
    Fire,
    Water,
    Wind,
    Earth,
    Divine,
    Dark,
};

