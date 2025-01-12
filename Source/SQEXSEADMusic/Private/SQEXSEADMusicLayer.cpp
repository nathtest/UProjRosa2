#include "SQEXSEADMusicLayer.h"

USQEXSEADMusicLayer::USQEXSEADMusicLayer() {
    this->bIsReadyToPlay = false;
    this->bIsStored = false;
    this->bIsLoaded = false;
    this->Volume = 1.00f;
    this->VolumeFadeTime = 0.10f;
    this->bOverrideFadeInTime = false;
    this->bOverrideFadeOutTime = false;
    this->OverrideFadeInTime = 0.00f;
    this->OverrideFadeOutTime = 0.00f;
    this->SoundBank = NULL;
}


