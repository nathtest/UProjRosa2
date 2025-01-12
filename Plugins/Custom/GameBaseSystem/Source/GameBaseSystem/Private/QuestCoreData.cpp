#include "QuestCoreData.h"

UQuestCoreData::UQuestCoreData() {
    this->DataIndex = -1;
    this->Parent = NULL;
    this->Hierarchy = 0;
    this->NextSection = -2;
}

void UQuestCoreData::SetNextSection(int32 InSection) {
}

bool UQuestCoreData::IsSucceededQuest() const {
    return false;
}

bool UQuestCoreData::IsStartedQuest() const {
    return false;
}

bool UQuestCoreData::IsSectionWorking() const {
    return false;
}

bool UQuestCoreData::IsPassedSection(int32 InSectionIndex) const {
    return false;
}

bool UQuestCoreData::IsOrdered() const {
    return false;
}

bool UQuestCoreData::IsMostParent() const {
    return false;
}

bool UQuestCoreData::IsFailedQuest() const {
    return false;
}

bool UQuestCoreData::IsEndQuest() const {
    return false;
}

bool UQuestCoreData::IsCustomQuest() const {
    return false;
}

bool UQuestCoreData::IsChildQuest() const {
    return false;
}

bool UQuestCoreData::IsActiveOrderState() const {
    return false;
}

bool UQuestCoreData::HasAvailablePeriod() const {
    return false;
}

bool UQuestCoreData::HasAnySectionState(TEnumAsByte<EQuestSectionState::Type> InCheckState) const {
    return false;
}

bool UQuestCoreData::HasAnyOrderState(TEnumAsByte<EQuestOrderState::Type> InCheckState) const {
    return false;
}

bool UQuestCoreData::HasAllSectionState(TEnumAsByte<EQuestSectionState::Type> InCheckState) const {
    return false;
}

bool UQuestCoreData::HasAllOrderState(TEnumAsByte<EQuestOrderState::Type> InCheckState) const {
    return false;
}

TArray<int32> UQuestCoreData::GetValidSectionTransitionLog() const {
    return TArray<int32>();
}

int32 UQuestCoreData::GetStackIndex() const {
    return 0;
}

int32 UQuestCoreData::GetSectionTransitionLogIndex() const {
    return 0;
}

TArray<int32> UQuestCoreData::GetSectionTransitionLog() const {
    return TArray<int32>();
}

TEnumAsByte<EQuestSectionState::Type> UQuestCoreData::GetSectionState() const {
    return EQuestSectionState::None;
}

void UQuestCoreData::GetSectionParam(int32 InSectionIndex, bool& OutIsValid, FQuestSectionParam& OutParam) const {
}

int32 UQuestCoreData::GetSectionIndex() const {
    return 0;
}

FName UQuestCoreData::GetRoomID() const {
    return NAME_None;
}

int32 UQuestCoreData::GetQuestUniqueID() const {
    return 0;
}

FName UQuestCoreData::GetQuestNameTextID() const {
    return NAME_None;
}

FName UQuestCoreData::GetQuestID() const {
    return NAME_None;
}

TSoftClassPtr<AQuestObjectBase> UQuestCoreData::GetQuestClass() const {
    return NULL;
}

FQuestCategory UQuestCoreData::GetQuestCategory() const {
    return FQuestCategory{};
}

void UQuestCoreData::GetPostSectionIndex(int32& OutIndex) const {
}

FName UQuestCoreData::GetParentQuestID() const {
    return NAME_None;
}

void UQuestCoreData::GetParent(bool& OutIsValid, UQuestCoreData*& OutParent) const {
}

FName UQuestCoreData::GetOriginalQuestID() const {
    return NAME_None;
}

TEnumAsByte<EQuestOrderState::Type> UQuestCoreData::GetOrderState() const {
    return EQuestOrderState::OS_NONE;
}

int32 UQuestCoreData::GetNextSection() const {
    return 0;
}

FName UQuestCoreData::GetMostParentQuestID() const {
    return NAME_None;
}

void UQuestCoreData::GetMostParentOrSelf(UQuestCoreData*& OutCoreData) {
}

void UQuestCoreData::GetMostParent(bool& OutIsFound, UQuestCoreData*& OutMostParent) const {
}

int32 UQuestCoreData::GetHierarchy() const {
    return 0;
}

TArray<FQuestSectionLogData> UQuestCoreData::GetFullSectionTransitionLog() const {
    return TArray<FQuestSectionLogData>();
}

int32 UQuestCoreData::GetFlowBranchResultLogIndex() const {
    return 0;
}

TArray<EQuestSectionFlowBranchResult> UQuestCoreData::GetFlowBranchResultLog() const {
    return TArray<EQuestSectionFlowBranchResult>();
}

FName UQuestCoreData::GetCustomQuestID() const {
    return NAME_None;
}

void UQuestCoreData::GetChildren(bool& OutIsExists, TArray<UQuestCoreData*>& OutChildren, bool InIsRecursive) const {
}

FQuestBasisParameter UQuestCoreData::GetBasisParameter() const {
    return FQuestBasisParameter{};
}

void UQuestCoreData::FindChild(FName InQuestID, bool& OutIsFound, UQuestCoreData*& OutChild) const {
}

void UQuestCoreData::Clear() {
}

bool UQuestCoreData::CheckEndState(TEnumAsByte<EQuestEndCheckType::Type> InCheckType) const {
    return false;
}


