#include "G01CrowdActionDirectorBase.h"

AG01CrowdActionDirectorBase::AG01CrowdActionDirectorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxMoveRadius = -1.00f;
    this->SearchStartRadius = -1.00f;
    this->LoseSightTime = 3.00f;
    this->FollowTime = 3.00f;
}

void AG01CrowdActionDirectorBase::SetEnableTick(bool InEnable) {
}


