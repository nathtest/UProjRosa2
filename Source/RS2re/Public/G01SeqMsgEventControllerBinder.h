#pragma once
#include "CoreMinimal.h"
#include "SequenceEventControllerBinder.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceEventControllerBinder -FallbackName=SequenceEventControllerBinder
#include "EG01AreaId.h"
#include "EG01TelopId.h"
#include "EG01TitlePrologueStaffReqestPlusTypeEnum.h"
#include "EG01TitlePrologueStaffReqestTypeEnum.h"
#include "G01MsgChoiceParam.h"
#include "G01MsgSubtitleParam.h"
#include "G01MsgWindowParam.h"
#include "G01MsgWindowParamArray.h"
#include "G01MsgWindowParamByChoice.h"
#include "G01MsgWindowParamByFlag.h"
#include "G01MsgWindowParamByQuestProgress.h"
#include "G01SeqBuildThroneWindowParams.h"
#include "G01SeqGeneralLipsyncPlayParam.h"
#include "G01SeqMsgCommonParam.h"
#include "G01SeqMsgVoiceWaitParam.h"
#include "G01SeqTestResultFailedParams.h"
#include "G01SeqTestResultPassParams.h"
#include "G01SeqUseCrownWindowParams.h"
#include "G01ThroneMenuUiControllerDataStructID.h"
#include "Templates/SubclassOf.h"
#include "G01SeqMsgEventControllerBinder.generated.h"

class AG01SeqMsgEventController;

UCLASS(Blueprintable)
class RS2RE_API AG01SeqMsgEventControllerBinder : public ASequenceEventControllerBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AG01SeqMsgEventController> MSupportControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString MCommonTextID;
    
public:
    AG01SeqMsgEventControllerBinder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Cmd_TR_TelopRequestInput();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ShowTelop(EG01AreaId AreaID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ShowSpeechBubble(FG01SeqMsgCommonParam InCommonParam, FG01MsgWindowParamArray InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ShowMessageWindowWithLipsyncPreset(FG01MsgWindowParam InWndParam, FG01SeqGeneralLipsyncPlayParam InLipParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ShowMessageWindowByQuestProgress(FG01SeqMsgCommonParam InCommonParam, FG01MsgWindowParamByQuestProgress InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ShowMessageWindowByFlag(FG01SeqMsgCommonParam InCommonParam, FG01MsgWindowParamByFlag InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ShowMessageWindowByChoice(FG01SeqMsgCommonParam InCommonParam, FG01MsgWindowParamByChoice InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ShowExamPass(FG01SeqTestResultPassParams DataParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ShowExamFailed(FG01SeqTestResultFailedParams DataParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ShowChoiceWindow(FG01SeqMsgCommonParam InCommonParam, FG01MsgChoiceParam InParam, bool InIsSectionSkipBlock);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ShowChoiceUseCrownWindow(FG01SeqMsgCommonParam InCommonParam, FG01SeqUseCrownWindowParams InParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ShowChoiceUseCrownBuildThroneWindow(FG01SeqMsgCommonParam InCommonParam, FG01SeqBuildThroneWindowParams InParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ShowBossTelop(EG01TelopId BossTelopID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_RequestPrologueStaff(EG01TitlePrologueStaffReqestTypeEnum RequestType, FText Position1, FText Name1, FText Position2, FText Name2, FText Position3, FText Name3, bool IsLongAnim);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_RequestProloguePlusStaff(EG01TitlePrologueStaffReqestPlusTypeEnum RequestType, FText Position1, FText Name1, FText Position2, FText Name2, FText Position3, FText Name3, FText Position4, FText Name4, FText Position5, FText Name5, FText Position6, FText Name6, bool IsLongAnim);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_RequestNotice(FG01ThroneMenuUiControllerDataStructID ThroneID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_EndNoticeUi();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_BeginNoticeUi(FG01ThroneMenuUiControllerDataStructID ThroneID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_BeginLanguageLogoUI(FName InFunctionName);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_BeginFinUI();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_WaitVoice(FG01SeqMsgVoiceWaitParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_ShowSubtitle(FG01SeqMsgCommonParam InCommonParam, FG01MsgSubtitleParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_PlayLipsyncPreset(FG01SeqGeneralLipsyncPlayParam InParam);
    
};

