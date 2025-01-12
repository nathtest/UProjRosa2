#include "G01LifePointUiData.h"

UG01LifePointUiData::UG01LifePointUiData() {
    this->WarningLifePointNum = 1;
    this->IsIncludeLifePointMax = false;
}

bool UG01LifePointUiData::IsWarningLifePoint(int32 InCurrentLP, int32 InMaxLP) {
    return false;
}


