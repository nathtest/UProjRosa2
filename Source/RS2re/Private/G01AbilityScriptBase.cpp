#include "G01AbilityScriptBase.h"
#include "Templates/SubclassOf.h"

UG01AbilityScriptBase::UG01AbilityScriptBase() {
    this->TargetType = EG01AbilityTargetType::Myself;
    this->OwnerBattleCharacter = NULL;
    this->AbilityExtarnalObject = NULL;
}

void UG01AbilityScriptBase::Cmd_VAR_SaveInt(FName InKey, int32 inInt) {
}

void UG01AbilityScriptBase::Cmd_VAR_SaveFloat(FName InKey, float InFloat) {
}

void UG01AbilityScriptBase::Cmd_VAR_SaveFlag(FName InKey, bool InFlag) {
}

void UG01AbilityScriptBase::Cmd_VAR_SaveCharacter(FName InKey, UG01BattleCharacterHandle* InCharacter) {
}

void UG01AbilityScriptBase::Cmd_VAR_LoadInt(FName InKey, int32& OutInt) {
}

void UG01AbilityScriptBase::Cmd_VAR_LoadFloat(FName InKey, float& OutFloat) {
}

void UG01AbilityScriptBase::Cmd_VAR_LoadFlag(FName InKey, bool& OutFlag) {
}

void UG01AbilityScriptBase::Cmd_VAR_LoadCharacter(FName InKey, UG01BattleCharacterHandle*& OutCharacter) {
}














void UG01AbilityScriptBase::Cmd_RequestDeactive() {
}

void UG01AbilityScriptBase::Cmd_RequestActive() {
}

void UG01AbilityScriptBase::Cmd_OnActivate_Implementation(bool& OutSuccess) {
}

void UG01AbilityScriptBase::Cmd_INF_RateParam(int32 InListNo, int32& OutParam) {
}

void UG01AbilityScriptBase::Cmd_INF_MyCharacter(UG01BattleCharacterHandle*& OutChara) {
}

void UG01AbilityScriptBase::Cmd_INF_IsCombineSpell(EG01BattleArtsType InType, bool& OutIsCombineSpell, TArray<EG01BattleArtsType>& OutArtsTypeList) {
}

void UG01AbilityScriptBase::Cmd_INF_GetVariableStatus(UG01BattleCharacterHandle* InCharacter, EG01AbilityVariableStatus InType, int32& OutCurrentValue, int32& OutMaxValue) {
}

void UG01AbilityScriptBase::Cmd_INF_GetStatus(UG01BattleCharacterHandle* InTarget, FG01BattleCharacterStatusStruct& OutStatus) {
}

void UG01AbilityScriptBase::Cmd_INF_GetOriginalEnemyList(TArray<UG01BattleCharacterHandle*>& OutEnemyList) {
}

void UG01AbilityScriptBase::Cmd_INF_GetAffinityInfo(UG01BattleCharacterHandle* InTarget, EG01AbilityEffectGetAffinityType InType, TArray<EG01BattleArtsAttribute>& OutInfo, bool& OutIsEmpty) {
}

void UG01AbilityScriptBase::Cmd_INF_EffectParam(int32 InListNo, int32& OutParam) {
}

void UG01AbilityScriptBase::Cmd_INF_CurrentTurnNo(int32& OutTurnNo) {
}

void UG01AbilityScriptBase::Cmd_INF_ConditionParam(int32 InListNo, int32& OutParam) {
}


























void UG01AbilityScriptBase::Cmd_EFF_TryRobDropItem(UG01BattleCharacterHandle* InTarget, int32 InDropSlotNo) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetTargetWeightRevise(int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetSpellResistRevise(UG01BattleCharacterHandle* InTarget, EG01AbilitySpellType InType, int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetSpellLevelRevise(EG01AbilitySpellType InType, int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetSkillResistRevise(UG01BattleCharacterHandle* InTarget, EG01AbilitySkllType InType, int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetSkillLevelRevise(EG01AbilitySkllType InType, int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetResistRevise(UG01BattleCharacterHandle* InTarget, EG01BattleArtsType InType, int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetOverHealRevise(UG01BattleCharacterHandle* InTarget, int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetOffenseRevise(EG01AbilityOffenseType InType, int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetEquipWeightRevise(int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetEquipRevise(EG01AbilityEquipCorrectionType InType, int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetDefenseRevise(EG01AbilityDefenseType InType, int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetCounterRateRevise(int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetBasicStatusRevise(EG01AbilityBasicStatusType InType, int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetArtsBPCostRevise(EG01AbilityArtsBpCostType InType, int32 InValue, int32 InPercent, bool InIsMinimum, int32 InMin) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetAilmentResistRevise(EG01AbilityAilmentType InType, int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_SetAddODGaugeRevise(int32 InValue, int32 InPercent) {
}

void UG01AbilityScriptBase::Cmd_EFF_OpenAffinityType(UG01BattleCharacterHandle* InTarget, TArray<EG01BattleArtsAttribute> InAttrList) {
}

void UG01AbilityScriptBase::Cmd_EFF_ChangeCurrentLP(UG01BattleCharacterHandle* InTarget, int32 InValue, int32 InPercent, bool InIsMinimum, int32 InMin, int32 InMax) {
}

void UG01AbilityScriptBase::Cmd_EFF_ChangeCurrentHP(UG01BattleCharacterHandle* InTarget, int32 InValue, int32 InPercent, bool InIsMinimum, int32 InMin, int32 InMax, bool InIsHUDEffect) {
}

void UG01AbilityScriptBase::Cmd_EFF_ChangeCurrentBP(UG01BattleCharacterHandle* InTarget, int32 InValue, int32 InPercent, bool InIsMinimum, int32 InMin, int32 InMax, bool InIsHUDEffect) {
}

void UG01AbilityScriptBase::Cmd_EFF_AttachAbilityPotent(TSubclassOf<AG01AddedPotentAbilityObjectBase> InPotentClass, FName InParameter) {
}

void UG01AbilityScriptBase::Cmd_EFF_ApplyAddedPotent(UG01BattleCharacterHandle* InTarget, FG01AddedPotentBaseKeyStruct InPotentKey, FName InParameter) {
}

void UG01AbilityScriptBase::Cmd_EFF_AddODGauge(const int32 InValue) {
}

void UG01AbilityScriptBase::Cmd_CMP_WeaponSlot(UG01BattleCharacterHandle* InCharacter, EG01AbilityWeaponSlot InSlot, EG01AbilityWeaponType InWeaponType, bool& OutTrue) {
}

void UG01AbilityScriptBase::Cmd_CMP_Percent(int32 InPercent, bool& OutTrue) {
}

void UG01AbilityScriptBase::Cmd_CMP_IsMyCharacter(UG01BattleCharacterHandle* InCharacter, bool& OutTrue) {
}

void UG01AbilityScriptBase::Cmd_CMP_CharacterStatus(UG01BattleCharacterHandle* InCharacter, EG01AbilityBasicStatusType InStatusType, EG01AbilityCompareType InCmpType, int32 InCmpValue, bool& OutTrue) {
}

void UG01AbilityScriptBase::Cmd_CMP_CharacterArtsResist(UG01BattleCharacterHandle* InCharacter, EG01AbilityArtsType InAttr, EG01AbilityCompareType InCmpType, int32 InCmpValue, bool& OutTrue) {
}

void UG01AbilityScriptBase::Cmd_CMP_ArtsLastHit(UG01BattleCharacterHandle* InSource, const FG01BattleArtsTableRow& InArts, const FG01AttackResultInfo& InAttackResultInfo, bool& OutTrue) {
}

void UG01AbilityScriptBase::Cmd_CMP_ArtsCategory(const FG01BattleArtsTableRow& InArts, const EG01AbilityArtsCategory InCategory, bool& OutTrue) {
}

void UG01AbilityScriptBase::Cmd_ChangeEffectLifeSpan(EG01AbilityEffectLifeSpan InLifespan) {
}


