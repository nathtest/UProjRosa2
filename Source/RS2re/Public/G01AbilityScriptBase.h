#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EG01AbilityAilmentType.h"
#include "EG01AbilityArtsBpCostType.h"
#include "EG01AbilityArtsCategory.h"
#include "EG01AbilityArtsFinalDamageType.h"
#include "EG01AbilityArtsRecoverType.h"
#include "EG01AbilityArtsType.h"
#include "EG01AbilityBasicStatusType.h"
#include "EG01AbilityCompareType.h"
#include "EG01AbilityDefenseType.h"
#include "EG01AbilityEffectGetAffinityType.h"
#include "EG01AbilityEffectLifeSpan.h"
#include "EG01AbilityEquipCorrectionType.h"
#include "EG01AbilityOffenseType.h"
#include "EG01AbilitySkllType.h"
#include "EG01AbilitySpellType.h"
#include "EG01AbilityTargetType.h"
#include "EG01AbilityVariableStatus.h"
#include "EG01AbilityWeaponSlot.h"
#include "EG01AbilityWeaponType.h"
#include "EG01AttackAffinityType.h"
#include "EG01BattleArtsAttribute.h"
#include "EG01BattleArtsType.h"
#include "EG01MapAspectType.h"
#include "EG01ReasonToIgnoreOfDamageEnum.h"
#include "G01AbilityAilmentStruct.h"
#include "G01AbilityCharaStatusEffect.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentExtarnalInf.h"
#include "G01AttackInfo.h"
#include "G01AttackResultInfo.h"
#include "G01BattleArtsAttrFlags.h"
#include "G01BattleArtsTableRow.h"
#include "G01BattleCharacterStatusStruct.h"
#include "G01BattleCommandUnit.h"
#include "G01BattleManagerObserverInf.h"
#include "Templates/SubclassOf.h"
#include "G01AbilityScriptBase.generated.h"

class AActor;
class AG01AddedPotentAbilityObjectBase;
class AG01BattleCharacterBase;
class UG01BattleCharacterHandle;
class UG01BattleTask;

UCLASS(Blueprintable)
class RS2RE_API UG01AbilityScriptBase : public UObject, public IG01AddedPotentExtarnalInf, public IG01BattleManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01AbilityTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityCharaStatusEffect StatusEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AG01BattleCharacterBase* OwnerBattleCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AG01AddedPotentAbilityObjectBase* AbilityExtarnalObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UG01BattleCharacterHandle*> SavedCharacterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> SavedFlagMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> SavedIntMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> SavedFloatMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> SavedNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DirtyCharacterList;
    
public:
    UG01AbilityScriptBase();

protected:
    UFUNCTION(BlueprintCallable)
    void Cmd_VAR_SaveInt(FName InKey, int32 inInt);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_VAR_SaveFloat(FName InKey, float InFloat);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_VAR_SaveFlag(FName InKey, bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_VAR_SaveCharacter(FName InKey, UG01BattleCharacterHandle* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_VAR_LoadInt(FName InKey, int32& OutInt);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_VAR_LoadFloat(FName InKey, float& OutFloat);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_VAR_LoadFlag(FName InKey, bool& OutFlag);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_VAR_LoadCharacter(FName InKey, UG01BattleCharacterHandle*& OutCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnTurnStart(int32 InTurnNo, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnTurnEnd(int32 InTurnNo, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnTakeHpRecover(UG01BattleCharacterHandle* InSource, UG01BattleCharacterHandle* InTarget, const FG01AttackInfo& InAttackInfo, const FG01AttackResultInfo& InResultInfo, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnStartedCommandSelect(UG01BattleCharacterHandle* InSource, UG01BattleTask* InTask, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnResultStart(bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnPrepareCommand(UG01BattleCharacterHandle* InSource, const FG01BattleCommandUnit& InCommand, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnExtarnalApply(UG01BattleCharacterHandle* InSource, UG01BattleCharacterHandle* InTarget, const FG01AbilityAilmentStruct& InExtarnalInfo, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnDecideCommand(UG01BattleCharacterHandle* InSource, UG01BattleCharacterHandle* InTarget, const FG01BattleCommandUnit& InCommand, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnDamaged(UG01BattleCharacterHandle* InSource, UG01BattleCharacterHandle* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnBattleStart(bool InBossBattle, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnArtsPrepareDamage(UG01BattleCharacterHandle* InSource, UG01BattleCharacterHandle* InTarget, const FG01BattleArtsTableRow& InArts, const FG01AttackResultInfo& InAttackResult, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnAilmentApply(UG01BattleCharacterHandle* InSource, UG01BattleCharacterHandle* InTarget, const FG01AbilityAilmentStruct& InAilmentInfo, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TRG_OnAbilityEquip(bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RequestDeactive();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RequestActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_OnActivate(bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_INF_RateParam(int32 InListNo, int32& OutParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_INF_MyCharacter(UG01BattleCharacterHandle*& OutChara);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_INF_IsCombineSpell(EG01BattleArtsType InType, bool& OutIsCombineSpell, TArray<EG01BattleArtsType>& OutArtsTypeList);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_INF_GetVariableStatus(UG01BattleCharacterHandle* InCharacter, EG01AbilityVariableStatus InType, int32& OutCurrentValue, int32& OutMaxValue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_INF_GetStatus(UG01BattleCharacterHandle* InTarget, FG01BattleCharacterStatusStruct& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_INF_GetOriginalEnemyList(TArray<UG01BattleCharacterHandle*>& OutEnemyList);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_INF_GetAffinityInfo(UG01BattleCharacterHandle* InTarget, EG01AbilityEffectGetAffinityType InType, TArray<EG01BattleArtsAttribute>& OutInfo, bool& OutIsEmpty);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_INF_EffectParam(int32 InListNo, int32& OutParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_INF_CurrentTurnNo(int32& OutTurnNo);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_INF_ConditionParam(int32 InListNo, int32& OutParam);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_IsNotConsumeLp(bool& OutTrue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_IsNotConsumeItem(bool& OutIsNotConsume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_IsInvalidExtarnal(const FG01AddedPotentBaseKeyStruct InPotent, bool& OutTrue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_IsInvalidDebuff(const FG01AddedPotentBaseKeyStruct InPotent, bool& OutTrue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_IsInValidAttrDamage(FG01BattleArtsAttrFlags InType, bool& OutInValid, EG01AttackAffinityType& OutAffinity, EG01ReasonToIgnoreOfDamageEnum& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_IsInvalidAilment(const FG01AddedPotentBaseKeyStruct InPotent, bool& OutTrue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_IsForceInValidDamage(bool& OutInValid, EG01AttackAffinityType& OutAffinity, EG01ReasonToIgnoreOfDamageEnum& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_IsForceCriticalArts(bool& OutIsCritical);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_IsEndureDamage(bool& OutTrue, int32& OutEndureHp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetRecoverRevise(EG01AbilityArtsRecoverType InRecoverType, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetRecoverMapAspectType(TArray<EG01MapAspectType>& OutMapAspect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetNextTurnSpeedRevise(int32& OutValue, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetLinkDamageRevise(bool& OutPartyEffect, bool& OutMySelf, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetLinkCostRevise(bool& OutIsRevise, bool& OutPartyEffect, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetExpRevise(bool& OutTrue, int32& OutValue, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetDropItemCountRevise(int32 InDropSlotNo, int32& OutValue, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetDefenseAttrRevise(EG01BattleArtsAttribute InAttr, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetDebuffContinueTurnRevise(const FG01AbilityAilmentStruct& InAilmentInfo, int32& OutValue, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetCurrentTurnSpeedRevise(int32& OutValue, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetAttackDamageRevise(EG01AbilityArtsFinalDamageType InDamageType, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetAttackAttrRevise(EG01BattleArtsAttribute InAttr, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetAttackAffinityRevise(EG01AttackAffinityType InAffinityType, bool& OutIsChange, EG01AttackAffinityType& OutAffinity, EG01ReasonToIgnoreOfDamageEnum& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetAttackAffinityDamageRevise(EG01AttackAffinityType InAffinityType, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetAilmentHitSourceRevise(const FG01AbilityAilmentStruct& InAilmentInfo, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EXT_GetAilmentContinueTurnRevise(const FG01AbilityAilmentStruct& InAilmentInfo, int32& OutValue, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_TryRobDropItem(UG01BattleCharacterHandle* InTarget, int32 InDropSlotNo);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetTargetWeightRevise(int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetSpellResistRevise(UG01BattleCharacterHandle* InTarget, EG01AbilitySpellType InType, int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetSpellLevelRevise(EG01AbilitySpellType InType, int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetSkillResistRevise(UG01BattleCharacterHandle* InTarget, EG01AbilitySkllType InType, int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetSkillLevelRevise(EG01AbilitySkllType InType, int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetResistRevise(UG01BattleCharacterHandle* InTarget, EG01BattleArtsType InType, int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetOverHealRevise(UG01BattleCharacterHandle* InTarget, int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetOffenseRevise(EG01AbilityOffenseType InType, int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetEquipWeightRevise(int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetEquipRevise(EG01AbilityEquipCorrectionType InType, int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetDefenseRevise(EG01AbilityDefenseType InType, int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetCounterRateRevise(int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetBasicStatusRevise(EG01AbilityBasicStatusType InType, int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetArtsBPCostRevise(EG01AbilityArtsBpCostType InType, int32 InValue, int32 InPercent, bool InIsMinimum, int32 InMin);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetAilmentResistRevise(EG01AbilityAilmentType InType, int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_SetAddODGaugeRevise(int32 InValue, int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_OpenAffinityType(UG01BattleCharacterHandle* InTarget, TArray<EG01BattleArtsAttribute> InAttrList);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_ChangeCurrentLP(UG01BattleCharacterHandle* InTarget, int32 InValue, int32 InPercent, bool InIsMinimum, int32 InMin, int32 InMax);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_ChangeCurrentHP(UG01BattleCharacterHandle* InTarget, int32 InValue, int32 InPercent, bool InIsMinimum, int32 InMin, int32 InMax, bool InIsHUDEffect);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_ChangeCurrentBP(UG01BattleCharacterHandle* InTarget, int32 InValue, int32 InPercent, bool InIsMinimum, int32 InMin, int32 InMax, bool InIsHUDEffect);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_AttachAbilityPotent(TSubclassOf<AG01AddedPotentAbilityObjectBase> InPotentClass, FName InParameter);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_ApplyAddedPotent(UG01BattleCharacterHandle* InTarget, FG01AddedPotentBaseKeyStruct InPotentKey, FName InParameter);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EFF_AddODGauge(const int32 InValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void Cmd_CMP_WeaponSlot(UG01BattleCharacterHandle* InCharacter, EG01AbilityWeaponSlot InSlot, EG01AbilityWeaponType InWeaponType, bool& OutTrue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CMP_Percent(int32 InPercent, bool& OutTrue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CMP_IsMyCharacter(UG01BattleCharacterHandle* InCharacter, bool& OutTrue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CMP_CharacterStatus(UG01BattleCharacterHandle* InCharacter, EG01AbilityBasicStatusType InStatusType, EG01AbilityCompareType InCmpType, int32 InCmpValue, bool& OutTrue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CMP_CharacterArtsResist(UG01BattleCharacterHandle* InCharacter, EG01AbilityArtsType InAttr, EG01AbilityCompareType InCmpType, int32 InCmpValue, bool& OutTrue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CMP_ArtsLastHit(UG01BattleCharacterHandle* InSource, const FG01BattleArtsTableRow& InArts, const FG01AttackResultInfo& InAttackResultInfo, bool& OutTrue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CMP_ArtsCategory(const FG01BattleArtsTableRow& InArts, const EG01AbilityArtsCategory InCategory, bool& OutTrue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ChangeEffectLifeSpan(EG01AbilityEffectLifeSpan InLifespan);
    

    // Fix for true pure virtual functions not being implemented
};

