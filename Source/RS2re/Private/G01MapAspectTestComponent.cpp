#include "G01MapAspectTestComponent.h"

UG01MapAspectTestComponent::UG01MapAspectTestComponent() {
    this->MMapAspectTransitionTable = NULL;
    this->MArtsTypeMapAspectTable = NULL;
    this->MProbabilityBonusTable = NULL;
    this->MAttackBonusTable = NULL;
}

void UG01MapAspectTestComponent::ResetMapAspect(EG01MapAspectType InType) {
}

FString UG01MapAspectTestComponent::GetMapAspectName(EG01MapAspectType InType) {
    return TEXT("");
}

FString UG01MapAspectTestComponent::GetLogText() {
    return TEXT("");
}

EG01MapAspectType UG01MapAspectTestComponent::GetCurrentMapAspect() {
    return EG01MapAspectType::Invalid;
}

FString UG01MapAspectTestComponent::GetAvailableMapAspectText() {
    return TEXT("");
}

bool UG01MapAspectTestComponent::GetAttackBonus(bool InIsPlayer, EG01BattleArtsType InArtsType, float& OutAttackBonus) {
    return false;
}

FString UG01MapAspectTestComponent::GetArtsTypeName(EG01BattleArtsType InType) {
    return TEXT("");
}

void UG01MapAspectTestComponent::ExecuteArts(bool InIsPlayer, EG01BattleArtsType InSourceArtsType) {
}


