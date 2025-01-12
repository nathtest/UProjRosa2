#include "G01ThroneMenuManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01ThroneMenuManagerAccessor::UG01ThroneMenuManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_THRONE;
}

void UG01ThroneMenuManagerAccessor::SetThroneEndFlag(FG01ThroneMenuUiControllerDataStructID InID, bool InEndFlag) {
}

void UG01ThroneMenuManagerAccessor::SetThroneDevelopingFlag(FG01ThroneMenuUiControllerDataStructID InID, bool InDevelopingFlag) {
}

void UG01ThroneMenuManagerAccessor::SetThroneDevelopableFlag(FG01ThroneMenuUiControllerDataStructID InID, bool InDevelopableFlag) {
}

void UG01ThroneMenuManagerAccessor::SetThroneComplateFlag(FG01ThroneMenuUiControllerDataStructID InID, bool InComplateFlag) {
}

void UG01ThroneMenuManagerAccessor::SetEventTargetInstitution(FG01ThroneMenuUiControllerDataStructID InID) {
}

void UG01ThroneMenuManagerAccessor::GetThroneEndFlag(FG01ThroneMenuUiControllerDataStructID InID, bool& OutEndFlag) {
}

void UG01ThroneMenuManagerAccessor::GetThroneDevelopingFlag(FG01ThroneMenuUiControllerDataStructID InID, bool& OutDevelopingFlag) {
}

void UG01ThroneMenuManagerAccessor::GetThroneDevelopableFlag(FG01ThroneMenuUiControllerDataStructID InID, bool& OutDevelopableFlag) {
}

void UG01ThroneMenuManagerAccessor::GetThroneComplateFlag(FG01ThroneMenuUiControllerDataStructID InID, bool& OutComplateFlag) {
}

void UG01ThroneMenuManagerAccessor::GetSectionName(FG01ThroneMenuUiControllerDataStructID InID, FQuestSectionNameView& SectionNameView) {
}

void UG01ThroneMenuManagerAccessor::GetNationPower(FG01ThroneMenuUiControllerDataStructID InID, int32& OutNationalPower) {
}

void UG01ThroneMenuManagerAccessor::GetInstitutionPrice(FG01ThroneMenuUiControllerDataStructID InID, int32& OutPrice) {
}

void UG01ThroneMenuManagerAccessor::GetInstitutionMaxLevel(EG01ThroneCategoryEnum InCategory, int32& OutMaxLevel) {
}

void UG01ThroneMenuManagerAccessor::GetFlagName(FG01ThroneMenuUiControllerDataStructID InID, FName& OutFlagName) {
}

void UG01ThroneMenuManagerAccessor::GetEventTargetInstitution(FG01ThroneMenuUiControllerDataStructID& OutId) {
}

void UG01ThroneMenuManagerAccessor::GetEmperorTechniqueLvCombinedValue(FG01ThroneMenuUiControllerDataStructID InID, int32& OutEmperorSkillLvCombinedValue) {
}

void UG01ThroneMenuManagerAccessor::GetEmperorSpellLvCombinedValue(FG01ThroneMenuUiControllerDataStructID InID, int32& OutEmperorSpellLvCombinedValue) {
}

void UG01ThroneMenuManagerAccessor::GetEmperorBattleNum(FG01ThroneMenuUiControllerDataStructID InID, int32& OutEmperorBattleNum) {
}

void UG01ThroneMenuManagerAccessor::GetCurrentInstitutionLevel(EG01ThroneCategoryEnum InCategory, int32& OutCurrentLevel) {
}

void UG01ThroneMenuManagerAccessor::GetComplateInstitutionID(FG01ThroneMenuUiControllerDataStructID InID, FName& OutComplateInstitutionID) {
}

void UG01ThroneMenuManagerAccessor::GetClearAreaNum(FG01ThroneMenuUiControllerDataStructID InID, int32& OutClearAreaNum) {
}

void UG01ThroneMenuManagerAccessor::GetBlackSmithLevel(int32& Level) {
}

void UG01ThroneMenuManagerAccessor::GetBattleNum(FG01ThroneMenuUiControllerDataStructID InID, int32& OutBattleNum) {
}


