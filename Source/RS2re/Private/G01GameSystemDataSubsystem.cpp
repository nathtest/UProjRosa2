#include "G01GameSystemDataSubsystem.h"

UG01GameSystemDataSubsystem::UG01GameSystemDataSubsystem() {
    this->MyHelperObject = NULL;
    this->IsClearFlag = false;
    this->IsStaffRollFlag = false;
}

void UG01GameSystemDataSubsystem::SetOptionSetting(FG01OptionSettingParamStruct InParams) {
}

void UG01GameSystemDataSubsystem::SetIsPlayStaffRoll(bool InIsPlay) {
}

void UG01GameSystemDataSubsystem::SetIsClear(bool InIsClear) {
}

void UG01GameSystemDataSubsystem::SetDLCEnable(const FString& InDLCName) {
}

bool UG01GameSystemDataSubsystem::IsDLCEnable(const FString& InDLCName) {
    return false;
}

void UG01GameSystemDataSubsystem::GetOptionSetting(FG01OptionSettingParamStruct& OutParams) {
}

FG01OptionSettingParamStruct UG01GameSystemDataSubsystem::GetOptionInitParam() const {
    return FG01OptionSettingParamStruct{};
}

void UG01GameSystemDataSubsystem::GetOptionConst(FG01OptionConstParamStruct& OutParams) {
}

EG01MessageSpeedTypeEnum UG01GameSystemDataSubsystem::GetMessageSpeedType() const {
    return EG01MessageSpeedTypeEnum::STANDARD;
}

void UG01GameSystemDataSubsystem::GetIsPlayStaffRoll(bool& OutIsPlay) {
}

void UG01GameSystemDataSubsystem::GetIsClear(bool& OutIsClear) {
}

void UG01GameSystemDataSubsystem::GetHelperObject(UG01GameSystemDataSubsystemHelper*& OutHelper) {
}


