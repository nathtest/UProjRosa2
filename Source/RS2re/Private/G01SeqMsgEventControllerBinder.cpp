#include "G01SeqMsgEventControllerBinder.h"
#include "G01SeqMsgEventController.h"

AG01SeqMsgEventControllerBinder::AG01SeqMsgEventControllerBinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MSupportControllerClass = AG01SeqMsgEventController::StaticClass();
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_TelopRequestInput() {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_ShowTelop(EG01AreaId AreaID) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_ShowSpeechBubble(FG01SeqMsgCommonParam InCommonParam, FG01MsgWindowParamArray InParam) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_ShowMessageWindowWithLipsyncPreset(FG01MsgWindowParam InWndParam, FG01SeqGeneralLipsyncPlayParam InLipParam) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_ShowMessageWindowByQuestProgress(FG01SeqMsgCommonParam InCommonParam, FG01MsgWindowParamByQuestProgress InParam) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_ShowMessageWindowByFlag(FG01SeqMsgCommonParam InCommonParam, FG01MsgWindowParamByFlag InParam) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_ShowMessageWindowByChoice(FG01SeqMsgCommonParam InCommonParam, FG01MsgWindowParamByChoice InParam) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_ShowExamPass(FG01SeqTestResultPassParams DataParam) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_ShowExamFailed(FG01SeqTestResultFailedParams DataParam) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_ShowChoiceWindow(FG01SeqMsgCommonParam InCommonParam, FG01MsgChoiceParam InParam, bool InIsSectionSkipBlock) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_ShowChoiceUseCrownWindow(FG01SeqMsgCommonParam InCommonParam, FG01SeqUseCrownWindowParams InParams) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_ShowChoiceUseCrownBuildThroneWindow(FG01SeqMsgCommonParam InCommonParam, FG01SeqBuildThroneWindowParams InParams) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_ShowBossTelop(EG01TelopId BossTelopID) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_RequestPrologueStaff(EG01TitlePrologueStaffReqestTypeEnum RequestType, FText Position1, FText Name1, FText Position2, FText Name2, FText Position3, FText Name3, bool IsLongAnim) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_RequestProloguePlusStaff(EG01TitlePrologueStaffReqestPlusTypeEnum RequestType, FText Position1, FText Name1, FText Position2, FText Name2, FText Position3, FText Name3, FText Position4, FText Name4, FText Position5, FText Name5, FText Position6, FText Name6, bool IsLongAnim) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_RequestNotice(FG01ThroneMenuUiControllerDataStructID ThroneID) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_EndNoticeUi() {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_BeginNoticeUi(FG01ThroneMenuUiControllerDataStructID ThroneID) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_BeginLanguageLogoUI(FName InFunctionName) {
}

void AG01SeqMsgEventControllerBinder::Cmd_TR_BeginFinUI() {
}

void AG01SeqMsgEventControllerBinder::Cmd_RP_WaitVoice(FG01SeqMsgVoiceWaitParam InParam) {
}

void AG01SeqMsgEventControllerBinder::Cmd_RP_ShowSubtitle(FG01SeqMsgCommonParam InCommonParam, FG01MsgSubtitleParam InParam) {
}

void AG01SeqMsgEventControllerBinder::Cmd_RP_PlayLipsyncPreset(FG01SeqGeneralLipsyncPlayParam InParam) {
}


