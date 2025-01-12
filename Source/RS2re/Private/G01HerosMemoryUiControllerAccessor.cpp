#include "G01HerosMemoryUiControllerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01HerosMemoryUiControllerAccessor::UG01HerosMemoryUiControllerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::HEROS_MEMORY;
}

void UG01HerosMemoryUiControllerAccessor::Open() {
}


