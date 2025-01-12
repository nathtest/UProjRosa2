#include "G01MsgWindowUiContAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01MsgWindowUiContAccessor::UG01MsgWindowUiContAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::MSG_WINDOW;
}

bool UG01MsgWindowUiContAccessor::ShowWindowByQuestProgress(AActor* InUser, AActor* InRequester, const FG01MsgWindowParamByQuestProgress& InParam, bool InIsAutoClose) {
    return false;
}

bool UG01MsgWindowUiContAccessor::ShowWindowByFlag(AActor* InUser, AActor* InRequester, const FG01MsgWindowParamByFlag& InParam, bool InIsAutoClose) {
    return false;
}

bool UG01MsgWindowUiContAccessor::ShowWindow(AActor* InUser, AActor* InRequester, const FG01MsgWindowParamArray& InParam, bool InIsAutoClose) {
    return false;
}

void UG01MsgWindowUiContAccessor::CloseWindow(AActor* InUser) {
}


