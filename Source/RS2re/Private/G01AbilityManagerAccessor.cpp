#include "G01AbilityManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01AbilityManagerAccessor::UG01AbilityManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_ABILITY;
}

void UG01AbilityManagerAccessor::StopSimulateAbility(const FG01CharacterID& InCharacterId) {
}

void UG01AbilityManagerAccessor::StartSimulateAbility(const FG01CharacterID& InCharacterId) {
}

void UG01AbilityManagerAccessor::SetOpenLevel(int32 InLevel) {
}

void UG01AbilityManagerAccessor::SetAddedAbilityEffect(const FG01CharacterID& InCharacterId, const FG01AbilityCharaStatusEffect& In) {
}

void UG01AbilityManagerAccessor::SetAbilityMastery(FName InAbilityId) {
}

void UG01AbilityManagerAccessor::SetAbilityLearn(FName InAbilityId) {
}

void UG01AbilityManagerAccessor::NotifyBattleStart() {
}

void UG01AbilityManagerAccessor::NotifyBattleEnd() {
}

void UG01AbilityManagerAccessor::IsInBattle(bool& OutIsInBattle) {
}

void UG01AbilityManagerAccessor::GetOpenLevel(int32& OutLevel) {
}

void UG01AbilityManagerAccessor::GetMaxOpenLevel(int32& OutLevel) {
}

void UG01AbilityManagerAccessor::GetClassTagList(TArray<FName>& OutList) {
}

void UG01AbilityManagerAccessor::GetClassTagAbilityIdList(FName InClassTag, TArray<FName>& OutIdList) {
}

void UG01AbilityManagerAccessor::GetCharaStatusEffect(const FG01CharacterID& InCharacterId, FG01AbilityCharaStatusEffect& OutEffect) {
}

void UG01AbilityManagerAccessor::GetCharaEquipInfo(const FG01CharacterID& InCharcterId, FG01AbilityPerCharacter& OutEquipInfo) {
}

void UG01AbilityManagerAccessor::GetCharaAbilityIdList(const FG01CharacterID& InCharacterId, TArray<FName>& OutIdList) {
}

void UG01AbilityManagerAccessor::GetAllAbilityIdList(TArray<FName>& OutIdList) {
}

void UG01AbilityManagerAccessor::GetAddedAbilityEffect(const FG01CharacterID& InCharacterId, FG01AbilityCharaStatusEffect& Out) {
}

void UG01AbilityManagerAccessor::GetAchievemtntForInheritance(int32& OutCurrent, int32& OutMax) {
}

void UG01AbilityManagerAccessor::GetAchievementForGet(int32& OutCurrent, int32& OutMax) {
}

void UG01AbilityManagerAccessor::GetAbilityMasteryProgress(FName InAbilityId, FG01AbilityCondition& OutCondition, int32& OutProgress) {
}

void UG01AbilityManagerAccessor::GetAbilityLearnProgress(FName InAbilityId, FG01AbilityCondition& OutCondition, int32& OutProgress) {
}

void UG01AbilityManagerAccessor::ForceAbilityMastery(FName InAbilityId, bool InIncludeLearn) {
}

void UG01AbilityManagerAccessor::FindClassID(FName InClassTag, bool& OutIsExist, TArray<FG01CharaClassID>& OutClassIDs) {
}

void UG01AbilityManagerAccessor::FindAbilityDataByOpenLevel(int32 InOpenLevel, bool& OutIsExist, TMap<FName, FG01AbilityTableRow>& OutAbilities) {
}

void UG01AbilityManagerAccessor::FindAbilityData(FName InAbilityId, bool& OutIsExist, FG01AbilityTableRow& OutAbility) {
}

void UG01AbilityManagerAccessor::EndAbilitySystem() {
}

void UG01AbilityManagerAccessor::ConvertItemIdToAbilityID(FName InItemID, FName& OutAbilityId, bool& OutSuccess) {
}

void UG01AbilityManagerAccessor::ConvertClassIdToTag(const FG01CharaClassID& InClassId, FName& OutClassTag) {
}

void UG01AbilityManagerAccessor::ClearSimulateAbility() {
}

bool UG01AbilityManagerAccessor::CheckActiveAbilitySystem() {
    return false;
}

void UG01AbilityManagerAccessor::BeginAbilitySystem() {
}

void UG01AbilityManagerAccessor::ApplicateLearnStat(const FG01AbilityLearnStat& InStat) {
}

void UG01AbilityManagerAccessor::AbilityIsOpen(FName InAbilityId, bool& OutIsOpen) {
}

void UG01AbilityManagerAccessor::AbilityIsMastery(FName InAbilityId, bool& OutIsMastery) {
}

void UG01AbilityManagerAccessor::AbilityIsLearn(FName InAbilityId, bool& OutIsLearn) {
}

void UG01AbilityManagerAccessor::AbilityIsActivate(FName InAbilityId, bool& OutIsActivate) {
}

void UG01AbilityManagerAccessor::AbilityCanMastery(FName InAbilityId, bool& OutCanMastery) {
}

void UG01AbilityManagerAccessor::AbilityCanLearn(FName InAbilityId, bool& OutCanLearn) {
}


