#include "G01CharacterIDComponent.h"

UG01CharacterIDComponent::UG01CharacterIDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MEnemyIDDataTable = NULL;
    this->MPartyIDDataTable = NULL;
}

void UG01CharacterIDComponent::SetRawCharacterID(const FName& InCharacterId) {
}

void UG01CharacterIDComponent::SetCharacterID(const FG01CharacterID& InCharacterId) {
}

void UG01CharacterIDComponent::GetRawCharacterID(FName& OutCharacterId) {
}

void UG01CharacterIDComponent::GetCharacterText(FText& OutCharacterText) {
}

void UG01CharacterIDComponent::GetCharacterName(FName& OutCharacterId) {
}

void UG01CharacterIDComponent::GetCharacterID(FG01CharacterID& OutCharacterId) {
}


