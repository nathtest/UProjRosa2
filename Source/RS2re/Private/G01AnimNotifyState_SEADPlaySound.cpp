#include "G01AnimNotifyState_SEADPlaySound.h"

UG01AnimNotifyState_SEADPlaySound::UG01AnimNotifyState_SEADPlaySound() {
    this->AttenuationAsset = NULL;
    this->IsPlayAttach = true;
    this->FadeOutTime = 0.00f;
}

void UG01AnimNotifyState_SEADPlaySound::SetPausedSound(FName InOwnerName, bool InOwnerEnable) const {
}


