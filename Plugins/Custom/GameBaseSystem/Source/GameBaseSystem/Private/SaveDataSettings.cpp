#include "SaveDataSettings.h"

USaveDataSettings::USaveDataSettings() {
    this->IndexFormatKey = TEXT("%idx");
}

void USaveDataSettings::RebuildProperties() {
}

void USaveDataSettings::GetSaveFileName(bool& OutIsSuccess, FString& OutFileName, const FSaveDataRequestInfo& InRequest) const {
}

TArray<FAutoSaveParams> USaveDataSettings::GetAutoSaveParams() const {
    return TArray<FAutoSaveParams>();
}

void USaveDataSettings::FindSaveGroupData(bool& OutIsFound, FSaveDataGroupParams& OutRow, ESaveDataGroup InGroup) const {
}

void USaveDataSettings::FindSaveCategoryData(bool& OutIsFound, FSaveDataCategoryParams& OutRow, ESaveSlotCategory InCategory) const {
}


