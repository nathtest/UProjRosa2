#include "G01LoadWaitUiControllerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01LoadWaitUiControllerAccessor::UG01LoadWaitUiControllerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::LOADWAIT;
}

void UG01LoadWaitUiControllerAccessor::Open() {
}

void UG01LoadWaitUiControllerAccessor::LoadStart() {
}

void UG01LoadWaitUiControllerAccessor::GetActiveElapsedTime(float& OutTime) {
}

void UG01LoadWaitUiControllerAccessor::Close() {
}


