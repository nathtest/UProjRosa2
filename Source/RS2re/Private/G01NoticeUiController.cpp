#include "G01NoticeUiController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

AG01NoticeUiController::AG01NoticeUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::THRONE_NOTICE;
}

bool AG01NoticeUiController::ShowNotice(const FG01ThroneMenuUiControllerDataStructID& ThroneID) {
    return false;
}


void AG01NoticeUiController::EndNotice() {
}



