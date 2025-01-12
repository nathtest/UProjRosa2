#include "G01FXHandle.h"

UG01FXHandle::UG01FXHandle() {
    this->MFxActor = NULL;
}

bool UG01FXHandle::StopFX() {
    return false;
}

bool UG01FXHandle::PlayFX(const TArray<FG01FXPointInfo>& InBasePointInfo, const TArray<FG01FXPointInfo>& InTargetPointInfo, const FG01FXAppendInfo& InFxAppendInfo) {
    return false;
}

void UG01FXHandle::OnFinishEffect() {
}

void UG01FXHandle::OnDestroyedFXActor(AActor* InActor) {
}

bool UG01FXHandle::IsFXResourceReady() {
    return false;
}

bool UG01FXHandle::IsFXPlaying() const {
    return false;
}

bool UG01FXHandle::HasFxActor() const {
    return false;
}

FEffectID UG01FXHandle::GetFXID() const {
    return FEffectID{};
}

AG01FXBase* UG01FXHandle::GetFxActor() const {
    return NULL;
}

void UG01FXHandle::DestroyHandle() {
}

bool UG01FXHandle::DestroyFXActor() {
    return false;
}

bool UG01FXHandle::CreateFXActor() {
    return false;
}


