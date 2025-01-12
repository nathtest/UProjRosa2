#include "G01AbilityLearnUnit.h"

UG01AbilityLearnUnit::UG01AbilityLearnUnit() {
    this->LearnQuest = NULL;
    this->LearnProgress = 0;
    this->MasteryProgress = 0;
}

void UG01AbilityLearnUnit::IsOpen(bool& Out) {
}

void UG01AbilityLearnUnit::IsMastery(bool& Out) {
}

void UG01AbilityLearnUnit::IsLearn(bool& Out) {
}

void UG01AbilityLearnUnit::GetMasteryProgress(FG01AbilityCondition& OutCondition, int32& OutProgress) {
}

void UG01AbilityLearnUnit::GetLearnProgress(FG01AbilityCondition& OutCondition, int32& OutProgress) {
}

void UG01AbilityLearnUnit::GetAbilityId(FName& OutAbilityId) {
}


