#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BattleCameraPhaseType.h"
#include "EG01BattleMainPhaseType.h"
#include "G01AttackInfo.h"
#include "G01AttackResultInfo.h"
#include "G01BattleDropItemResult.h"
#include "G01BattleEndNotifyData.h"
#include "G01BattleRewardData.h"
#include "G01BattleUiMessageKeyStruct.h"
#include "G01BattleManagerObserverInf.generated.h"

class AActor;
class UG01BattleTask;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_TurnElapsed(int32 InCurrentTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_SendUIMessage(FG01BattleUiMessageKeyStruct InMessageKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnStartLinkPlayback(AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnStartLinkIntroPlayback(const TArray<AActor*>& InSourceList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnStartLinkAction(const TArray<AActor*>& InSourceList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnStartedLinkInterp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnReinforce(bool InIsEnemy, const TArray<AActor*>& InCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnReadyNextCommandList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnReadyCommandListByTurnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnPlaybackTaskStarted(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnPlaybackTaskEnd(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnObtainReward(const FG01BattleRewardData& InReward);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnMissed(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InAttackResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnLpRecovered(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnLpDamaged(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnLotteryDropItem(const FG01BattleDropItemResult& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnHpRecovered(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnFinishedLinkInterp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnEndLinkPlayback(AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnEndLinkIntroPlayback(const TArray<AActor*>& InSourceList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnEndLinkAction(const TArray<AActor*>& InSourceList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnElapsedLinkInterp(float InElapsed, float InDuration, float InAlpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnDefeated(AActor* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnDamaged(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnCreatedCommandList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnCreateCommandTaskBefore();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnCreateCommandTaskAfter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnCommandTaskStarted(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnCommandTaskEnd(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnChangedStatus(AActor* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnChangedODGauge(int32 InGauge, bool InIsMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnBpRecovered(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_MainPhaseChange(EG01BattleMainPhaseType InPhaseType, EG01BattleMainPhaseType InOldPhaseType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_DEL_OnDebuffCommandSpeed(const TArray<AActor*>& InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_DecideLpRecover(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_DecideLpDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_DecideHpRecover(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_DecideDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_DecideBpRecover(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_CameraSequenceStart(EG01BattleCameraPhaseType InPhaseType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_CameraPhaseChange(EG01BattleCameraPhaseType InPhaseType, EG01BattleCameraPhaseType InOldPhaseType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_BattleTransitionStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_BattleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_BattleEnd(const FG01BattleEndNotifyData& InBattleEndNotifyData);
    
};

