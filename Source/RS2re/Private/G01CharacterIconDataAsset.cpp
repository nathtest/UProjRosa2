#include "G01CharacterIconDataAsset.h"

UG01CharacterIconDataAsset::UG01CharacterIconDataAsset() {
    this->MMenuTabIconDataTable = NULL;
    this->MEmperorChoiceIconDataTable = NULL;
}

TSoftObjectPtr<UTexture2D> UG01CharacterIconDataAsset::GetMenuTabIcon(const FG01CharacterID& InCharaID, bool& ReIsValid) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UG01CharacterIconDataAsset::GetEmperorChoiceIcon(const FG01CharacterID& InCharaID, bool& ReIsValid) {
    return NULL;
}


