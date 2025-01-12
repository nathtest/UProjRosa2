#include "PlatformKeyImage.h"

UPlatformKeyImage::UPlatformKeyImage() {
    this->MappingType = EPlatformKeyImageMappingType::MappingName;
    this->MappingNames.AddDefaulted(1);
    this->ButtonScale = 1.00f;
    this->bIsFixedPlatform = false;
    this->FixedPlatform = EPlatformType::PLATFORM_TYPE_WINDOWS;
    this->InvalidVisibility = ESlateVisibility::Visible;
    this->bIsRegisteredObserver = false;
}

void UPlatformKeyImage::SetPreviewPlatform(EPlatformType InPlatform) {
}

void UPlatformKeyImage::SetMappingType(EPlatformKeyImageMappingType InMappingType) {
}

void UPlatformKeyImage::SetMappingNames(const TArray<FInputMappingName>& InMappingNames) {
}

void UPlatformKeyImage::SetMappingAxisKeys(const TArray<FInputAxisKeyMapping>& InAxisMappings) {
}

void UPlatformKeyImage::SetMappingActionKeys(const TArray<FInputActionKeyMapping>& InActionMappings) {
}

void UPlatformKeyImage::SetInvalidVisibility(ESlateVisibility InVisibility) {
}

void UPlatformKeyImage::SetFixedPlatformType(EPlatformType InFixedPlatform) {
}

void UPlatformKeyImage::SetEnableFixedPlatform(bool InIsFixed) {
}

void UPlatformKeyImage::SetButtonScale(float InScale) {
}

void UPlatformKeyImage::RemoveMappingName(FInputMappingName InMappingName) {
}

void UPlatformKeyImage::RemoveMappingAxisKey(FInputAxisKeyMapping InAxisMapping) {
}

void UPlatformKeyImage::RemoveMappingActionKey(FInputActionKeyMapping InActionMapping) {
}

TArray<FInputMappingName> UPlatformKeyImage::GetMappingNames() const {
    return TArray<FInputMappingName>();
}

TArray<FInputAxisKeyMapping> UPlatformKeyImage::GetMappingAxisKeys() const {
    return TArray<FInputAxisKeyMapping>();
}

TArray<FInputActionKeyMapping> UPlatformKeyImage::GetMappingActionKeys() const {
    return TArray<FInputActionKeyMapping>();
}

void UPlatformKeyImage::AddMappingName(FInputMappingName InMappingName) {
}

void UPlatformKeyImage::AddMappingAxisKey(FInputAxisKeyMapping InAxisMapping) {
}

void UPlatformKeyImage::AddMappingActionKey(FInputActionKeyMapping InActionMapping) {
}


