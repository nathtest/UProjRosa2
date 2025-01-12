#include "FlagSystemManager.h"
#include "EManagerID.h"

AFlagSystemManager::AFlagSystemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_FLAGSYSTEM;
}


