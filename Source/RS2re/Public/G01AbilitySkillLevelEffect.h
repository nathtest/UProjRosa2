#pragma once
#include "CoreMinimal.h"
#include "G01AbilitySkillRevise.h"
#include "G01AbilitySkillLevelEffect.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilitySkillLevelEffect : public FG01AbilitySkillRevise {
    GENERATED_BODY()
public:
    FG01AbilitySkillLevelEffect();
};

