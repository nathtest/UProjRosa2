#include "G01VFXObjectBase.h"

AG01VFXObjectBase::AG01VFXObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AG01VFXObjectBase::VFXFinishCallback() {
}

void AG01VFXObjectBase::StopVFX_Implementation() {
}

void AG01VFXObjectBase::SetOwnActorArray(const TArray<AActor*>& InOwnActorArray) {
}

void AG01VFXObjectBase::SetOpponentActorArray(const TArray<AActor*>& InOpponentActorArray) {
}

void AG01VFXObjectBase::PlayVFX_Implementation(const int32 InNo, const TArray<AActor*>& InOwnActorArray, const TArray<AActor*>& InOpponentActorArray, const FG01VFXAppendInfo& InAppendInfo) {
}

bool AG01VFXObjectBase::IsVFXPlaying_Implementation() {
    return false;
}

AActor* AG01VFXObjectBase::GetOwnActor(int32 InNo) {
    return NULL;
}

AActor* AG01VFXObjectBase::GetOpponentActor(int32 InNo) {
    return NULL;
}


