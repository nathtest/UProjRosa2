#include "EnvironmentCollisionObjectBase.h"

AEnvironmentCollisionObjectBase::AEnvironmentCollisionObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FName AEnvironmentCollisionObjectBase::GetEventArg_EnvSettingID() {
    return NAME_None;
}


