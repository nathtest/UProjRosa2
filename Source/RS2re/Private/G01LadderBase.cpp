#include "G01LadderBase.h"

AG01LadderBase::AG01LadderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MLadderType = EG01LadderType::None;
    this->MLadderPitch = 30.00f;
    this->MIsViewDebugStep = true;
    this->MIsEnableIK = true;
    this->MPlayerFitTime = 0.50f;
    this->MPlayerUpSpeed = 1.00f;
    this->MPlayerDownSpeed = 1.00f;
    this->MCameraFitSpeed = 5.00f;
    this->MCameraAngleYawLimitMin = 90.00f;
    this->MCameraAngleYawLimitMax = -90.00f;
    this->MCameraAnglePitchLimitMin = -30.00f;
    this->MCameraAnglePitchLimitMax = 30.00f;
    this->MLadderStepNum = 30;
}







