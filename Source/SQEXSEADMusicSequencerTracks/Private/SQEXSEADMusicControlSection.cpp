#include "SQEXSEADMusicControlSection.h"

USQEXSEADMusicControlSection::USQEXSEADMusicControlSection() {
    this->bSupportsInfiniteRange = true;
    this->bStopLayerOnStart = false;
    this->bStopLayerOnEnd = false;
    this->bAutoRestoreVolume = true;
    this->RestoreVolumeFadeTime = 2.00f;
}


