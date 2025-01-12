#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EScreenTransitionType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EScreenTransitionType -FallbackName=EScreenTransitionType
#include "EBtTransitionType.h"
#include "G01BattleCharacterObserverInf.h"
#include "G01BattleCommandManagerObserverInf.h"
#include "G01BattleDirectorObserverInf.h"
#include "G01BattleEnemyKeyStruct.h"
#include "G01BattleManagerObserverInf.h"
#include "G01BattlePlaySequenceTaskOwnerInf.h"
#include "G01BattlePresetTableRow.h"
#include "G01BattleSystemController.h"
#include "G01BattleTaskBridgeComponentObserverInf.h"
#include "G01BattleTimelineUiControllerObserverInf.h"
#include "G01BattleDirectorController.generated.h"

class AActor;
class UG01BattleCameraJudgeBase;
class UG01BattleDirectorSequenceDataAsset;
class UG01GamePlayDataManagerAccessor;
class UG01TutorialManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleDirectorController : public AG01BattleSystemController, public IG01BattleManagerObserverInf, public IG01BattleCommandManagerObserverInf, public IG01BattleDirectorObserverInf, public IG01BattlePlaySequenceTaskOwnerInf, public IG01BattleCharacterObserverInf, public IG01BattleTimelineUiControllerObserverInf, public IG01BattleTaskBridgeComponentObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01TutorialManagerAccessor* MTutorialManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01GamePlayDataManagerAccessor* GamePlayDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleDirectorSequenceDataAsset* SequenceDataAssets;
    
public:
    AG01BattleDirectorController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateBattleAbort(bool& OutToEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSequenceTransform(FName InKey, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSequenceSlotActor(FName InKey, const TArray<AActor*>& InSourceList, const TArray<AActor*>& InTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetReciveSequenceEvent(FName InKey, AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestPlaySequence(FName InKey, bool IsForce);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleAbort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsSkipWinPhase(bool& OutSkip);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void IsReadyToPlayback(bool& ReIsReady);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void IsReadyToBattle(bool& ReIsReady);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsEnableAbortPhase(bool& OutEnableAbort);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsDisableSpellLearn(bool& OutDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsDisableSkillLearn(bool& OutDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsDisableFathomLearn(bool& OutDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsDisableCounterLearn(bool& OutDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeTurn(int32& ReTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStartTransitionType(EBtTransitionType& OutType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UG01BattleDirectorSequenceDataAsset* GetSequenceDataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetRequestedPlaySequence();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNextTurn(int32& Re) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentTurn(int32& Re) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattlePreset(FG01BattlePresetTableRow& OutPreset);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetAdditionalPartyList(TArray<FName>& OutIdList);
    
    UFUNCTION(BlueprintCallable)
    void GetAdditionalEnemyList(TArray<FName>& OutIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ElapseTurn(int32& ReTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoJudgeCameraTransition(UG01BattleCameraJudgeBase* InCameraJudge, bool& OutCanTransit);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Dir_WinCount(int32& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Dir_PartyCount(int32& ReCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Dir_OnTurnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Dir_OnTurnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Dir_OnCommandStart();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Dir_LoseCount(int32& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Dir_LinkGauge(int32& ReGauge);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Dir_IsSurpriseAttack(bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Dir_IsBackAttack(bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Dir_FaintPartyCount(int32& ReCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Dir_EscapeCound(int32& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Dir_DeadPartyCount(int32& ReCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Dir_CurrentTurn(int32& ReTurn);
    
    UFUNCTION(BlueprintCallable)
    void Dir_CallTutorial(FName InTutorialId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Dir_BattleCount(int32& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Dir_AlivePartyCount(int32& ReCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Cmd_Need_Intro_BossName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Cmd_Check_Winner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Cmd_Check_Loser();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Cmd_BD_ShowReinforceEnemy(int32 InFormationNo, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_BD_ScreenTransitionOut(float InSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_BD_ScreenTransitionIn(EScreenTransitionType InType, float InSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BD_ReserveSubEnemy(TArray<FG01BattleEnemyKeyStruct>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_BD_ReinforceEnemy(FG01BattleEnemyKeyStruct InEnemy, int32 InFormationNo, bool& OutSuccess, AActor*& OutEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BD_OverrideStartTransitionType(EBtTransitionType& OutTransitionType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BD_OverrideSkipWinPhase(bool& OutSkip);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BD_OverrideCanNotEscape(bool& OutCanNotEscape);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_BD_OnBattleAbort();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BD_IsEnableAbortPhase(bool& OutEnableAbort);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BD_IsDisableSpellLearn(bool& OutDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BD_IsDisableSkillLearn(bool& OutDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BD_IsDisableFathomLearn(bool& OutDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BD_IsDisableCounterLearn(bool& OutDisable);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_BD_GetEmptyEnemyFormationNo(bool& OutExistEmpty, TArray<int32>& OutFormationNoList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BD_GetBattleEndTransition(bool& OutIsOverride, EScreenTransitionType& OutType, float& OutSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_BD_CheckEmptyEnemyFormationNo(int32 InFormationNo, bool& OutIsEmpty);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_BD_ChangeEnemyFormationNo(int32 InSrcFormationNo, int32 InDstFormationNo, bool& OutSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanNotEscape(bool& OutCanNotEscape);
    

    // Fix for true pure virtual functions not being implemented
};

