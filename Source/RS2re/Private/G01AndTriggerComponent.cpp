#include "G01AndTriggerComponent.h"

UG01AndTriggerComponent::UG01AndTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MNum = 2;
}

void UG01AndTriggerComponent::SetValue_Implementation(int32 InIndex, bool InValue, EAndTriggerComponentSetValueBranchesEnum& Branches) {
}

void UG01AndTriggerComponent::Reset_Implementation() {
}

void UG01AndTriggerComponent::GetValue_Implementation(int32 InIndex, bool& OutValue) {
}

void UG01AndTriggerComponent::GetAndValue_Implementation(bool& OutAndValue) {
}


