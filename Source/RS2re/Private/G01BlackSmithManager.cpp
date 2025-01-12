#include "G01BlackSmithManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01BlackSmithManager::AG01BlackSmithManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_BLACKSMITH;
    this->MBlackSmithTable = NULL;
}


