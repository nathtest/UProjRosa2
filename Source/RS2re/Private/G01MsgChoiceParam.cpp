#include "G01MsgChoiceParam.h"

FG01MsgChoiceParam::FG01MsgChoiceParam() {
    this->MIsNormal = false;
    this->MIsUseDefaultPosition = false;
    this->MChoiceType = EG01MsgChoiceType::Ver00;
}

