#include "G01StoneShrineBase.h"

AG01StoneShrineBase::AG01StoneShrineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MFadeInTime = 3.00f;
    this->MFadeOutTime = 3.00f;
}

void AG01StoneShrineBase::SetInteractLocation(FTransform InTransform) {
}

void AG01StoneShrineBase::SetEnableCollision_Implementation(bool InIsEnable) {
}

void AG01StoneShrineBase::CompleteEffect() {
}




