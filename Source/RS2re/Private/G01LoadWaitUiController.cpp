#include "G01LoadWaitUiController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

AG01LoadWaitUiController::AG01LoadWaitUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::LOADWAIT;
    this->MActiveElapsedTime = 0.00f;
}


