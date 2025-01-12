#include "G01MsgCheckUiContAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01MsgCheckUiContAccessor::UG01MsgCheckUiContAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::MSG_CHECK;
}

bool UG01MsgCheckUiContAccessor::ShowWindowByQuestProgress(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamByQuestProgress& InParam) {
    return false;
}

bool UG01MsgCheckUiContAccessor::ShowWindowByFlag(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamByFlag& InParam) {
    return false;
}

bool UG01MsgCheckUiContAccessor::ShowWindow(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamArray& InParam) {
    return false;
}

void UG01MsgCheckUiContAccessor::CloseWindow() {
}


