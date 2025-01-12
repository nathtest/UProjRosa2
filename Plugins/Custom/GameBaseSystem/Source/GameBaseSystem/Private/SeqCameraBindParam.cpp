#include "SeqCameraBindParam.h"

FSeqCameraBindParam::FSeqCameraBindParam() {
    this->MIsAlwaysCalcCameraLength = false;
    this->MIsShowOffsetCalcLine = false;
    this->MContainAngleRatioH = 0.00f;
    this->MContainAngleRatioV = 0.00f;
    this->MIsLookAtAlwaysCalculation = false;
    this->MIsKeepLookAtRotation = false;
    this->MLookAtRotationPitch = false;
    this->MLookAtRotationYaw = false;
    this->MLookAtRotationRoll = false;
}

