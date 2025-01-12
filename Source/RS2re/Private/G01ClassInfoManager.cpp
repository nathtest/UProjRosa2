#include "G01ClassInfoManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01ClassInfoManager::AG01ClassInfoManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_CLASSINFO;
    this->MClassInfoTable = NULL;
}


