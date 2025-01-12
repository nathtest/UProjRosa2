#pragma once
#include "CoreMinimal.h"
#include "G01AbilityAddODGaugeEffect.h"
#include "G01AbilityArtsBpCostEffect.h"
#include "G01AbilityBasicStatusEffect.h"
#include "G01AbilityCounterRateEffect.h"
#include "G01AbilityDefenseEffect.h"
#include "G01AbilityEquipCorrectionEffect.h"
#include "G01AbilityEquipWeightEffect.h"
#include "G01AbilityLinkCostEffect.h"
#include "G01AbilityOffenseEffect.h"
#include "G01AbilityOverHealEffect.h"
#include "G01AbilityResistanceEffect.h"
#include "G01AbilitySkillLevelEffect.h"
#include "G01AbilitySpellLevelEffect.h"
#include "G01AbilityTargetWeightEffect.h"
#include "G01AbilityCharaStatusEffect.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityCharaStatusEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityBasicStatusEffect BasicStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilitySkillLevelEffect SkillLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilitySpellLevelEffect SpellLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityOffenseEffect Offense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityDefenseEffect Defense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityResistanceEffect Resistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityArtsBpCostEffect ArtsBpCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityEquipCorrectionEffect EquipCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityEquipWeightEffect EquipWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityTargetWeightEffect TargetWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityCounterRateEffect CounterRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityAddODGaugeEffect AddODGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityLinkCostEffect LinkCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityOverHealEffect OverHeal;
    
    FG01AbilityCharaStatusEffect();
};

