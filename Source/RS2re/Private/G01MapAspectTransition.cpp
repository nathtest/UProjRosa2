#include "G01MapAspectTransition.h"

FG01MapAspectTransition::FG01MapAspectTransition() {
    this->MFrom = EG01MapAspectType::Invalid;
    this->MTo = EG01MapAspectType::Invalid;
    this->MPercentage = 0.00f;
    this->BaseType = EG01MapAspectType::Invalid;
}

