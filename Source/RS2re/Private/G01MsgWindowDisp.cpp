#include "G01MsgWindowDisp.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId
#include "G01TextFeedingComponent.h"

AG01MsgWindowDisp::AG01MsgWindowDisp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::MSG_WINDOW;
    this->MTextFeedingComponent = CreateDefaultSubobject<UG01TextFeedingComponent>(TEXT("TextFeedingComponent"));
    this->MWindowUser = NULL;
    this->MMsgRootComponent = NULL;
}




bool AG01MsgWindowDisp::ShowWindow(AActor* InUser, const FG01MsgWindowParamArray& InParam) {
    return false;
}

void AG01MsgWindowDisp::SetupAddDynamic() {
}


void AG01MsgWindowDisp::OnTextFeedUpdated() {
}

void AG01MsgWindowDisp::OnTextFeedStarted() {
}

void AG01MsgWindowDisp::OnTextFeedCompleted() {
}


bool AG01MsgWindowDisp::NextText() {
    return false;
}

bool AG01MsgWindowDisp::IsMomentFeedSeconds() {
    return false;
}

void AG01MsgWindowDisp::DisplayEnd() {
}





