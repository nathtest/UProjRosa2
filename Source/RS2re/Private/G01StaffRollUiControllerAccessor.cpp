#include "G01StaffRollUiControllerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01StaffRollUiControllerAccessor::UG01StaffRollUiControllerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::STAFFROLL;
}

void UG01StaffRollUiControllerAccessor::RequestStaffRoll() {
}


