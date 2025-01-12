#include "G01PartyVariableStatusComponent.h"

UG01PartyVariableStatusComponent::UG01PartyVariableStatusComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UG01PartyVariableStatusComponent::SetStatus(const FG01CharacterID& InCharacterId, const FG01CharaVariableStatus& InStatus) {
}

void UG01PartyVariableStatusComponent::SetLP(const FG01CharacterID& InCharacterId, int32 InLp) {
}

void UG01PartyVariableStatusComponent::SetHP(const FG01CharacterID& InCharacterId, int32 InHp) {
}

void UG01PartyVariableStatusComponent::SetBP(const FG01CharacterID& InCharacterId, int32 InBp) {
}

void UG01PartyVariableStatusComponent::RecoverLP(const FG01CharacterID& InCharacterId) {
}

void UG01PartyVariableStatusComponent::RecoverHP(const FG01CharacterID& InCharacterId) {
}

void UG01PartyVariableStatusComponent::RecoverBP(const FG01CharacterID& InCharacterId) {
}

bool UG01PartyVariableStatusComponent::GetTemporaryLeaveCharaStatus(const FG01CharacterID& InCharacterId, FG01CharaVariableStatus& OutStatus) {
    return false;
}

bool UG01PartyVariableStatusComponent::GetStatus(const FG01CharacterID& InCharacterId, FG01CharaVariableStatus& OutStatus) {
    return false;
}

int32 UG01PartyVariableStatusComponent::GetLP(const FG01CharacterID& InCharacterId) const {
    return 0;
}

int32 UG01PartyVariableStatusComponent::GetHP(const FG01CharacterID& InCharacterId) const {
    return 0;
}

int32 UG01PartyVariableStatusComponent::GetBP(const FG01CharacterID& InCharacterId) const {
    return 0;
}


