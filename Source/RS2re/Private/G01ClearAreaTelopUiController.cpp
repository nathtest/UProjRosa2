#include "G01ClearAreaTelopUiController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

AG01ClearAreaTelopUiController::AG01ClearAreaTelopUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::CHRONICLE_TELOP;
}

bool AG01ClearAreaTelopUiController::ShowTelop(const EG01AreaId& ClearAreaID) {
    return false;
}

bool AG01ClearAreaTelopUiController::ShowAreaTelop(const EG01TelopId& ClearAreaID) {
    return false;
}



void AG01ClearAreaTelopUiController::RequestInput() {
}



void AG01ClearAreaTelopUiController::CloseTelop() {
}


