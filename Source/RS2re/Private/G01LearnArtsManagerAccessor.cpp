#include "G01LearnArtsManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01LearnArtsManagerAccessor::UG01LearnArtsManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_LEARNARTS;
}

void UG01LearnArtsManagerAccessor::TryCountAchievement(FName InArtsID, bool InCallNotify) {
}

void UG01LearnArtsManagerAccessor::RemoveRegisteredArts(const FG01PartyLearnArtsStruct& InRemoveArts) {
}

void UG01LearnArtsManagerAccessor::IsRegisterArts(const FG01PartyLearnArtsStruct& InArts, bool& ReIsRegist) {
}

void UG01LearnArtsManagerAccessor::GetRegisterSpellByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReSpellList) {
}

void UG01LearnArtsManagerAccessor::GetRegisterSpell(TArray<FG01PartyLearnArtsStruct>& ReSpellList) {
}

void UG01LearnArtsManagerAccessor::GetRegisterSkillByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReSkillList) {
}

void UG01LearnArtsManagerAccessor::GetRegisterSkill(TArray<FG01PartyLearnArtsStruct>& ReSkillList) {
}

void UG01LearnArtsManagerAccessor::GetRegisterFathomByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReFathomList) {
}

void UG01LearnArtsManagerAccessor::GetRegisterFathom(TArray<FG01PartyLearnArtsStruct>& ReFathomList) {
}

void UG01LearnArtsManagerAccessor::GetLearnSpellList(TArray<FG01PartyLearnArtsStruct>& ReSpellList) {
}

void UG01LearnArtsManagerAccessor::GetLearnSpellByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReArtsList) {
}

void UG01LearnArtsManagerAccessor::GetLearnSkillList(TArray<FG01PartyLearnArtsStruct>& ReSkillList) {
}

void UG01LearnArtsManagerAccessor::GetLearnSkillByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReArtsList) {
}

void UG01LearnArtsManagerAccessor::GetLearnFathomList(TArray<FG01PartyLearnArtsStruct>& ReFathomList) {
}

void UG01LearnArtsManagerAccessor::GetLearnFathomByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReArtsList) {
}

bool UG01LearnArtsManagerAccessor::AddRegisterSpell(const FG01PartyLearnArtsStruct& InRegisterSpell) {
    return false;
}

bool UG01LearnArtsManagerAccessor::AddRegisterSkill(const FG01PartyLearnArtsStruct& InRegisterSkill) {
    return false;
}

bool UG01LearnArtsManagerAccessor::AddRegisterArts(const FG01PartyLearnArtsStruct& InRegisterArts) {
    return false;
}

void UG01LearnArtsManagerAccessor::AddLearnSpell(const FG01PartyLearnArtsStruct& InLearnSpell) {
}

void UG01LearnArtsManagerAccessor::AddLearnSkill(const FG01PartyLearnArtsStruct& InLearnSkill) {
}

void UG01LearnArtsManagerAccessor::AddLearnFathom(UObject* InWorldContext, const FG01PartyLearnArtsStruct& InLearnFathom) {
}


