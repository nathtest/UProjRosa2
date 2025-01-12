#include "G01SlippingAreaBase.h"

AG01SlippingAreaBase::AG01SlippingAreaBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MFrictionRate = 0.06f;
    this->MMinimumSlopeDegree = 5.00f;
    this->MMaxSpeed = 1000.00f;
    this->MVelocityAttenuationValue = 4.00f;
    this->MAddVelocityCoefficient = 0.20f;
    this->MSlopeVelocityCoefficient = 10.00f;
    this->MSlipTerminateCoefficient = 0.80f;
}


