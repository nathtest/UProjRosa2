#include "G01BattlePartyManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01BattlePartyManagerAccessor::UG01BattlePartyManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_BATTLEPARTY;
}

void UG01BattlePartyManagerAccessor::UseAilmentCureAnimAtCommand(bool& OutUseAnim) {
}

void UG01BattlePartyManagerAccessor::SetSortingType(EBattlePartyCommandListType InType) {
}

void UG01BattlePartyManagerAccessor::SetDisplayHiddenArts(bool InFlag) {
}

void UG01BattlePartyManagerAccessor::GetTargetWeight(TArray<int32>& ReWeightList) {
}

EBattlePartyCommandListType UG01BattlePartyManagerAccessor::GetSortingType() {
    return EBattlePartyCommandListType::DEFAULT;
}

void UG01BattlePartyManagerAccessor::GetResultPoseStartRange(FName InKey, FG01BattlePartyResultPoseStartRange& OutRange) {
}

void UG01BattlePartyManagerAccessor::GetPetrifyAnimStopDelay(float& OutDelay) {
}

void UG01BattlePartyManagerAccessor::GetLearnSlotOverCapacity(int32& OutSkill, int32& OutSpell, int32& OutFathom) {
}

void UG01BattlePartyManagerAccessor::GetFormationData(FName InFormationId, int32 InTargetRank, TArray<FG01BattlePartyFormationTableRow>& ReFormationList) {
}

bool UG01BattlePartyManagerAccessor::GetDisplayHiddenArts() {
    return false;
}

void UG01BattlePartyManagerAccessor::FindBattleParty(FName InRowName, bool& OutFound, FG01BattlePartyTableRow& OutRow) {
}

void UG01BattlePartyManagerAccessor::FindBattleCharacterId(FName InCharacterId, bool& OutSuccess, FName& OutBattleCharacterId) {
}

void UG01BattlePartyManagerAccessor::DecideFormation(const FG01BattlePresetTableRow& InBattlePreset, FName& OutMainId, FName& OutSubId, FName& OutBreakId, FG01PartyFormationData& OutInitFormation) {
}

void UG01BattlePartyManagerAccessor::CreateSpellUnitList(AActor* InActor, const TArray<FName>& InWeaponList, TArray<FG01BattleCharacterSpellUnitStruct>& OutList) {
}

void UG01BattlePartyManagerAccessor::CreateSkillUnitList(AActor* InActor, const TArray<FName>& InWeaponList, TArray<FG01BattleCharacterSkillUnitStruct>& OutList) {
}


