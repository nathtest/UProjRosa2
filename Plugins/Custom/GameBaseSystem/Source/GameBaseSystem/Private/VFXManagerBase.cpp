#include "VFXManagerBase.h"
#include "EManagerID.h"

AVFXManagerBase::AVFXManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_VFXSYSTEM;
}


