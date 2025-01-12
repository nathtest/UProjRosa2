#pragma once
#include "CoreMinimal.h"
#include "SequenceEventController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceEventController -FallbackName=SequenceEventController
#include "G01MsgWindowParam.h"
#include "G01SEADActiveSoundShared.h"
#include "G01SeqGeneralLipsyncSpeakerParam.h"
#include "G01SeqLipsyncSpeakerParam.h"
#include "WidgetManagerAccessor.h"
#include "G01SeqMsgEventController.generated.h"

class AUiController;
class UG01ClearAreaTelopUiControllerAccessor;
class UG01FinUiControllerAccessor;
class UG01GameSystemDataManagerAccessor;
class UG01HudManagerAccessor;
class UG01LipSyncManagerAccessor;
class UG01MsgChoiceUiContAccessor;
class UG01MsgSubtitleUiContAccessor;
class UG01MsgUiControllerAccessorBase;
class UG01MsgWindowUiContAccessor;
class UG01NoticeUiControllerAccessor;
class UG01TestResultUIControllerAccessor;
class UG01TextManagerAccessor;
class UG01TitlePrologueUiControllerAccessor;
class UG01VoiceManagerAccessor;
class UWidgetManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01SeqMsgEventController : public ASequenceEventController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LipsyncFadeOutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01TextManagerAccessor* TextManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01LipSyncManagerAccessor* LipSyncManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GameSystemDataManagerAccessor* GameSystemDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01VoiceManagerAccessor* VoiceManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01MsgWindowUiContAccessor* MMsgWindowUiAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01MsgSubtitleUiContAccessor* MMsgSubtitleUiAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01MsgChoiceUiContAccessor* MMsgChoiceUiAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01ClearAreaTelopUiControllerAccessor* MClearAreaTelopUiControllerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01NoticeUiControllerAccessor* MNoticeUiControllerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01TestResultUIControllerAccessor* MTestResultUIControllerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01HudManagerAccessor* HudManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01FinUiControllerAccessor* MFinUIControllerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetManagerAccessor* MWidgetManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01TitlePrologueUiControllerAccessor* MTitlePrologueAccessor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01MsgUiControllerAccessorBase* MLasUseMsgUiAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AUiController*> ActiveUiControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqLipsyncSpeakerParam> LipsyncSpeakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqGeneralLipsyncSpeakerParam> GeneralLipsyncSpeakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01SEADActiveSoundShared> PlayingVoices;
    
public:
    AG01SeqMsgEventController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowMessageWindow(const FG01MsgWindowParam& InParam);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeactivateUseImperialCrownWindow(AUiController* InUiController);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivateUiController(AUiController* InUiController);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivateChoiceWindow(AUiController* InUiController);
    
};

