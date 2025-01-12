#include "G01MsgDRankWindowUiController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestManagerAccessComponent -FallbackName=QuestManagerAccessComponent
#include "G01TextFeedingComponent.h"
#include "G01VoiceManagerAccessor.h"

AG01MsgDRankWindowUiController::AG01MsgDRankWindowUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::MSG_DRANKSUBTITLE;
    this->MFlagSystemManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagSystemManagerAccessor"));
    this->MQuestManagerAccessor = CreateDefaultSubobject<UQuestManagerAccessComponent>(TEXT("QuestManagerAccessor"));
    this->VoiceManagerAccessor = CreateDefaultSubobject<UG01VoiceManagerAccessor>(TEXT("VoiceManagerAccessor"));
    this->MTextFeedingComponent = CreateDefaultSubobject<UG01TextFeedingComponent>(TEXT("TextFeedingComponent"));
    this->MTextJustify = ETextJustify::Left;
}



bool AG01MsgDRankWindowUiController::ShowWindowByQuestProgress(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamByQuestProgress& InParam) {
    return false;
}

bool AG01MsgDRankWindowUiController::ShowWindowByFlag(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamByFlag& InParam) {
    return false;
}

bool AG01MsgDRankWindowUiController::ShowWindow(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamArray& InParam) {
    return false;
}


void AG01MsgDRankWindowUiController::OnTextFeedUpdated() {
}

void AG01MsgDRankWindowUiController::OnTextFeedStarted() {
}

void AG01MsgDRankWindowUiController::OnTextFeedCompleted() {
}

void AG01MsgDRankWindowUiController::OnCompleteVoiceLoad(const FG01VoiceLoadInfo& InLoadInfo) {
}

bool AG01MsgDRankWindowUiController::NextText() {
    return false;
}

bool AG01MsgDRankWindowUiController::IsMomentFeedSeconds() {
    return false;
}




