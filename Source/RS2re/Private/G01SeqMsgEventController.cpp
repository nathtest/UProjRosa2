#include "G01SeqMsgEventController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=WidgetManagerAccessor -FallbackName=WidgetManagerAccessor
#include "G01ClearAreaTelopUiControllerAccessor.h"
#include "G01FinUiControllerAccessor.h"
#include "G01GameSystemDataManagerAccessor.h"
#include "G01HudManagerAccessor.h"
#include "G01LipSyncManagerAccessor.h"
#include "G01MsgChoiceUiContAccessor.h"
#include "G01MsgSubtitleUiContAccessor.h"
#include "G01MsgWindowUiContAccessor.h"
#include "G01NoticeUiControllerAccessor.h"
#include "G01TestResultUIControllerAccessor.h"
#include "G01TextManagerAccessor.h"
#include "G01TitlePrologueUiControllerAccessor.h"
#include "G01VoiceManagerAccessor.h"

AG01SeqMsgEventController::AG01SeqMsgEventController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LipsyncFadeOutSeconds = 0.25f;
    this->TextManagerAccessor = CreateDefaultSubobject<UG01TextManagerAccessor>(TEXT("TextManagerAccessor"));
    this->LipSyncManagerAccessor = CreateDefaultSubobject<UG01LipSyncManagerAccessor>(TEXT("LipSyncManagerAccessor"));
    this->GameSystemDataManagerAccessor = CreateDefaultSubobject<UG01GameSystemDataManagerAccessor>(TEXT("GameSystemDataManagerAccessor"));
    this->VoiceManagerAccessor = CreateDefaultSubobject<UG01VoiceManagerAccessor>(TEXT("VoiceManagerAccessor"));
    this->MMsgWindowUiAccessor = CreateDefaultSubobject<UG01MsgWindowUiContAccessor>(TEXT("MsgWindowUiAccessor"));
    this->MMsgSubtitleUiAccessor = CreateDefaultSubobject<UG01MsgSubtitleUiContAccessor>(TEXT("MsgSubtitleUiAccessor"));
    this->MMsgChoiceUiAccessor = CreateDefaultSubobject<UG01MsgChoiceUiContAccessor>(TEXT("MsgChoiceUiAccessor"));
    this->MClearAreaTelopUiControllerAccessor = CreateDefaultSubobject<UG01ClearAreaTelopUiControllerAccessor>(TEXT("ClearAreaTelopUiControllerAccessor"));
    this->MNoticeUiControllerAccessor = CreateDefaultSubobject<UG01NoticeUiControllerAccessor>(TEXT("NoticeUiControllerAccessor"));
    this->MTestResultUIControllerAccessor = CreateDefaultSubobject<UG01TestResultUIControllerAccessor>(TEXT("TestResultUIControllerAccessor"));
    this->HudManagerAccessor = CreateDefaultSubobject<UG01HudManagerAccessor>(TEXT("HudManagerAccessor"));
    this->MFinUIControllerAccessor = CreateDefaultSubobject<UG01FinUiControllerAccessor>(TEXT("FinUiControllerAccessor"));
    this->MWidgetManagerAccessor = CreateDefaultSubobject<UWidgetManagerAccessor>(TEXT("WidgetManagerAccessor"));
    this->MTitlePrologueAccessor = CreateDefaultSubobject<UG01TitlePrologueUiControllerAccessor>(TEXT("TitlePrologueAccessor"));
    this->MLasUseMsgUiAccessor = NULL;
}

void AG01SeqMsgEventController::OnShowMessageWindow_Implementation(const FG01MsgWindowParam& InParam) {
}

void AG01SeqMsgEventController::OnDeactivateUseImperialCrownWindow(AUiController* InUiController) {
}

void AG01SeqMsgEventController::OnDeactivateUiController(AUiController* InUiController) {
}

void AG01SeqMsgEventController::OnDeactivateChoiceWindow(AUiController* InUiController) {
}


