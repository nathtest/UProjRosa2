#include "G01ChronologyUiControllerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01ChronologyUiControllerAccessor::UG01ChronologyUiControllerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::CHRONOLOGY;
}

void UG01ChronologyUiControllerAccessor::RequestChronology() {
}


