#include "G01VFXPlayerBase.h"

AG01VFXPlayerBase::AG01VFXPlayerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AG01VFXPlayerBase::VFXFinishCallback() {
}

void AG01VFXPlayerBase::StopVFX_Implementation() {
}

void AG01VFXPlayerBase::PlayVFX_Implementation(const TArray<AActor*>& InOwnActorArray, const TArray<AActor*>& InOpponentActorArray, const FG01VFXAppendInfo& InAppendInfo) {
}

bool AG01VFXPlayerBase::IsVFXPlaying_Implementation() {
    return false;
}


