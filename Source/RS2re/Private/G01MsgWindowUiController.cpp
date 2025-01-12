#include "G01MsgWindowUiController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestManagerAccessComponent -FallbackName=QuestManagerAccessComponent

AG01MsgWindowUiController::AG01MsgWindowUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::MSG_WINDOW;
    this->MFlagSystemManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagSystemManagerAccessor"));
    this->MQuestManagerAccessor = CreateDefaultSubobject<UQuestManagerAccessComponent>(TEXT("QuestManagerAccessor"));
    this->MMessageWindowInputClass = NULL;
    this->MMessageWindowInputObject = NULL;
}

bool AG01MsgWindowUiController::ShowWindowByQuestProgress(AActor* InUser, AActor* InRequester, const FG01MsgWindowParamByQuestProgress& InParam, bool InIsAutoClose) {
    return false;
}

bool AG01MsgWindowUiController::ShowWindowByFlag(AActor* InUser, AActor* InRequester, const FG01MsgWindowParamByFlag& InParam, bool InIsAutoClose) {
    return false;
}





void AG01MsgWindowUiController::DisplayEnd() {
}




