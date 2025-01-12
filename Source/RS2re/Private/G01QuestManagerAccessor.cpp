#include "G01QuestManagerAccessor.h"

UG01QuestManagerAccessor::UG01QuestManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UG01QuestManagerAccessor::IsEnableAllQuestDestination() const {
    return false;
}

void UG01QuestManagerAccessor::GetTargetQuestDestination(TArray<FG01QuestTargetDestData>& OutQuestDestList) {
}

void UG01QuestManagerAccessor::GetNotifyCount(EG01QuestNotifyCountType InType, int32& OutNotifyCount) {
}

TArray<AG01QuestObjectBase*> UG01QuestManagerAccessor::G01GetOrderedQuestList() {
    return TArray<AG01QuestObjectBase*>();
}

void UG01QuestManagerAccessor::ForceSectionChange(TSoftClassPtr<AQuestObjectBase> InQuestClass, FQuestSectionNameView InSection, int32 InQuestPrerequisiteIndex, int32 InFlagPrerequisiteIndex) {
}

void UG01QuestManagerAccessor::FindQuestData(FName InQuestID, bool& OutIsValid, FG01QuestDataStruct& OutQuestData) const {
}

void UG01QuestManagerAccessor::DeactivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex) {
}

void UG01QuestManagerAccessor::CheckQuestDestinationByRegionID(FName InRegionID, TArray<FG01QuestDestCheckResult>& ReResult) {
}

void UG01QuestManagerAccessor::CheckQuestDestinationByMapID(FName InMapID, TArray<FG01QuestDestCheckResult>& ReResult) {
}

void UG01QuestManagerAccessor::CheckQuestDestination(const FG01DestinationLocationInfo& InCheckLocation, TArray<FG01QuestDestCheckResult>& ReResult) {
}

void UG01QuestManagerAccessor::ActivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex, EG01QuestChronicleState InState) {
}

void UG01QuestManagerAccessor::ActivateAllChronicle() {
}


