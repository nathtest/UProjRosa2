#include "AmbientSoundOcclusionInfo.h"

FAmbientSoundOcclusionInfo::FAmbientSoundOcclusionInfo() {
    this->bEnableOcclusion = false;
    this->OcclusionGroupingID = 0;
    this->OcclusionVolume = 0.00f;
    this->OcclusionLPF = 0.00f;
    this->OcclusionFadeTime = 0.00f;
}

