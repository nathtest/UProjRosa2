#include "SQEXSEADMusicLayerTransitionInfo.h"

FSQEXSEADMusicLayerTransitionInfo::FSQEXSEADMusicLayerTransitionInfo() {
    this->bOverrideFadeIn = false;
    this->bOverrideFadeOut = false;
    this->bOverrideCrossFade = false;
    this->bOverrideResumeFade = false;
    this->bDefaultCrossFade = false;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->CrossFadeTime = 0.00f;
    this->ResumeFadeInTime = 0.00f;
}

