#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EG01AbilityConditionType.h"
#include "G01AbilityAddODGaugeEffect.h"
#include "G01AbilityArtsBpCostEffect.h"
#include "G01AbilityBasicStatusEffect.h"
#include "G01AbilityCharaStatusEffect.h"
#include "G01AbilityCounterRateEffect.h"
#include "G01AbilityDefenseEffect.h"
#include "G01AbilityEquipCorrectionEffect.h"
#include "G01AbilityEquipStatusEffect.h"
#include "G01AbilityEquipWeightEffect.h"
#include "G01AbilityOffenseEffect.h"
#include "G01AbilityOverHealEffect.h"
#include "G01AbilityResistanceEffect.h"
#include "G01AbilitySkillLevelEffect.h"
#include "G01AbilitySpellLevelEffect.h"
#include "G01AbilityTargetWeightEffect.h"
#include "G01BattleArtsTableRow.h"
#include "G01BattleCharacterStatusStruct.h"
#include "G01CharaDefence.h"
#include "G01CharaResistance.h"
#include "G01CharaStatus.h"
#include "G01SkillLevel.h"
#include "G01SpellLevel.h"
#include "G01AbilityFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01AbilityFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01AbilityFuncLib();

    UFUNCTION(BlueprintCallable)
    static void DebugAbilityConditionToText(EG01AbilityConditionType InCondition, FText& OutText);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyWeaponAttackAbility(const int32& InBase, const FG01AbilityEquipCorrectionEffect& InEffect, int32& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplySpellLevelAbility(const FG01SpellLevel& InBase, const FG01AbilitySpellLevelEffect& InEffect, FG01SpellLevel& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplySkillLevelAbility(const FG01SkillLevel& InBase, const FG01AbilitySkillLevelEffect& InEffect, FG01SkillLevel& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyShieldDefenceAbility(const FG01CharaDefence& InBase, const FG01AbilityEquipCorrectionEffect& InEffect, FG01CharaDefence& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyShieldActiveRateAbility(const int32& InBase, const FG01AbilityEquipCorrectionEffect& InEffect, int32& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyResistanceAbility(const FG01CharaResistance& InBase, const FG01AbilityResistanceEffect& InEffect, FG01CharaResistance& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyGirderActiveRateAbility(const int32& InBase, const FG01AbilityEquipCorrectionEffect& InEffect, int32& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyDefenseAbility(const FG01CharaDefence& InBase, const FG01AbilityDefenseEffect& InEffect, FG01CharaDefence& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyBasicStatusAbility(const FG01CharaStatus& InBase, const FG01AbilityBasicStatusEffect& InEffect, FG01CharaStatus& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAttackPowerAbility(float InBase, const FG01BattleArtsTableRow& InArts, const FG01AbilityOffenseEffect& InEffect, float& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyArtsPowerAbility(int32 InBase, const FG01BattleArtsTableRow& InArts, const FG01AbilityOffenseEffect& InEffect, int32& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyArmorMagicAbility(const FG01CharaDefence& InBase, const FG01AbilityEquipCorrectionEffect& InEffect, FG01CharaDefence& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyArmorDefenceAbility(const FG01CharaDefence& InBase, const FG01AbilityEquipCorrectionEffect& InEffect, FG01CharaDefence& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAbilityToTargetWeight(int32 InBaseWeight, const FG01AbilityTargetWeightEffect& InEffect, int32& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAbilityToOverHeal(int32 InBase, const FG01AbilityOverHealEffect& InEffect, int32& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAbilityToEquipWeight(int32 InBaseWeight, const FG01AbilityEquipWeightEffect& InEffect, int32& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAbilityToCounterRate(int32 InBaseRate, const FG01AbilityCounterRateEffect& InEffect, int32& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAbilityToBPCost(int32 InBaseCost, const FG01BattleArtsTableRow& InArts, const FG01AbilityArtsBpCostEffect& InEffect, int32& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAbilityToBattleChara(const FG01BattleCharacterStatusStruct& InBase, const FG01AbilityCharaStatusEffect& InEffect, FG01BattleCharacterStatusStruct& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAbilityToAddODGauge(int32 InBaseGauge, const FG01AbilityAddODGaugeEffect& InEffect, int32& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAbilityEquipStatus(const FG01CharaStatus& InBase, const FG01AbilityEquipStatusEffect& InEffect, FG01CharaStatus& OutResult);
    
};

