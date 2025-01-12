#include "G01FXPointInfoBase.h"

FG01FXPointInfoBase::FG01FXPointInfoBase() {
    this->MAttachType = EG01FXAttachType::NonUse;
    this->MLevel = 0;
    this->MScale = 0.00f;
    this->MIsDisable = false;
}

