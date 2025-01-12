#include "G01MsgDRankWindowUiContAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01MsgDRankWindowUiContAccessor::UG01MsgDRankWindowUiContAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::MSG_DRANKSUBTITLE;
}

bool UG01MsgDRankWindowUiContAccessor::ShowWindowByQuestProgress(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamByQuestProgress& InParam) {
    return false;
}

bool UG01MsgDRankWindowUiContAccessor::ShowWindowByFlag(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamByFlag& InParam) {
    return false;
}

bool UG01MsgDRankWindowUiContAccessor::ShowWindow(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamArray& InParam) {
    return false;
}

void UG01MsgDRankWindowUiContAccessor::CloseWindow() {
}


