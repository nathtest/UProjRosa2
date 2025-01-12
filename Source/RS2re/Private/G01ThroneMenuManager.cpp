#include "G01ThroneMenuManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01ThroneMenuManager::AG01ThroneMenuManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_THRONE;
    this->MThroneMenuTable = NULL;
}

FG01ThroneMenuUiControllerDataStructID AG01ThroneMenuManager::GetEventTargetInstitution() const {
    return FG01ThroneMenuUiControllerDataStructID{};
}


