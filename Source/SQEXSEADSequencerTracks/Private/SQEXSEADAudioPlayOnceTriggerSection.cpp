#include "SQEXSEADAudioPlayOnceTriggerSection.h"

USQEXSEADAudioPlayOnceTriggerSection::USQEXSEADAudioPlayOnceTriggerSection() {
    this->bSupportsInfiniteRange = true;
    this->FadeOutTime = 0.20f;
    this->bContinueSoundOnSequencerEnd = false;
    this->bOverrideAttenuation = false;
    this->AttenuationSettings = NULL;
    this->bAttach = false;
}

void USQEXSEADAudioPlayOnceTriggerSection::SetStartOffset(FFrameNumber InStartOffset) {
}

void USQEXSEADAudioPlayOnceTriggerSection::SetSoundName(FName SoundName) {
}

void USQEXSEADAudioPlayOnceTriggerSection::SetSoundIndex(int32 SoundIndex) {
}

void USQEXSEADAudioPlayOnceTriggerSection::SetSoundBank(USQEXSEADSoundBank* InSound) {
}

FFrameNumber USQEXSEADAudioPlayOnceTriggerSection::GetStartOffset() const {
    return FFrameNumber{};
}

FName USQEXSEADAudioPlayOnceTriggerSection::GetSoundName() const {
    return NAME_None;
}

int32 USQEXSEADAudioPlayOnceTriggerSection::GetSoundIndex() const {
    return 0;
}

USQEXSEADSoundBank* USQEXSEADAudioPlayOnceTriggerSection::GetSoundBank() const {
    return NULL;
}


