#include "G01GraphicsSettingManager.h"

AG01GraphicsSettingManager::AG01GraphicsSettingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AG01GraphicsSettingManager::UpdateCameraAspectAndFieldOfView(UCameraComponent* InCamera, float InFov16, float InFov21) {
}

void AG01GraphicsSettingManager::UpdateAspectSetting() {
}

void AG01GraphicsSettingManager::SetOptionSettingParamTextureQualityType(EG01TextureQualityTypeEnum InTextureQuality) {
}

void AG01GraphicsSettingManager::SetOptionSettingParamShadowQualityType(EG01ShadowQualityTypeEnum InShadowQuality) {
}

void AG01GraphicsSettingManager::SetOptionSettingParamRenderingType(EG01RenderingTypeEnum InRenderingType) {
}

void AG01GraphicsSettingManager::SetOptionSettingParamGraphicsPresetType(EG01GraphicsPresetTypeEnum GraphicsPresetType) {
}

void AG01GraphicsSettingManager::SetOptionSettingParamAntiAliasing(bool InAntiAliasing) {
}

void AG01GraphicsSettingManager::SetForceConstrainAspectRatio(bool InValue) {
}

void AG01GraphicsSettingManager::SetAllSettings(EG01ScreenModeTypeEnum InGameScreenMode, FIntPoint InScreenResolution, bool InGameEnableAnti, EG01TextureQualityTypeEnum InGameTextureFilteringQuality, EG01ShadowQualityTypeEnum InGameShadowQuality, EG01RenderingTypeEnum InGameRenderingQuality) {
}

void AG01GraphicsSettingManager::SaveSettings() {
}

bool AG01GraphicsSettingManager::Has_21_9_AspectResolution() {
    return false;
}

FG01OptionSettingParamStruct AG01GraphicsSettingManager::GetOptionSettingParam() {
    return FG01OptionSettingParamStruct{};
}

EG01AspectRatioTypeEnum AG01GraphicsSettingManager::GetGameAspectRatio(FIntPoint InResolution) {
    return EG01AspectRatioTypeEnum::ASPECT_16_9;
}

void AG01GraphicsSettingManager::ForceConstrainAspectRatioTest() {
}


