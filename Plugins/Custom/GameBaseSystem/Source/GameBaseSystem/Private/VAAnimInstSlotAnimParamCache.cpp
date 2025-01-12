#include "VAAnimInstSlotAnimParamCache.h"

FVAAnimInstSlotAnimParamCache::FVAAnimInstSlotAnimParamCache() {
    this->SlotIndex = 0;
    this->PlayRate = 0.00f;
    this->Position = 0.00f;
    this->Animation = NULL;
    this->CurrentSectionID = 0;
    this->NextSectionID = 0;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->Weight = 0.00f;
    this->DesiredWeight = 0.00f;
    this->MontageAsset = NULL;
}

