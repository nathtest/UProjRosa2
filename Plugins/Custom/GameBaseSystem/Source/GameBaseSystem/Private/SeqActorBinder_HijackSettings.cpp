#include "SeqActorBinder_HijackSettings.h"

FSeqActorBinder_HijackSettings::FSeqActorBinder_HijackSettings() {
    this->MIsPlayAnimationBySequencer = false;
    this->AnimQuality = EVisualActorAnimQuality::None;
    this->MTargetTakeOverAnimBlendTime = 0.00f;
    this->MIsUseInGamePosition = false;
    this->MHijackPriority = 0;
}

