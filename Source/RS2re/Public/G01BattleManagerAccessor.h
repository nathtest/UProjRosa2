#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "VFXLoadInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXLoadInfo -FallbackName=VFXLoadInfo
#include "EG01AbilityConditionType.h"
#include "EG01BattleArtsAttribute.h"
#include "EG01BattleCommandOperate.h"
#include "EG01BattleLinkCameraRange.h"
#include "EG01MapAspectType.h"
#include "EG01ReasonToChangedBpCostEnum.h"
#include "G01BattleArtsEffectSetting.h"
#include "G01BattleArtsSequenceSetting.h"
#include "G01BattleCameraPhaseDebugInfo.h"
#include "G01BattleData.h"
#include "G01BattleEnemyKeyStruct.h"
#include "G01BattleEscapeExpressionStruct.h"
#include "G01BattleFieldID.h"
#include "G01BattleLinkCommandDebugInfo.h"
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
#include "G01BattleManagerAccessor.generated.h"

class AActor;
class AAppActor;
class AG01BattleCharacterBase;
class AG01BattleField;
class AG01SequenceControllerBase;
class UCurveFloat;
class UG01BattleManagerHandle;
class UG01BattleTask;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01BattleManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateNextCommandList();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMapAspectEffect();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterBattleField(AG01BattleField* InBattleField);
    
    UFUNCTION(BlueprintCallable)
    void TryRobDropItem(AActor* InSource, AActor* InTarget, int32 InDropSlotNo, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void TryConsumeLinkGauge();
    
    UFUNCTION(BlueprintCallable)
    void TryAbilityAffinityOpen(AActor* InTarget, EG01BattleArtsAttribute InAttr, bool InOpen);
    
    UFUNCTION(BlueprintCallable)
    void ShowReinforceEnemy(int32 InFormationNo, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool SetupPassiveStatus(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetMapAspectVisibility(bool Invisible);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSeqPlayer(const FG01BattleSequencePlayer& InSeqPlayer);
    
    UFUNCTION(BlueprintCallable)
    void ReserveGotoTitleScreen();
    
    UFUNCTION(BlueprintCallable)
    void ReserveGotoLastSavePoint();
    
    UFUNCTION(BlueprintCallable)
    void ReserveBattleRetry();
    
    UFUNCTION(BlueprintCallable)
    void RequestLinkInterp(AG01SequenceControllerBase* InFromSequence, AG01SequenceControllerBase* InToSequence, float InDuration, UCurveFloat* InCurve, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void RequestEscape(bool& ReEscaped);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeFormation(FName InFormationId, bool& ReChanged);
    
    UFUNCTION(BlueprintCallable)
    void ReinforceEnemy(FG01BattleEnemyKeyStruct InEnemy, int32 InFormationNo, bool& OutSuccess, AActor*& OutEnemy);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBattleField(AG01BattleField* InBattleField);
    
    UFUNCTION(BlueprintCallable)
    void OverrideMapAspect(const FG01MapAspectOverride& InOverride);
    
    UFUNCTION(BlueprintCallable)
    void OnStartLinkIntroSequence(const TArray<AActor*>& InSourceList);
    
    UFUNCTION(BlueprintCallable)
    void OnEndLinkIntroSequence(const TArray<AActor*>& InSourceList);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPlaybackTaskEnd(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCommandTaskEnd(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void NotifyChangedPartyFormation();
    
    UFUNCTION(BlueprintCallable)
    void MoveBattleFieldToOther(const FG01BattleFieldID InBattleFieldId, bool& OutSuccess, bool& OutReverted);
    
    UFUNCTION(BlueprintCallable)
    void MarkCharacterStatusChange(AActor* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void MakeAttackResultUniqueID(UG01BattleTask* InTask, AActor* InSource, int32 InHitNo, int32 InTargetNo, int32& ReUniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsODGaugeHidden(bool& OutIsHidden);
    
    UFUNCTION(BlueprintCallable)
    void IsEmptyEnemyFormationNo(int32 InFormationNo, bool& OutIsEmpty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsDuel(bool& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool InitPassiveStatus(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTypeUseCount(EG01MapAspectType InType, int32& OutCount);
    
    UFUNCTION(BlueprintCallable)
    void GetSystemLinkJoinCountRange(int32& OutJoinMin, int32& OutJoinMax);
    
    UFUNCTION(BlueprintCallable)
    void GetRewardData(FG01BattleRewardData& OutReward);
    
    UFUNCTION(BlueprintCallable)
    void GetReplaceActor(AActor* InTargetActor, AActor*& ReReplaceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRemainTurnToRevert(int32& OutTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartyTeamRotation(FRotator& ReRotation);
    
    UFUNCTION(BlueprintCallable)
    void GetPartyFormationPointTransform(int32 InFormationNo, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartyFormationCenter(AActor*& RePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartyCharacterCenter(AActor*& RePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetODGaugeMax(int32& OutGaugeMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetODGauge(int32& ReGauge);
    
    UFUNCTION(BlueprintCallable)
    void GetODComboCount(int32& OutCount);
    
    UFUNCTION(BlueprintCallable)
    void GetObserverCallList(TArray<UObject*>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void GetNotDeadTeamCharacter(bool InEnemyTeam, TArray<AAppActor*>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetNotDeadPartyCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetNotDeadEnemyCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetNotDeadCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNextTurn(int32& ReTurn);
    
    UFUNCTION(BlueprintCallable)
    FG01MapAspectResult GetMapAspectResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLastTickedTime(FDateTime& OutTime);
    
    UFUNCTION(BlueprintCallable)
    void GetHandle(UG01BattleManagerHandle*& OutHandle);
    
    UFUNCTION(BlueprintCallable)
    void GetFreeAreaBox(FBox& OutBox);
    
    UFUNCTION(BlueprintCallable)
    void GetFormationDataNextTurn(FG01BattlePartyFormationTableRow& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetFormationData(FG01BattlePartyFormationTableRow& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetExecCounterArts(AActor* InSource, AActor* InTarget, const FName& InArtsID, bool& OutIsCountered, FName& OutArtsName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEscapeExpression(FG01BattleEscapeExpressionStruct& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEnemyTeamRotation(FRotator& ReRotation);
    
    UFUNCTION(BlueprintCallable)
    void GetEnemyFormationPointTransform(int32 InFormationNo, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEnemyFormationCenter(AActor*& RePoint);
    
    UFUNCTION(BlueprintCallable)
    void GetEnemyCharacterToWin(TArray<AAppActor*>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEnemyCharacterCenter(AActor*& RePoint);
    
    UFUNCTION(BlueprintCallable)
    void GetEmptyEnemyFormationNo(TArray<int32>& OutFormationNoList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentTurn(int32& ReTurn);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentSpellLearn(bool& OutIsLearn, AActor*& OutCharacter);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentSeqPlayer(bool& OutIsExist, FG01BattleSequencePlayer& OutSeqPlayer);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentPartyFormation(FName& ReFormationId, int32& ReRank, bool& ReIsBreaked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentMapAspectFlow(FG01MapAspectFlowTableRow& OutFlow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentMapAspect(EG01MapAspectType& OutType);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentLinkJoinCountRange(int32& OutJoinMin, int32& OutJoinMax);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentAbilityMastery(bool& OutIsLearn, AActor*& OutCharacter);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentAbilityLearn(bool& OutIsLearn, AActor*& OutCharacter);
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterTeamRotation(AActor* InActor, FRotator& ReRotation);
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterInFormation(AActor* InCharacter, EG01BattleCommandOperate InOperate, bool& ReFound, AActor*& ReCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterCommandSpeedRateNextTurn(AActor* InCharacter, float& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterCommandSpeedRate(AActor* InCharacter, float& Re);
    
    UFUNCTION(BlueprintCallable)
    void GetBattleSetupData(FG01BattleSetupData& Re);
    
    UFUNCTION(BlueprintCallable)
    void GetBattlePresetId(FName& Re);
    
    UFUNCTION(BlueprintCallable)
    void GetBattlePreset(FG01BattlePresetTableRow& Re);
    
    UFUNCTION(BlueprintCallable)
    void GetBattleFieldList(TArray<AG01BattleField*>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattleField(AG01BattleField*& ReBattleField);
    
    UFUNCTION(BlueprintCallable)
    void GetBattleData(FG01BattleData& Re);
    
    UFUNCTION(BlueprintCallable)
    void GetAvailablePartyFormation(TArray<FName>& ReFormationIdList, TArray<int32>& ReRankList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArtsLearnLevel(AActor* InSourceActor, AActor* InTargetActor, FName InArtsName, int32& OutLevel);
    
    UFUNCTION(BlueprintCallable)
    void GetAllTeamCharacter(bool InEnemyTeam, TArray<AAppActor*>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetAllPartyCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetAllEnemyCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetAllCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetAliveTeamCharacter(bool InEnemyTeam, TArray<AAppActor*>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetAlivePartyCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetAliveEnemyCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetAliveCharacter(TArray<AAppActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void FindTaskEffectSetting(UG01BattleTask* InTask, bool& ReFound, FG01BattleArtsEffectSetting& ReSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindLinkPlaySetting(AActor* InSource, AActor* InTarget, FName InArtsID, bool& OutFound, FG01BattleLinkPlaySetting& OutSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindLinkPlacementOrder(int32 InLinkOrder, bool& OutFound, int32& OutPlacementOrder);
    
    UFUNCTION(BlueprintCallable)
    void FindLinkOrderedChara(int32 InLinkOrder, bool& OutFound, AActor*& OutChara);
    
    UFUNCTION(BlueprintCallable)
    void FindLinkCameraRange(int32 InLinkOrder, bool& OutFound, EG01BattleLinkCameraRange& OutCameraRange);
    
    UFUNCTION(BlueprintCallable)
    void FindFormationPointDataNextTurn(AActor* InCharacter, bool& ReFound, FG01BattlePartyFormationPoint& RePointData);
    
    UFUNCTION(BlueprintCallable)
    void FindFormationPointData(AActor* InCharacter, bool& ReFound, FG01BattlePartyFormationPoint& RePointData);
    
    UFUNCTION(BlueprintCallable)
    void FindFormationNo(AActor* InCharacter, bool& ReFound, int32& ReFormationNo, int32& ReLineNo, int32& ReElemNo);
    
    UFUNCTION(BlueprintCallable)
    void FindDuplicateNo(AActor* InCharacter, bool& ReFound, int32& ReDuplicateNo);
    
    UFUNCTION(BlueprintCallable)
    void FindCurrentTaskEffectSetting(bool& ReFound, FG01BattleArtsEffectSetting& ReSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindCharacterIndex(AActor* InCharacter, bool& ReFound, int32& ReIndex);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsResource(FName InArtsID, AActor* InSourceActor, AActor* InTargetActor, bool& OutFound, AG01SequenceControllerBase*& OutSequenceCtrl, FG01BattleArtsSequenceSetting& OutSequenceSetting);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCommandTask(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetLinkRequest(const FG01BattleLinkRequestCommand& InLinkRequest);
    
    UFUNCTION(BlueprintCallable)
    void DebugMapAspectOverride(const FG01MapAspectOverride& InOverride);
    
    UFUNCTION(BlueprintCallable)
    void DebugMapAspectAction(const FG01MapAspectAction& InAction);
    
    UFUNCTION(BlueprintCallable)
    void DebugGetLinkCommandInfo(AActor* InSource, FG01BattleLinkCommandDebugInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable)
    void DebugGetCameraPhaseInfo(FG01BattleCameraPhaseDebugInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable)
    void ConvertLinkOriginTransform(AActor* InSource, const TArray<AActor*>& InTargetList, const FTransform& InTransform, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentSeqPlayer();
    
    UFUNCTION(BlueprintCallable)
    void CheckShieldCanActivate(AActor* InSource, AActor* InTarget, FName InArtsID, bool& OutCanActivate);
    
    UFUNCTION(BlueprintCallable)
    void CheckRelationCurrentTask(AActor* InCharacter, bool& ReIsRelated, bool& ReIsSource, bool& ReIsTarget, int32& ReTargetIndex);
    
    UFUNCTION(BlueprintCallable)
    void CheckNeedLoserScreenForDuel(bool& Out);
    
    UFUNCTION(BlueprintCallable)
    bool CheckHasDelaySequence();
    
    UFUNCTION(BlueprintCallable)
    void CheckCounterArtsLearn(AActor* InSource, AActor* InTarget, const FName& InArtsID, bool& OutIsLearned, FName& OutArtsName);
    
    UFUNCTION(BlueprintCallable)
    void CheckCharaAffinityNeedsOpen(AActor* InCharacter, bool& ReNeedsOpen, TArray<bool>& ReOpenList);
    
    UFUNCTION(BlueprintCallable)
    void CheckArtsInspiration(FG01BattleMgrArg_CheckInspiration InCheckArg, bool& OutIsLearned, bool& OutToReplace, FName& OutNewArtsId);
    
    UFUNCTION(BlueprintCallable)
    void CharacterDown(AG01BattleCharacterBase* InDownCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ChangeEnemyFormationNo(int32 InSrcFormationNo, int32 InDstFormationNo, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanEscape(bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanChangeFormation(bool& Re);
    
    UFUNCTION(BlueprintCallable)
    void CancelTask(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void CanArtsLearn(AActor* InSource, FName InArtsName, FName InWeaponId, bool& ReCanLearn, float& ReLearnRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CameraIsPlaybackPhase(bool& Out);
    
    UFUNCTION(BlueprintCallable)
    void CalcLinkDamageBonus(AActor* InSource, float& ReBonus);
    
    UFUNCTION(BlueprintCallable)
    void CalcArtsBpCost(AActor* InSource, AActor* InTarget, FName InArtsName, int32& ReBpCost, TArray<EG01ReasonToChangedBpCostEnum>& reasonList);
    
    UFUNCTION(BlueprintCallable)
    void BattleTaskTryReplace(UG01BattleTask* InTask, FName InNewTaskId, bool& ReReplaced);
    
    UFUNCTION(BlueprintCallable)
    void BattleTaskStart(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void BattleTaskInsertPlayback(int32 InIndex, FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& ReBattleTask);
    
    UFUNCTION(BlueprintCallable)
    void BattleTaskIndexOf(AActor* InSourceActor, bool& ReFound, int32& ReIndex);
    
    UFUNCTION(BlueprintCallable)
    void BattleTaskEnd(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void BattleTaskCheckFathomArtsLearn(UG01BattleTask* InTask, AActor* InTarget, bool& ReIsLearned, FName& ReArtsName);
    
    UFUNCTION(BlueprintCallable)
    void BattleTaskCheckCounterArtsLearn(UG01BattleTask* InTask, bool& ReIsLearn, FName& ReArtsName);
    
    UFUNCTION(BlueprintCallable)
    void BattleTaskCheckCounterArtsExec(UG01BattleTask* InTask, bool& ReIsCounter, FName& ReArtsName);
    
    UFUNCTION(BlueprintCallable)
    void BattleTaskCheckArtsLearn(UG01BattleTask* InTask, bool& ReIsLearned, bool& ReToReplace, FName& ReArtsName);
    
    UFUNCTION(BlueprintCallable)
    void BattleTaskAddPlayback(FName InTaskId, AActor* InSourceActor, int32 InSourceActorSpeed, AActor* InTargetActor, UG01BattleTask*& ReBattleTask);
    
    UFUNCTION(BlueprintCallable)
    void BattleStartOnName(FName InBattleName);
    
    UFUNCTION(BlueprintCallable)
    void BattleStartOnKey(FG01BattlePresetKeyStruct InPresetKey);
    
    UFUNCTION(BlueprintCallable)
    void BattleStartOnData(FG01BattleSetupData InBattleSetupData);
    
    UFUNCTION(BlueprintCallable)
    void ApplyLinkSlomo(float InSlomo);
    
    UFUNCTION(BlueprintCallable)
    void AddLoadVFXTask(AActor* InSourceActor, const FVFXLoadInfo& InInfo, UG01BattleTask*& ReBattleTask);
    
    UFUNCTION(BlueprintCallable)
    void AddLoadSequenceTask(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& ReBattleTask);
    
    UFUNCTION(BlueprintCallable)
    void AddHiddenCommandTask(AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, int32 InActionCountNum, UG01BattleTask*& ReBattleTask);
    
    UFUNCTION(BlueprintCallable)
    void AddGaugeOnExtarnal(AActor* InSource, int32 InGauge);
    
    UFUNCTION(BlueprintCallable)
    void AddArtsInspirationTask(FName InArtsID, FName InBaseArtsId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& OutBattleTask);
    
    UFUNCTION(BlueprintCallable)
    void AddAbilityStat(EG01AbilityConditionType InType, int32 InCount, AActor* InCharacter);
    
};

