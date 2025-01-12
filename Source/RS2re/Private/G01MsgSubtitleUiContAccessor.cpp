#include "G01MsgSubtitleUiContAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01MsgSubtitleUiContAccessor::UG01MsgSubtitleUiContAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::MSG_SUBTITLE;
}

void UG01MsgSubtitleUiContAccessor::EndShowSubtitle() {
}

bool UG01MsgSubtitleUiContAccessor::BeginShowSubtitleByText(AActor* InUser, const FG01MsgSubtitleParam& InParam, const FG01TextFindResult& InText) {
    return false;
}

bool UG01MsgSubtitleUiContAccessor::BeginShowSubtitle(AActor* InUser, const FG01MsgSubtitleParam& InParam) {
    return false;
}


