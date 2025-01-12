#include "SeqOriginOverrideParam.h"

FSeqOriginOverrideParam::FSeqOriginOverrideParam() {
    this->MOverrideType = ESeqOriginOverrideType::None;
    this->MOriginTargetSlotIndex = 0;
    this->MOriginTargetActor = NULL;
}

