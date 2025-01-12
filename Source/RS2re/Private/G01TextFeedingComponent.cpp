#include "G01TextFeedingComponent.h"

UG01TextFeedingComponent::UG01TextFeedingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FeedSettings = NULL;
    this->MFeedSeconds = 0.12f;
    this->MDisplayStringIndex = -1;
    this->MDisplayCharacterNum = 0;
    this->MElapsedTime = 0.00f;
}

void UG01TextFeedingComponent::Stop() {
}

void UG01TextFeedingComponent::SetFeedSeconds(float InFeedSeconds) {
}

void UG01TextFeedingComponent::Reset() {
}

bool UG01TextFeedingComponent::Play() {
    return false;
}

void UG01TextFeedingComponent::JumpToEnd() {
}

bool UG01TextFeedingComponent::IsFeeding() const {
    return false;
}

bool UG01TextFeedingComponent::HasDisplayStrings() const {
    return false;
}

float UG01TextFeedingComponent::GetFeedSeconds() const {
    return 0.0f;
}

FString UG01TextFeedingComponent::GetCurrentStringOrigin() const {
    return TEXT("");
}

int32 UG01TextFeedingComponent::GetCurrentStringIndex() const {
    return 0;
}

FString UG01TextFeedingComponent::GetCurrentString() const {
    return TEXT("");
}

int32 UG01TextFeedingComponent::GetCurrentCharacterNum() const {
    return 0;
}

void UG01TextFeedingComponent::AddDisplayStringList(const TArray<FString>& InStrings) {
}

void UG01TextFeedingComponent::AddDisplayString(const FString& inString) {
}


