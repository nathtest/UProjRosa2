#include "SQEXSEADAutoSeSection.h"

USQEXSEADAutoSeSection::USQEXSEADAutoSeSection() {
    this->bOverrideMotionOnlyMode = false;
    this->bEnableMotionOnlyMode = true;
    this->bOverrideProcessorSettings = false;
    this->ProcessorSettings = NULL;
    this->bOverrideAutoSeEnable = false;
    this->bAutoSeEnable = false;
    this->bOverrideMotionSoundFilter = false;
    this->bEnablePlayMotionSoundManually = false;
    this->MotionSoundType = ESQEXSEADAutoSeMotionSoundType::None;
    this->MotionSoundIntensity = 1.00f;
    this->PlaySoundVolume = 1.00f;
}


