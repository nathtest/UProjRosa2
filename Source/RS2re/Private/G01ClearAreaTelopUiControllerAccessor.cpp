#include "G01ClearAreaTelopUiControllerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01ClearAreaTelopUiControllerAccessor::UG01ClearAreaTelopUiControllerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::CHRONICLE_TELOP;
}

bool UG01ClearAreaTelopUiControllerAccessor::ShowTelop(const EG01AreaId& ClearAreaID) {
    return false;
}

bool UG01ClearAreaTelopUiControllerAccessor::ShowAreaTelop(const EG01TelopId& ClearAreaID) {
    return false;
}

void UG01ClearAreaTelopUiControllerAccessor::RequestInput() {
}

void UG01ClearAreaTelopUiControllerAccessor::CloseTelop() {
}


