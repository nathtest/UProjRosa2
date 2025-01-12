#include "G01EnvironmentManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01EnvironmentManagerAccessor::UG01EnvironmentManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_ENVIRONMENT;
}

void UG01EnvironmentManagerAccessor::UpdateEnvironment() {
}

void UG01EnvironmentManagerAccessor::SetupEnvironmentBySetting(const FString& InEnvSettingName) {
}

void UG01EnvironmentManagerAccessor::SetupEnvironmentByEnvPresetDataAsset(FG01EnvPresetDataAssetID InEnvPresetDataAssetID) {
}

void UG01EnvironmentManagerAccessor::SetEnvSetting() {
}

void UG01EnvironmentManagerAccessor::SetBrightness(float inBrightness) {
}

void UG01EnvironmentManagerAccessor::RevertEnvironmentPreset() {
}

void UG01EnvironmentManagerAccessor::RegistOverrideEnvPresetDataAsset(FG01EnvPresetDataAssetID InEnvPresetDataAssetID) {
}

bool UG01EnvironmentManagerAccessor::IsSetEnvSetting() {
    return false;
}

bool UG01EnvironmentManagerAccessor::IsCompleteSetupEnvironment() {
    return false;
}

void UG01EnvironmentManagerAccessor::GetCurrentEnvPresetDataAsset(FG01EnvPresetDataAssetID& InEnvPresetDataAssetID) {
}

bool UG01EnvironmentManagerAccessor::CompareEnvPresetDataAsset(FG01EnvPresetDataAssetID InEnvPresetDataAssetID) {
    return false;
}

void UG01EnvironmentManagerAccessor::ClearEnvSetting() {
}

void UG01EnvironmentManagerAccessor::BackupEnvironmentPreset() {
}


