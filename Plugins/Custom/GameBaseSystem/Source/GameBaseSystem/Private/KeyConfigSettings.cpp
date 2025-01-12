#include "KeyConfigSettings.h"

UKeyConfigSettings::UKeyConfigSettings() {
    this->CategoryTable = NULL;
    this->UnsupportedTextShowTime = 2.00f;
}

TArray<UKeyConfigPreset*> UKeyConfigSettings::GetUseKeyConfigPresets() const {
    return TArray<UKeyConfigPreset*>();
}

void UKeyConfigSettings::FindCategoryData(FKeyConfigOperationCategory InCategory, bool& OutIsFound, FKeyConfigOperationCategoryTableRow& OutRow) const {
}


