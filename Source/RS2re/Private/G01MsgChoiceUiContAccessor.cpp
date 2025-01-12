#include "G01MsgChoiceUiContAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01MsgChoiceUiContAccessor::UG01MsgChoiceUiContAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::MSG_CHOICE;
}

bool UG01MsgChoiceUiContAccessor::ShowChoiceWindow(AActor* InUser, AActor* InRequester, const FG01MsgChoiceParam& InParam) {
    return false;
}

bool UG01MsgChoiceUiContAccessor::ShowChoiceUseImperialCrownWindow(AActor* InUser, AActor* InRequester, const FString& CommonText, FG01MsgChoiceUseCrownDataParamID ChoiceID) {
    return false;
}

bool UG01MsgChoiceUiContAccessor::ShowChoiceUseImperialCrownBuildThroneWindow(AActor* InUser, AActor* InRequester, const FString& CommonText, FG01MsgChoiceUseCrownDataParamID ChoiceID, FG01ThroneMenuUiControllerDataStructID ThroneID) {
    return false;
}

bool UG01MsgChoiceUiContAccessor::ShowChoiceUseCrownWindow(AActor* InUser, AActor* InRequester, const FString& CommonText, FG01MsgChoiceUseCrownDataParamID ChoiceID) {
    return false;
}

bool UG01MsgChoiceUiContAccessor::ShowChoiceOldUseImperialCrownWindow(AActor* InUser, AActor* InRequester, const FG01MsgChoiceCrownParam& InParam) {
    return false;
}

bool UG01MsgChoiceUiContAccessor::ShowChoiceOldUseImperialCrownBuildThroneWindow(AActor* InUser, AActor* InRequester, const FG01MsgChoiceCrownParam& InParam, FG01ThroneMenuUiControllerDataStructID ThroneID) {
    return false;
}

bool UG01MsgChoiceUiContAccessor::ShowChoiceOldUseCrownWindow(AActor* InUser, AActor* InRequester, const FG01MsgChoiceCrownParam& InParam) {
    return false;
}

int32 UG01MsgChoiceUiContAccessor::GetChoiceIndex() const {
    return 0;
}

void UG01MsgChoiceUiContAccessor::CloseChoiceWindow(AActor* InUser) {
}


