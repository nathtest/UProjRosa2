#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "VFXLoadInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXLoadInfo -FallbackName=VFXLoadInfo
#include "EG01AbilityConditionType.h"
#include "EG01BattleArtsAttribute.h"
#include "EG01BattleCharacterDispose.h"
#include "EG01BattleCommandOperate.h"
#include "EG01BattleLinkCameraRange.h"
#include "EG01MapAspectType.h"
#include "EG01ReasonToChangedBpCostEnum.h"
#include "G01AttackInfo.h"
#include "G01AttackResultInfo.h"
#include "G01BattleArtsEffectSetting.h"
#include "G01BattleArtsSequenceSetting.h"
#include "G01BattleCameraPhaseDebugInfo.h"
#include "G01BattleData.h"
#include "G01BattleDebugSetupData.h"
#include "G01BattleEnemyKeyStruct.h"
#include "G01BattleEscapeExpressionStruct.h"
#include "G01BattleFieldID.h"
#include "G01BattleLinkCommandDebugInfo.h"
#include "G01BattleLinkCommandStruct.h"
#include "G01BattleLinkPlaySetting.h"
#include "G01BattleLinkRequestCommand.h"
#include "G01BattleMgrArg_CheckInspiration.h"
#include "G01BattlePartyFormationPoint.h"
#include "G01BattlePartyFormationTableRow.h"
#include "G01BattlePresetKeyStruct.h"
#include "G01BattlePresetTableRow.h"
#include "G01BattleRewardData.h"
#include "G01BattleSequencePlayer.h"
#include "G01BattleSetupData.h"
#include "G01MapAspectAction.h"
#include "G01MapAspectFlowTableRow.h"
#include "G01MapAspectOverride.h"
#include "G01MapAspectResult.h"
#include "G01BattleManagerInf.generated.h"

class AActor;
class AAppActor;
class AG01BattleCharacterBase;
class AG01BattleField;
class AG01SequenceControllerBase;
class UCurveFloat;
class UG01BattleCameraJudgeBase;
class UG01BattleManagerHandle;
class UG01BattleTask;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_UpdateNextCommandList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_UpdateMapAspectEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_UnregisterBattleField(AG01BattleField* InBattleField);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_TryRobDropItem(AActor* InSource, AActor* InTarget, int32 InDropSlotNo, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_TryConsumeLinkGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_TryAbilityAffinityOpen(AActor* InTarget, EG01BattleArtsAttribute InAttr, bool InOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_ShowReinforceEnemy(int32 InFormationNo, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleManager_SetupPassiveStatus(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_SetMapAspectVisibility(bool Invisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_SetCurrentSeqPlayer(const FG01BattleSequencePlayer& InSeqPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_ReserveGotoTitleScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_ReserveGotoLastSavePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_ReserveBattleRetry();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_RequestLinkInterp(AG01SequenceControllerBase* InFromSequence, AG01SequenceControllerBase* InToSequence, float InDuration, UCurveFloat* InCurve, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_RequestEscape(bool& ReEscaped);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_RequestChangeFormation(FName InFormationId, bool& ReChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_ReinforceEnemy(FG01BattleEnemyKeyStruct InEnemy, int32 InFormationNo, bool& OutSuccess, AActor*& OutEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_RegisterBattleField(AG01BattleField* InBattleField);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OverrideMapAspect(const FG01MapAspectOverride& InOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnStartLinkIntroSequence(const TArray<AActor*>& InSourceList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnStartArtsSequence(AActor* InActor, FName InArtsID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnProcessArtsHit(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult, bool InIsHit, bool InIsMiss);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnPlayStartCameraSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnPlayEndCameraSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnNotifiedCameraTutorialEvent(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnNotifiedCameraNextPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnNotifiedCameraLearnAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnMissed(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnEndLinkIntroSequence(const TArray<AActor*>& InSourceList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnEndArtsSequence(AActor* InActor, FName InArtsID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnDispose(AActor* InCharacter, EG01BattleCharacterDispose InDisposeType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnDefeated(AActor* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnDamaged(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnChangedToTargetSelect(AActor* InSource);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnChangedToCommandWait(AActor* InSource);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_OnArtsFathom(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, bool InWithLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_NotifyPlaybackTaskEnd(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_NotifyCommandTaskEnd(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_NotifyChangedPartyFormation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_MoveBattleFieldToOther(const FG01BattleFieldID InBattleFieldId, bool& OutSuccess, bool& OutReverted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_MarkCharacterStatusChange(AActor* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_MakeLinkCommandList(AActor* InSource, bool& ReCanLink, TArray<FG01BattleLinkCommandStruct>& ReLinkCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_MakeAttackResultUniqueID(UG01BattleTask* InTask, AActor* InSource, int32 InHitNo, int32 InTargetNo, int32& ReUniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_IsODGaugeHidden(bool& OutIsHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_IsEmptyEnemyFormationNo(int32 InFormationNo, bool& OutIsEmpty);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_IsDuel(bool& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleManager_IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleManager_InitPassiveStatus(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetTypeUseCount(EG01MapAspectType InType, int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetSystemLinkJoinCountRange(int32& OutJoinMin, int32& OutJoinMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetRewardData(FG01BattleRewardData& OutReward);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetReplaceActor(AActor* InTargetActor, AActor*& ReReplaceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetRemainTurnToRevert(int32& OutTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetPartyTeamRotation(FRotator& ReRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetPartyFormationPointTransform(int32 InFormationNo, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetPartyFormationCenter(AActor*& RePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetPartyCharacterCenter(AActor*& RePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetOtherAttacker(AActor*& ReAttacker);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetODGaugeMax(int32& OutGaugeMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetODGauge(int32& ReGauge);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetODComboCount(int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetObserverCallList(TArray<UObject*>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetNotDeadTeamCharacter(bool InEnemyTeam, TArray<AAppActor*>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetNotDeadPartyCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetNotDeadEnemyCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetNotDeadCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetNextTurn(int32& ReTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01MapAspectResult Inf_G01BattleManager_GetMapAspectResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetLastTickedTime(FDateTime& OutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetHandle(UG01BattleManagerHandle*& OutHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetFreeAreaBox(FBox& OutBox);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetFormationDataNextTurn(FG01BattlePartyFormationTableRow& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetFormationData(FG01BattlePartyFormationTableRow& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetExecCounterArts(AActor* InSource, AActor* InTarget, const FName& InArtsID, bool& OutIsCountered, FName& OutArtsName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetEscapeExpression(FG01BattleEscapeExpressionStruct& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetEnemyTeamRotation(FRotator& ReRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetEnemyFormationPointTransform(int32 InFormationNo, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetEnemyFormationCenter(AActor*& RePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetEnemyCharacterToWin(TArray<AAppActor*>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetEnemyCharacterCenter(AActor*& RePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetEmptyEnemyFormationNo(TArray<int32>& OutFormationNoList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCurrentTurn(int32& ReTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCurrentSpellLearn(bool& OutIsLearn, AActor*& OutCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCurrentSeqPlayer(bool& OutIsExist, FG01BattleSequencePlayer& OutSeqPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCurrentPartyFormation(FName& ReFormationId, int32& ReRank, bool& ReIsBreaked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCurrentMapAspectFlow(FG01MapAspectFlowTableRow& OutFlow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCurrentMapAspect(EG01MapAspectType& OutType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCurrentLinkJoinCountRange(int32& OutJoinMin, int32& OutJoinMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCurrentAbilityMastery(bool& OutIsLearn, AActor*& OutCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCurrentAbilityLearn(bool& OutIsLearn, AActor*& OutCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCharacterTeamRotation(AActor* InActor, FRotator& ReRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCharacterInFormation(AActor* InCharacter, EG01BattleCommandOperate InOperate, bool& ReFound, AActor*& ReCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCharacterCommandSpeedRateNextTurn(AActor* InCharacter, float& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetCharacterCommandSpeedRate(AActor* InCharacter, float& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetBattleSetupData(FG01BattleSetupData& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetBattlePresetId(FName& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetBattlePreset(FG01BattlePresetTableRow& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetBattleFieldList(TArray<AG01BattleField*>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetBattleField(AG01BattleField*& ReBattleField);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetBattleData(FG01BattleData& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetBattleCamera(AActor*& OutActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetAvailablePartyFormation(TArray<FName>& ReFormationIdList, TArray<int32>& ReRankList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetArtsLearnLevel(AActor* InSourceActor, AActor* InTargetActor, FName InArtsName, int32& OutLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetAllTeamCharacter(bool InEnemyTeam, TArray<AAppActor*>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetAllPartyCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetAllEnemyCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetAllCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetAliveTeamCharacter(bool InEnemyTeam, TArray<AAppActor*>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetAlivePartyCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetAliveEnemyCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_GetAliveCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_FindTaskEffectSetting(UG01BattleTask* InTask, bool& ReFound, FG01BattleArtsEffectSetting& ReSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_FindLinkPlaySetting(AActor* InSource, AActor* InTarget, FName InArtsID, bool& OutFound, FG01BattleLinkPlaySetting& OutSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_FindLinkPlacementOrder(int32 InLinkOrder, bool& OutFound, int32& OutPlacementOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_FindLinkOrderedChara(int32 InLinkOrder, bool& OutFound, AActor*& OutChara);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_FindLinkCameraRange(int32 InLinkOrder, bool& OutFound, EG01BattleLinkCameraRange& OutCameraRange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_FindFormationPointDataNextTurn(AActor* InCharacter, bool& ReFound, FG01BattlePartyFormationPoint& RePointData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_FindFormationPointData(AActor* InCharacter, bool& ReFound, FG01BattlePartyFormationPoint& RePointData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_FindFormationNo(AActor* InCharacter, bool& ReFound, int32& ReFormationNo, int32& ReLineNo, int32& ReElemNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_FindDuplicateNo(AActor* InCharacter, bool& ReFound, int32& ReDuplicateNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_FindCurrentTaskEffectSetting(bool& ReFound, FG01BattleArtsEffectSetting& ReSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_FindCharacterIndex(AActor* InCharacter, bool& ReFound, int32& ReIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_FindArtsResource(FName InArtsID, AActor* InSourceActor, AActor* InTargetActor, bool& OutFound, AG01SequenceControllerBase*& OutSequenceCtrl, FG01BattleArtsSequenceSetting& OutSequenceSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_ExecuteCommandTask(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_DoJudgeCameraByDirector(UG01BattleCameraJudgeBase* InCameraJudge, bool& OutCanTransit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_DecideDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_DebugSetLinkRequest(const FG01BattleLinkRequestCommand& InLinkRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_DebugMapAspectOverride(const FG01MapAspectOverride& InOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_DebugMapAspectAction(const FG01MapAspectAction& InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_DebugGetLinkCommandInfo(AActor* InSource, FG01BattleLinkCommandDebugInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_DebugGetCameraPhaseInfo(FG01BattleCameraPhaseDebugInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_ConvertLinkOriginTransform(AActor* InSource, const TArray<AActor*>& InTargetList, const FTransform& InTransform, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_ClearCurrentSeqPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CheckShieldCanActivate(AActor* InSource, AActor* InTarget, FName InArtsID, bool& OutCanActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CheckRelationCurrentTask(AActor* InCharacter, bool& ReIsRelated, bool& ReIsSource, bool& ReIsTarget, int32& ReTargetIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CheckNeedLoserScreenForDuel(bool& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleManager_CheckHasDelaySequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CheckCounterArtsLearn(AActor* InSource, AActor* InTarget, const FName& InArtsID, bool& OutIsLearned, FName& OutArtsName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CheckCharaAffinityNeedsOpen(AActor* InCharacter, bool& ReNeedsOpen, TArray<bool>& ReOpenList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CheckArtsInspiration(FG01BattleMgrArg_CheckInspiration InCheckArg, bool& OutIsLearned, bool& OutToReplace, FName& OutNewArtsId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CharacterDown(AG01BattleCharacterBase* InDownCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_ChangeEnemyFormationNo(int32 InSrcFormationNo, int32 InDstFormationNo, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CanEscape(bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CanChangeFormation(bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CancelTask(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CanArtsLearn(AActor* InSource, FName InArtsName, FName InWeaponId, bool& ReCanLearn, float& ReLearnRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CameraIsPlaybackPhase(bool& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CalcLinkDamageBonus(AActor* InSource, float& ReBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_CalcArtsBpCost(AActor* InSource, AActor* InTarget, FName InArtsName, int32& ReBpCost, TArray<EG01ReasonToChangedBpCostEnum>& reasonList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleTaskTryReplace(UG01BattleTask* InTask, FName InNewTaskId, bool& ReReplaced);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleTaskStart(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleTaskInsertPlayback(int32 InIndex, FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& ReBattleTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleTaskIndexOf(AActor* InSourceActor, bool& ReFound, int32& ReIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleTaskEnd(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleTaskCheckFathomArtsLearn(UG01BattleTask* InTask, AActor* InTarget, bool& ReIsLearned, FName& ReArtsName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleTaskCheckCounterArtsLearn(UG01BattleTask* InTask, bool& ReIsLearn, FName& ReArtsName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleTaskCheckCounterArtsExec(UG01BattleTask* InTask, bool& ReIsCounter, FName& ReArtsName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleTaskCheckArtsLearn(UG01BattleTask* InTask, bool& ReIsLearned, bool& ReToReplace, FName& ReArtsName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleTaskAddPlayback(FName InTaskId, AActor* InSourceActor, int32 InSourceActorSpeed, AActor* InTargetActor, UG01BattleTask*& ReBattleTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleStartOnName(FName InBattleName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleStartOnKey(FG01BattlePresetKeyStruct InPresetKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleStartOnDebug(const FG01BattleSetupData& InBattleSetupData, const FG01BattleDebugSetupData& InDebugSetupData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_BattleStartOnData(FG01BattleSetupData InBattleSetupData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_ApplyLinkSlomo(float InSlomo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_AddLoadVFXTask(AActor* InSourceActor, const FVFXLoadInfo& InInfo, UG01BattleTask*& ReBattleTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_AddLoadSequenceTask(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& ReBattleTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_AddHiddenCommandTask(AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, int32 InActionCountNum, UG01BattleTask*& ReBattleTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_AddGaugeOnExtarnal(AActor* InSource, int32 InGauge);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_AddArtsInspirationTask(FName InArtsID, FName InBaseArtsId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& OutBattleTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleManager_AddAbilityStat(EG01AbilityConditionType InType, int32 InCount, AActor* InCharacter);
    
};

