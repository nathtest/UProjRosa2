#include "G01MsgSimpleUiContAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01MsgSimpleUiContAccessor::UG01MsgSimpleUiContAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::MSG_SIMPLE;
}

bool UG01MsgSimpleUiContAccessor::ShowSimpleWindowByParamList(AActor* InUser, FG01MsgSimpleParamArray InParam) {
    return false;
}

bool UG01MsgSimpleUiContAccessor::ShowSimpleWindow(AActor* InUser, FG01MsgSimpleParam InParam) {
    return false;
}

void UG01MsgSimpleUiContAccessor::CloseSimpleWindow(AActor* InUser) {
}

void UG01MsgSimpleUiContAccessor::AddParamList(AActor* InUser, FG01MsgSimpleParamArray InParamList) {
}

void UG01MsgSimpleUiContAccessor::AddParam(AActor* InUser, FG01MsgSimpleParam InParam) {
}


