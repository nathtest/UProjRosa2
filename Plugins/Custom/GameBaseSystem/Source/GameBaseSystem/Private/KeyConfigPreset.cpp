#include "KeyConfigPreset.h"

UKeyConfigPreset::UKeyConfigPreset() {
    this->AssignDataInitOptions = 0;
    this->KeyConfigType = EKeyConfigType::KeyboardAndMouse;
    this->KeyConfigTable = NULL;
}

void UKeyConfigPreset::UpdateDefaultKeyMappings() {
}

int32 UKeyConfigPreset::GetMaxBindNum() const {
    return 0;
}

void UKeyConfigPreset::FindCategorySettings(const FKeyConfigOperationCategory& InCategory, FKeyConfigOperationCategorySettings& OutCategorySettings) const {
}

void UKeyConfigPreset::FindAssignData(bool& OutIsFound, FKeyConfigAssignTableRow& OutRow, const FName& InAssignID, bool InIsCheckDependence) const {
}


