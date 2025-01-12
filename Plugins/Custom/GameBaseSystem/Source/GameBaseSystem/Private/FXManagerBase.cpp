#include "FXManagerBase.h"
#include "EManagerID.h"

AFXManagerBase::AFXManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_FXSYSTEM;
}


