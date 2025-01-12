#include "SQEXSEADAnimNotifyState_PlaySound.h"

USQEXSEADAnimNotifyState_PlaySound::USQEXSEADAnimNotifyState_PlaySound() {
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->FadeOutTime = 0.25f;
    this->StartSeekTime = 0.00f;
    this->StartDelayTime = 0.00f;
    this->bFollow = true;
    this->OverrideAttenuationAsset = NULL;
    this->OnEndSoundVolumeMultiplier = 1.00f;
    this->OnEndSoundPitchMultiplier = 1.00f;
    this->bOnEndSoundFollow = true;
    this->OnEndSoundOverrideAttenuationAsset = NULL;
}


