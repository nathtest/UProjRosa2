#pragma once
#include "CoreMinimal.h"
#include "SeqNotifyControllerBinder.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqNotifyControllerBinder -FallbackName=SeqNotifyControllerBinder
#include "EG01SeqControllerPlayType.h"
#include "G01AchievementID.h"
#include "G01SeqFxPlayArgs.h"
#include "G01SeqNotifyActionCommand.h"
#include "G01SeqNotifyBattleArtsName.h"
#include "G01SeqNotifyBattleDamage.h"
#include "G01SeqNotifyBattleStartData.h"
#include "G01SeqNotifyBgmCustomParams.h"
#include "G01SeqNotifyBgmParam.h"
#include "G01SeqNotifyBgmPauseParam.h"
#include "G01SeqNotifyBgmVolumeParams.h"
#include "G01SeqNotifyBossName.h"
#include "G01SeqNotifyEventParams.h"
#include "G01SeqNotifyLocationName.h"
#include "G01SeqNotifySeParam.h"
#include "G01SeqNotifyVAAnimSeParams.h"
#include "G01SeqPlayArg_BattleEncount.h"
#include "G01SeqPlayArg_BattleFormation.h"
#include "G01SeqVFXPlayArgs.h"
#include "G01SeqNotifyControllerBinder.generated.h"

class UG01BattleArtsManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01SeqNotifyControllerBinder : public ASeqNotifyControllerBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FG01SeqNotifyBgmCustomParams BgmCustomParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FG01SeqNotifyVAAnimSeParams BrutusAnimSeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleArtsManagerAccessor* MArtsManagerAccessor;
    
public:
    AG01SeqNotifyControllerBinder(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetVolumeMultiplier(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOverride(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerRange(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAudibleRange(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndShowLocationName(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndShowFormationName(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndShowEncountState(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndShowBossName(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndShowBattleEscapeUi(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndShowBattleArtsName(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndPauseBgm(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void OnEndApplyBgmPreset(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnBeginShowLocationName(FName InKey, FG01SeqNotifyLocationName InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnBeginShowFormationName(FName InKey, FG01SeqPlayArg_BattleFormation InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnBeginShowEncountState(FName InKey, FG01SeqPlayArg_BattleEncount InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnBeginShowBossName(FName InKey, FG01SeqNotifyBossName InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnBeginShowBattleEscapeUi(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnBeginShowBattleArtsName(FName InKey, FG01SeqNotifyBattleArtsName InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnBeginPauseBgm(FName InKey, FG01SeqNotifyBgmPauseParam InParam);
    
    UFUNCTION(BlueprintCallable)
    bool OnBeginApplyBgmPreset(FName InKey, FG01SeqNotifyBgmVolumeParams InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EG01SeqControllerPlayType GetPlayType() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_UnlockAchievementProgress(FG01AchievementID InAchievementID, float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_UnlockAchievement(FG01AchievementID InAchievementID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_TR_StartBattleOnData(FG01SeqNotifyBattleStartData InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_RequestEvent(FG01SeqNotifyEventParams InParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_PlayVFX(FG01SeqVFXPlayArgs InPlayArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TR_PlaySE(FG01SeqNotifySeParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_PlayEffect(FG01SeqFxPlayArgs InPlayArgs);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_NotifyFathom(FG01SeqNotifyBattleDamage InDamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TR_NotifyDamage(FG01SeqNotifyBattleDamage InDamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_NotifyActionCommand(FG01SeqNotifyActionCommand InActionCommand);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_ShowLocationName(FG01SeqNotifyLocationName InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_ShowFormationName();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_ShowEncountState();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_ShowBossName(FG01SeqNotifyBossName InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_ShowBattleEscapeUI();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_ShowBattleArtsName(FG01SeqNotifyBattleArtsName InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_PlayBgm(FG01SeqNotifyBgmParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_PauseBgm(FG01SeqNotifyBgmPauseParam InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_RP_ApplyBgmVolumePreset(FG01SeqNotifyBgmVolumeParams InParams);
    
};

