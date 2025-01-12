#include "AmbientSoundInfo.h"

FAmbientSoundInfo::FAmbientSoundInfo() {
    this->Volume = 0.00f;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->FadeTime = 0.00f;
    this->bExcludeInactiveAmbients = false;
}

