#include "G01AddedPotentEnhanceStruct.h"

FG01AddedPotentEnhanceStruct::FG01AddedPotentEnhanceStruct() {
    this->EnhanceType = EG01AddedPotentEnhanceTypeEnum::NONE;
    this->TurnCount = 0;
    this->CureTiming = EG01AddedPotentCureTimingEnum::NONE;
    this->Power = 0;
    this->IsUnique = false;
    this->IsHidden = false;
}

