#include "G01NoticeUiControllerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01NoticeUiControllerAccessor::UG01NoticeUiControllerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::THRONE_NOTICE;
}

bool UG01NoticeUiControllerAccessor::RequestNotice(const FG01ThroneMenuUiControllerDataStructID& ThroneID) {
    return false;
}

void UG01NoticeUiControllerAccessor::EndRequestNotice() {
}


