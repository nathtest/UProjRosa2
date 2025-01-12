#include "G01GraphicsSettingSubsystem.h"

UG01GraphicsSettingSubsystem::UG01GraphicsSettingSubsystem() {
}

void UG01GraphicsSettingSubsystem::SetVSync(bool InEnable) {
}

void UG01GraphicsSettingSubsystem::SetMaxFPS(EG01FrameRateTypeEnum InMaxFPS) {
}

void UG01GraphicsSettingSubsystem::SetGamma(float InGamma) {
}

void UG01GraphicsSettingSubsystem::SetBootGameFlag(bool InFlag) {
}

UG01GameSystemDataSubsystem* UG01GraphicsSettingSubsystem::GetGameSystemDataSubsystem() const {
    return NULL;
}

bool UG01GraphicsSettingSubsystem::GetBootGameFlag() {
    return false;
}

TArray<FIntPoint> UG01GraphicsSettingSubsystem::GetAllResolutionList() {
    return TArray<FIntPoint>();
}

void UG01GraphicsSettingSubsystem::CreateAllResolutionList() {
}

float UG01GraphicsSettingSubsystem::ConvBrightnessToGamma(float inBrightness) {
    return 0.0f;
}

void UG01GraphicsSettingSubsystem::ConfigurePerformance() {
}

void UG01GraphicsSettingSubsystem::AutoGraphicsSetting() {
}


