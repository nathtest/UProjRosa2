#include "TransitionManagerBase.h"
#include "EManagerID.h"

ATransitionManagerBase::ATransitionManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_TRANSITION;
}


