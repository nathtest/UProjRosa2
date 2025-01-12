#include "EnvironmentManagerBase.h"
#include "EManagerID.h"

AEnvironmentManagerBase::AEnvironmentManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_ENVIRONMENT;
    this->MEnvironmentSettingTable = NULL;
}


