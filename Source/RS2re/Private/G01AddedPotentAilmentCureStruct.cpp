#include "G01AddedPotentAilmentCureStruct.h"

FG01AddedPotentAilmentCureStruct::FG01AddedPotentAilmentCureStruct() {
    this->Timing = EG01AddedPotentCureTimingEnum::NONE;
    this->CureResult = false;
    this->ContinuationTurnCount = 0;
    this->CureImmediately = false;
}

