#include "SQEXSEADMusicLayerInfo.h"

FSQEXSEADMusicLayerInfo::FSQEXSEADMusicLayerInfo() {
    this->Priority = 0;
    this->bDefaultCrossFade = false;
    this->DefaultFadeInTime = 0.00f;
    this->DefaultFadeOutTime = 0.00f;
    this->DefaultCrossFadeTime = 0.00f;
    this->DefaultResumeFadeInTime = 0.00f;
    this->StoreAction = ESQEXSEADMusicStoreAction::Suspend;
}

