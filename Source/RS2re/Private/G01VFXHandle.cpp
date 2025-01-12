#include "G01VFXHandle.h"

UG01VFXHandle::UG01VFXHandle() {
    this->bIsAutoDestroy = false;
    this->MVFXRank = 0;
    this->MVFXActor = NULL;
}

bool UG01VFXHandle::StopVFX() {
    return false;
}

void UG01VFXHandle::SetAutoDestroy(bool InIsAutoDestroy) {
}

bool UG01VFXHandle::PlayVFX(const TArray<AActor*>& InOwnActorArray, const TArray<AActor*>& InOpponentActorArray, const FG01VFXAppendInfo& InAppendInfo) {
    return false;
}

void UG01VFXHandle::OnFinishVFX() {
}

void UG01VFXHandle::OnDestroyedVFXActor(AActor* InActor) {
}

bool UG01VFXHandle::IsVFXResourceReady() {
    return false;
}

bool UG01VFXHandle::IsVFXPlaying() const {
    return false;
}

bool UG01VFXHandle::HasVFXActor() const {
    return false;
}

int32 UG01VFXHandle::GetVFXRank() const {
    return 0;
}

FVFXID UG01VFXHandle::GetVFXID() const {
    return FVFXID{};
}

AG01VFXPlayerBase* UG01VFXHandle::GetVFXActor() const {
    return NULL;
}

bool UG01VFXHandle::DestroyVFXActor() {
    return false;
}

void UG01VFXHandle::DestroyHandle() {
}

bool UG01VFXHandle::CreateVFXActor() {
    return false;
}


