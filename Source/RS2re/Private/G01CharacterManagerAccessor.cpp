#include "G01CharacterManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01CharacterManagerAccessor::UG01CharacterManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_OBJECTCHARA;
}

void UG01CharacterManagerAccessor::SetCharacterVisualType(const FG01CharacterID& InCharacterId, const EG01CharacterVisualType& InVisualType) {
}

void UG01CharacterManagerAccessor::SetCharacterVariationType(const FG01VariationCharaIDStruct& InVariationCharacterID, const EG01CharacterVariationType& InVariationType) {
}

void UG01CharacterManagerAccessor::ResetCharacterVisualType(const FG01CharacterID& InCharacterId) {
}

void UG01CharacterManagerAccessor::ResetCharacterVariationType(const FG01VariationCharaIDStruct& InVariationCharacterID) {
}

void UG01CharacterManagerAccessor::ResetAllCharacterVisualType() {
}

void UG01CharacterManagerAccessor::ResetAllCharacterVariationType() {
}

void UG01CharacterManagerAccessor::GetVisualActorClass(const FG01CharacterID InCharaID, const EG01CharacterVisualActorType InCharacterVisualActorType, TSoftClassPtr<AG01CharacterVisualActor>& OutVisualActorClass) const {
}

void UG01CharacterManagerAccessor::GetCharacterVisualType(const FG01CharacterID& InCharacterId, EG01CharacterVisualType& OutVisualType) const {
}

void UG01CharacterManagerAccessor::GetCharacterVariationType(const FG01VariationCharaIDStruct& InVariationCharacterID, EG01CharacterVariationType& OutVariationType) const {
}

FG01CharaMinimalInfoTableRow UG01CharacterManagerAccessor::FindCharaMinimalInfo(const FG01CharacterID& InCharaID) {
    return FG01CharaMinimalInfoTableRow{};
}


