#include "SQEXSEADSoundBaseParameters.h"

FSQEXSEADSoundBaseParameters::FSQEXSEADSoundBaseParameters() {
    this->VolumeMultiplier = 0.00f;
    this->PitchMultiplier = 0.00f;
    this->FadeInTime = 0.00f;
    this->StartSeekTime = 0.00f;
    this->StartDelayTime = 0.00f;
    this->bEnableLPF = false;
    this->LPFValue = 0.00f;
    this->SwitchValue = 0.00f;
    this->bEnable_Slot0_ZeroOne = false;
    this->Slot0_ZeroOneValue = 0.00f;
    this->bEnable_Slot1_ZeroOne = false;
    this->Slot1_ZeroOneValue = 0.00f;
    this->ExternalID = 0;
    this->bEnableSourceAmplitudeMeter = false;
}

