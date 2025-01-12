#include "G01GraphicsSettingManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01GraphicsSettingManagerAccessor::UG01GraphicsSettingManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_GRAPHICSSETTING;
}

void UG01GraphicsSettingManagerAccessor::UpdateAspectSetting() {
}

void UG01GraphicsSettingManagerAccessor::SetTextureQuality(EG01TextureQualityTypeEnum InGameQuality) {
}

void UG01GraphicsSettingManagerAccessor::SetShadowQuality(EG01ShadowQualityTypeEnum InGameQuality) {
}

void UG01GraphicsSettingManagerAccessor::SetRenderingQuality(EG01RenderingTypeEnum InGameQuality) {
}

void UG01GraphicsSettingManagerAccessor::SetGraphicsPreset(EG01GraphicsPresetTypeEnum InPresetType) {
}

void UG01GraphicsSettingManagerAccessor::SetCurrentScreenResolution(FIntPoint InScreenResolution) {
}

void UG01GraphicsSettingManagerAccessor::SetCurrentScreenMode(EG01ScreenModeTypeEnum InScreenMode) {
}

void UG01GraphicsSettingManagerAccessor::SetBrightness(float InPercent) {
}

void UG01GraphicsSettingManagerAccessor::SetBootGameFlag(bool InFlag) {
}

void UG01GraphicsSettingManagerAccessor::SetAntiAliasingQuality(bool InEnable) {
}

EG01TextureQualityTypeEnum UG01GraphicsSettingManagerAccessor::GetTextureQuality() {
    return EG01TextureQualityTypeEnum::LOW;
}

EG01ShadowQualityTypeEnum UG01GraphicsSettingManagerAccessor::GetShadowQuality() {
    return EG01ShadowQualityTypeEnum::LOW;
}

EG01RenderingTypeEnum UG01GraphicsSettingManagerAccessor::GetRenderingQuality() {
    return EG01RenderingTypeEnum::LOW;
}

FIntPoint UG01GraphicsSettingManagerAccessor::GetCurrentScreenResolution() {
    return FIntPoint{};
}

EG01ScreenModeTypeEnum UG01GraphicsSettingManagerAccessor::GetCurrentScreenMode() {
    return EG01ScreenModeTypeEnum::WINDOW;
}

EG01AspectRatioTypeEnum UG01GraphicsSettingManagerAccessor::GetCurrentAspectRatio() {
    return EG01AspectRatioTypeEnum::ASPECT_16_9;
}

bool UG01GraphicsSettingManagerAccessor::GetBootGameFlag() {
    return false;
}

TArray<FIntPoint> UG01GraphicsSettingManagerAccessor::GetAspectResolutionList(EG01AspectRatioTypeEnum InAspectRatio) {
    return TArray<FIntPoint>();
}

bool UG01GraphicsSettingManagerAccessor::GetAntiAliasingQuality() {
    return false;
}

TArray<FIntPoint> UG01GraphicsSettingManagerAccessor::GetAllResolutionList() {
    return TArray<FIntPoint>();
}

void UG01GraphicsSettingManagerAccessor::AutoGraphicsSetting() {
}


