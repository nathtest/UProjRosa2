#include "SequencerBinkMediaSection.h"

USequencerBinkMediaSection::USequencerBinkMediaSection() {
    this->bIsRendering = false;
    this->ResourceType = ESequencerBinkMediaSectionResourceType::Single;
}

void USequencerBinkMediaSection::SetResourceID(const TArray<FBinkMediaResourceID>& InResourceIDs) {
}

void USequencerBinkMediaSection::OnDeactivate_Implementation() {
}

void USequencerBinkMediaSection::OnActivate_Implementation() {
}

bool USequencerBinkMediaSection::IsRendering() const {
    return false;
}

FFrameRate USequencerBinkMediaSection::GetTickResolution() const {
    return FFrameRate{};
}

int32 USequencerBinkMediaSection::GetResourceIndex(float& OutStartOffset, float InTime) const {
    return 0;
}

TArray<FBinkMediaResourceID> USequencerBinkMediaSection::GetResourceIDs() const {
    return TArray<FBinkMediaResourceID>();
}

float USequencerBinkMediaSection::GetRangeSeconds() const {
    return 0.0f;
}

FTimespan USequencerBinkMediaSection::GetPlayTime(int32 InIndex) const {
    return FTimespan{};
}

float USequencerBinkMediaSection::GetPlaySeconds(int32 InIndex) const {
    return 0.0f;
}

int32 USequencerBinkMediaSection::GetFrameBase() const {
    return 0;
}


