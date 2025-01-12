#include "G01HudButtonNaviUiController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

AG01HudButtonNaviUiController::AG01HudButtonNaviUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::HUD_BUTTONNAVI;
}

void AG01HudButtonNaviUiController::SetDispParam(FInputMappingName InputParam, FText TextID, float DispTime, bool PushErase) {
}

void AG01HudButtonNaviUiController::RemoveDisp() {
}




