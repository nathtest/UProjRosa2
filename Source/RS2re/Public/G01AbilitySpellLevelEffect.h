#pragma once
#include "CoreMinimal.h"
#include "G01AbilitySpellRevise.h"
#include "G01AbilitySpellLevelEffect.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilitySpellLevelEffect : public FG01AbilitySpellRevise {
    GENERATED_BODY()
public:
    FG01AbilitySpellLevelEffect();
};

