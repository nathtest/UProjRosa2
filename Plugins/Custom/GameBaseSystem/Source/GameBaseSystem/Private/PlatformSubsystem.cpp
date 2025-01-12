#include "PlatformSubsystem.h"

UPlatformSubsystem::UPlatformSubsystem() {
    this->Helper = NULL;
    this->CurrentVisibility = ESlateVisibility::Visible;
    this->CurrentOpacity = 1.00f;
}

void UPlatformSubsystem::SetPlatformWidgetVisibility(ESlateVisibility InVisibility) {
}

void UPlatformSubsystem::SetPlatformWidgetOpacity(float InOpacity) {
}

ESlateVisibility UPlatformSubsystem::GetPlatformWidgetVisibility() const {
    return ESlateVisibility::Visible;
}

float UPlatformSubsystem::GetPlatformWidgetOpacity() const {
    return 0.0f;
}


