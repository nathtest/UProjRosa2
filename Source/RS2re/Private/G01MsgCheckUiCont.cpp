#include "G01MsgCheckUiCont.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestManagerAccessComponent -FallbackName=QuestManagerAccessComponent
#include "G01TextFeedingComponent.h"

AG01MsgCheckUiCont::AG01MsgCheckUiCont(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::MSG_CHECK;
    this->MFlagSystemManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagSystemManagerAccessor"));
    this->MQuestManagerAccessor = CreateDefaultSubobject<UQuestManagerAccessComponent>(TEXT("QuestManagerAccessor"));
    this->MTextFeedingComponent = CreateDefaultSubobject<UG01TextFeedingComponent>(TEXT("TextFeedingComponent"));
    this->MTextJustify = ETextJustify::Left;
}



bool AG01MsgCheckUiCont::ShowWindowByQuestProgress(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamByQuestProgress& InParam) {
    return false;
}

bool AG01MsgCheckUiCont::ShowWindowByFlag(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamByFlag& InParam) {
    return false;
}

bool AG01MsgCheckUiCont::ShowWindow(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamArray& InParam) {
    return false;
}


void AG01MsgCheckUiCont::OnTextFeedUpdated() {
}

void AG01MsgCheckUiCont::OnTextFeedStarted() {
}

void AG01MsgCheckUiCont::OnTextFeedCompleted() {
}

bool AG01MsgCheckUiCont::NextText() {
    return false;
}

bool AG01MsgCheckUiCont::IsMomentFeedSeconds() {
    return false;
}




