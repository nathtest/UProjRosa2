#pragma once
#include "CoreMinimal.h"
#include "G01AbilityAilmentRevise.h"
#include "G01AbilitySkillRevise.h"
#include "G01AbilitySpellRevise.h"
#include "G01AbilityResistanceEffect.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityResistanceEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilitySkillRevise Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilitySpellRevise Spell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityAilmentRevise Ailment;
    
    FG01AbilityResistanceEffect();
};

