#include "G01SystemSaveGameData.h"

UG01SystemSaveGameData::UG01SystemSaveGameData() {
    this->IsClearFlag = false;
    this->IsPlayStaffRoll = false;
}

void UG01SystemSaveGameData::SetOptionSettingInfo(const FG01OptionSettingParamStruct& InParams) {
}

void UG01SystemSaveGameData::SetIsPlayStaffRoll(bool InIsPlayStaffRoll) {
}

void UG01SystemSaveGameData::SetIsClear(bool InIsClear) {
}

void UG01SystemSaveGameData::SetBgmExtractionInfo(const FG01BgmSubsystemExtractionStruct& InData) {
}

FG01OptionSettingParamStruct UG01SystemSaveGameData::GetOptionSettingParams() const {
    return FG01OptionSettingParamStruct{};
}

void UG01SystemSaveGameData::GetIsPlayStaffRoll(bool& OutIsPlayStaffRoll) const {
}

void UG01SystemSaveGameData::GetIsClear(bool& OutIsClear) const {
}

FG01BgmSubsystemExtractionStruct UG01SystemSaveGameData::GetBgmExtractionInfo() const {
    return FG01BgmSubsystemExtractionStruct{};
}


