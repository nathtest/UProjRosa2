#include "G01HudButtonNaviUiControllerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01HudButtonNaviUiControllerAccessor::UG01HudButtonNaviUiControllerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::HUD_BUTTONNAVI;
}

void UG01HudButtonNaviUiControllerAccessor::RemoveDisp() {
}

void UG01HudButtonNaviUiControllerAccessor::DispParam(FInputMappingName InputParam, FText TextID, float DispTime, bool PushErase) {
}


