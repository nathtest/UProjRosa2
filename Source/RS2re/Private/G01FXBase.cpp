#include "G01FXBase.h"

AG01FXBase::AG01FXBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AG01FXBase::StopFX_Implementation() {
}

void AG01FXBase::PlayFX_Implementation(const TArray<FG01FXPointInfo>& InBasePointInfo, const TArray<FG01FXPointInfo>& InTargetPointInfo, const FG01FXAppendInfo& InFxAppendInfo) {
}

bool AG01FXBase::IsFXPlaying_Implementation() {
    return false;
}

void AG01FXBase::FXFinishCallback() {
}


