#include "GenerateConditions.h"

FGenerateConditions::FGenerateConditions() {
    this->MInitVisibility = EGenInitVisibility::Visible;
    this->MIsAndCondition = false;
    this->MIsCached = false;
    this->MIsHasAnyConditionQuestProgress = false;
    this->MIsHasAnyConditionFlag = false;
}

