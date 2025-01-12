#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EQuestSectionEvalOp -FallbackName=EQuestSectionEvalOp
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "QuestSectionNameView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestSectionNameView -FallbackName=QuestSectionNameView
#include "EG01AbilityConditionType.h"
#include "EG01BattleArtsAttribute.h"
#include "EG01BattleMainPhaseType.h"
#include "EG01BattleManagerObserverGroup.h"
#include "G01AbilityLearnNotify.h"
#include "G01AbilityLearnStat.h"
#include "G01AbilityManagerObserverInf.h"
#include "G01AbilityMasteryNotify.h"
#include "G01AddedPotentObserverInf.h"
#include "G01BattleArtsSequenceSetting.h"
#include "G01BattleCharacterObserverInf.h"
#include "G01BattleCharacterViewSwitcherOwnerInf.h"
#include "G01BattleCommandManagerObserverInf.h"
#include "G01BattleData.h"
#include "G01BattleFieldParamTableRow.h"
#include "G01BattleManagerInf.h"
#include "G01BattlePresetTableRow.h"
#include "G01BattleResultUiContUserInf.h"
#include "G01BattleRetryData.h"
#include "G01BattleSaveInfo.h"
#include "G01BattleSequencePlayer.h"
#include "G01BattleSetupData.h"
#include "G01BattleTaskBridgeComponentObserverInf.h"
#include "G01BtCommandUiContUserInf.h"
#include "G01BtGameoverUiContUserInf.h"
#include "SequencerManagerAccessCompo.h"
#include "G01BattleManager.generated.h"

class AActor;
class AG01BattleCharacterController;
class AG01BattleDirectorController;
class AG01BattleField;
class AG01BattleLinkController;
class AG01BattleMapAspectController;
class AG01SequenceControllerBase;
class UG01BattleCommonDataAsset;
class UG01BattleHitForceFeedbackDataAsset;
class UG01BattleHitSlomoDataAsset;
class UG01BattleManagerHandle;
class UG01BattleTask;
class UObject;
class USequencerManagerAccessCompo;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleManager : public AManagerBase, public IG01BattleManagerInf, public IG01BattleCommandManagerObserverInf, public IG01BtCommandUiContUserInf, public IG01BattleResultUiContUserInf, public IG01BtGameoverUiContUserInf, public IG01AbilityManagerObserverInf, public IG01AddedPotentObserverInf, public IG01BattleCharacterViewSwitcherOwnerInf, public IG01BattleCharacterObserverInf, public IG01BattleTaskBridgeComponentObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USequencerManagerAccessCompo* MSequencerManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleCommonDataAsset* MBattleCommonDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleHitSlomoDataAsset* BattleHitSlomoDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleHitForceFeedbackDataAsset* BattleHitForceFeedbackDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BattleMainPhaseType MMainPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleManagerHandle* ManagerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AG01BattleField*> BattleFieldList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleSequencePlayer CurrentSeqPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityLearnStat AbilityLearnStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityLearnNotify AbilityLearnNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityMasteryNotify AbilityMasteryNotify;
    
public:
    AG01BattleManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMainPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TryRobDropItem(AActor* InSource, AActor* InTarget, int32 InDropSlotNo, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TryAbilityAffinityOpen(AActor* InTarget, EG01BattleArtsAttribute InAttr, bool InOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_Inactive(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_DataSetting(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_DataLoadWait(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_DataLoad(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_DataDelete(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_DataCreate(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleWin(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleTurnStart(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleTurnEnd(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleTurnElapse(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleTask(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleStart(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleResultSpell(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleResultAbility(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleResult(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattlePlaybackStart(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattlePlaybackEnd(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattlePlayback(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleLose(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleEscape(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleEnd(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleCommand(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleArtsSeal(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start_BattleAbort(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowReinforceEnemy(int32 InFormationNo, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetupEnemyPartAttach();
    
    UFUNCTION(BlueprintCallable)
    void ResetObserverObject();
    
    UFUNCTION(BlueprintCallable)
    void ResetAbilityStat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReinforceEnemy(FName InEnemyID, int32 InFormationNo, bool& OutSuccess, AActor*& OutEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyPlaybackTaskEnd(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyCommandTaskEnd(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyChangedPartyFormation();
    
    UFUNCTION(BlueprintCallable)
    void NotifySettingToDirector(AG01BattleDirectorController* InDirector, const FG01BattleSetupData& InStartData, const FG01BattlePresetTableRow& InPresetData, const FG01BattleData& InData, const FG01BattleSaveInfo& InSaveInfo);
    
    UFUNCTION(BlueprintCallable)
    void MakeBattleRetry(const FG01BattleData& InBattleData, FG01BattleRetryData& OutRetryData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPlayInEditor(bool& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsInDevelopmentLevel(bool& Out) const;
    
    UFUNCTION(BlueprintCallable)
    void IsEmptyEnemyFormationNo(int32 InFormationNo, bool& OutIsEmpty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsAvailableDebugSetupData(bool& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetPartyController(AG01BattleCharacterController*& OutCharaCtrl);
    
    UFUNCTION(BlueprintCallable)
    void GetObserverCallList(TArray<UObject*>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetMapAspectController(AG01BattleMapAspectController*& OutCtrl);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetLinkController(AG01BattleLinkController*& OutLinkCtrl);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetEnemyForceLevel(int32& OutLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetEnemyController(AG01BattleCharacterController*& OutCharaCtrl);
    
    UFUNCTION(BlueprintCallable)
    void GetEmptyEnemyFormationNo(TArray<int32>& OutFormationNoList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GatherObserverObjectList();
    
    UFUNCTION(BlueprintCallable)
    void ForceChangeMainPhase(EG01BattleMainPhaseType InMainPhase, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void FindBattlePreset(FName InRowName, bool& ReFound, FG01BattlePresetTableRow& ReRow);
    
    UFUNCTION(BlueprintCallable)
    void FindBattleFieldParam(FName InBattleFieldId, bool& OutFound, FG01BattleFieldParamTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsResource(FName InArtsID, AActor* InSourceActor, AActor* InTargetActor, bool& OutFound, AG01SequenceControllerBase*& OutSequenceCtrl, FG01BattleArtsSequenceSetting& OutSequenceSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void EnableSpellArtsLearn(bool& OutEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void EnableSkillArtsLearn(bool& OutEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void EnableFathomArtsLearn(bool& OutEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void EnableCounterArtsLearn(bool& OutEnable);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendInspiLogFathom(FName InArtsID, float InRate, float InLottery, bool InIsLearn);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendInspiLogCounter(FName InArtsID, float InRate, float InLottery, bool InIsLearn);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendInspiLogArts(FName InArtsID, float InRate, float InLottery, bool InIsLearn);
    
    UFUNCTION(BlueprintCallable)
    void DBG_InspiLogEnd();
    
    UFUNCTION(BlueprintCallable)
    void DBG_InspiLogBegin(FName InTag, FName InBaseArtsId);
    
    UFUNCTION(BlueprintCallable)
    void ClearDebugSetupData();
    
    UFUNCTION(BlueprintCallable)
    bool CheckQuestSectionEvaluate(const FQuestSectionNameView& InQuest, EQuestSectionEvalOp InOp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckInDevelopmentLevel(bool& OutIsIn);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMainPhase(EG01BattleMainPhaseType InMainPhase, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void ChangeEnemyFormationNo(int32 InSrcFormationNo, int32 InDstFormationNo, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void AvailableProductLevelDebug(bool& Out) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyDebugSetupData(UPARAM(Ref) FG01BattleData& InBattleData);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBattlePreset(UPARAM(Ref) FG01BattleData& InBattleData, const FG01BattlePresetTableRow& InBattlePresetData);
    
    UFUNCTION(BlueprintCallable)
    void ApplicateAbilityStat();
    
    UFUNCTION(BlueprintCallable)
    void AddObserverObjectList(EG01BattleManagerObserverGroup InGroup, const TArray<UObject*>& InObjects);
    
    UFUNCTION(BlueprintCallable)
    void AddObserverObject(EG01BattleManagerObserverGroup InGroup, UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void AddAbilityStat(EG01AbilityConditionType InType, int32 InCount, AActor* InCharacter);
    

    // Fix for true pure virtual functions not being implemented
};

