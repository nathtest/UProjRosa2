#include "AnimBlendPlayParam.h"

FAnimBlendPlayParam::FAnimBlendPlayParam() {
    this->MAnimSequence = NULL;
    this->MPlayRate = 0.00f;
    this->MStartPosition = 0.00f;
    this->MBlendTime = 0.00f;
    this->MIsLoopAnimation = false;
    this->MCachePlayRate = 0.00f;
}

