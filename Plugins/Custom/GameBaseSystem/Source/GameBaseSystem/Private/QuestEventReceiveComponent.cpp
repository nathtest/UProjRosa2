#include "QuestEventReceiveComponent.h"

UQuestEventReceiveComponent::UQuestEventReceiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MQuestManager = NULL;
}

void UQuestEventReceiveComponent::RemoveEventReceiveQuestSectionCompleted(const FQuestReceiveReserveParamQuestSectionCompleted& InSectionCompletedParam) {
}

void UQuestEventReceiveComponent::RemoveEventReceiveQuestSectionChanged(const FQuestReceiveReserveParamSectionChanged& InSectionChangedParam) {
}

void UQuestEventReceiveComponent::RemoveEventReceiveQuestOrdered(const FQuestReceiveReserveParamOrdered& InOrderedParam) {
}

void UQuestEventReceiveComponent::RemoveEventReceiveQuestInSectionRange(const FQuestReceiveReserveParamInSectionRange& InSectionRangeParam) {
}

void UQuestEventReceiveComponent::RemoveEventReceiveQuestFinish(const FQuestReceiveReserveParamFinish& InFinishParam) {
}

void UQuestEventReceiveComponent::RemoveEventReceiveQuestBegin(const FQuestReceiveReserveParamBegin& InBeginParam) {
}

void UQuestEventReceiveComponent::AddEventReceiveQuestSectionCompleted(const FQuestReceiveReserveParamQuestSectionCompleted& InSectionCompletedParam) {
}

void UQuestEventReceiveComponent::AddEventReceiveQuestSectionChanged(const FQuestReceiveReserveParamSectionChanged& InSectionChangedParam) {
}

void UQuestEventReceiveComponent::AddEventReceiveQuestOrdered(const FQuestReceiveReserveParamOrdered& InOrderedParam) {
}

void UQuestEventReceiveComponent::AddEventReceiveQuestInSectionRange(const FQuestReceiveReserveParamInSectionRange& InSectionRangeParam) {
}

void UQuestEventReceiveComponent::AddEventReceiveQuestFinish(const FQuestReceiveReserveParamFinish& InFinishParam) {
}

void UQuestEventReceiveComponent::AddEventReceiveQuestBegin(const FQuestReceiveReserveParamBegin& InBeginParam) {
}


