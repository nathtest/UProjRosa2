#include "G01MapAspectResult.h"

FG01MapAspectResult::FG01MapAspectResult() {
    this->MLastMapAspect = EG01MapAspectType::Invalid;
    this->MCurrentMapAspect = EG01MapAspectType::Invalid;
    this->MIsChanged = false;
    this->MAttackBonusRatio = 0.00f;
}

