#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "ChangeGaugeDispatcherDelegate.h"
#include "EG01AttackAffinityType.h"
#include "EG01BattleLinkCameraRange.h"
#include "EG01BattleLinkCommandPlan.h"
#include "G01AcquiredTeacherFlagIDStruct.h"
#include "G01AttackInfo.h"
#include "G01AttackResultInfo.h"
#include "G01BattleArtsTableRow.h"
#include "G01BattleCommandManagerObserverInf.h"
#include "G01BattleLinkCommandDebugInfo.h"
#include "G01BattleLinkCommandStruct.h"
#include "G01BattleLinkDirectionStruct.h"
#include "G01BattleLinkIntroEffectStruct.h"
#include "G01BattleLinkPersonalEffectStruct.h"
#include "G01BattleLinkPlaySetting.h"
#include "G01BattleLinkRequestCommand.h"
#include "G01BattleLinkSettingTableRow.h"
#include "G01BattleManagerObserverInf.h"
#include "G01BattleSetupData.h"
#include "G01BattleSystemController.h"
#include "G01BattleTaskControllerObserverInf.h"
#include "G01GameEffectFlagIDStruct.h"
#include "G01BattleLinkController.generated.h"

class AActor;
class AG01SequenceControllerBase;
class UFlagSystemManagerAccessCompo;
class UG01AbilityManagerAccessor;
class UG01BattleArtsManagerAccessor;
class UG01BattleCommandManagerAccessor;
class UG01BattleLinkDataAsset;
class UG01BattleLinkIntroTask;
class UG01BattleManagerAccessor;
class UG01TeacherManagerAccessor;
class ULoadControlActorComponent;
class UNiagaraComponent;
class USceneComponent;
class USequencerManagerAccessCompo;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleLinkController : public AG01BattleSystemController, public IG01BattleManagerObserverInf, public IG01BattleCommandManagerObserverInf, public IG01BattleTaskControllerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleArtsManagerAccessor* BattleArtsManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleCommandManagerAccessor* BattleCommandManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleManagerAccessor* BattleManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01AbilityManagerAccessor* AbilityManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USequencerManagerAccessCompo* SequencerManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* FlagSystemManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01TeacherManagerAccessor* TeacherManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraRootForEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULoadControlActorComponent> LoadController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleLinkDataAsset* LinkDataAsset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeGaugeDispatcher ED_OnChangedGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkJoinCountMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkJoinCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01GameEffectFlagIDStruct CostSaveEffectFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AcquiredTeacherFlagIDStruct CostSaveAcquiredFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01GameEffectFlagIDStruct GaugeMaxEffectFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AcquiredTeacherFlagIDStruct GaugeMaxAcquiredFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InvolveCountedCharaList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EG01AttackAffinityType, int32> InvolveCountForAffinity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InvolveCountForCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> LinkExecCountPerJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LinkExecCountTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, int32> MaxAddGaugeMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFlagAccessParam> SystemLevelFlagMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SystemEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverDriveGaugeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverDriveGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkJoinCountLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComboCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleLinkSettingTableRow LinkSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleLinkCommandStruct LatestLinkCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkGaugeConsumedCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleLinkIntroEffectStruct IntroEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleLinkPersonalEffectStruct> PersonalEffectList;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, AG01SequenceControllerBase*> IntroSeqContMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PlacementTableRowList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AvailablePlacementTagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> AvailablePlacementTableRowList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LinkIntroSeqSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleLinkIntroTask* LinkIntroTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentLinkSeqSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleLinkRequestCommand LinkRequestByDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleLinkDirectionStruct> DirectionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterpLinkOrder;
    
public:
    AG01BattleLinkController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateLinkSystemMode();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnloadIntroSequence();
    
    UFUNCTION(BlueprintCallable)
    void TryConsumeGauge(int32& OutConsumedGauge);
    
    UFUNCTION(BlueprintCallable)
    void SetSystemModeOnBattleStart();
    
    UFUNCTION(BlueprintCallable)
    void SetLinkSystemMode(bool InEnable, int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkSetting(const FG01BattleLinkSettingTableRow& InLinkSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkRequestByDebug(const FG01BattleLinkRequestCommand& InLinkRequest);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialGauge(int32 InSavedGauge, const FG01BattleSetupData& InBattleSetup);
    
    UFUNCTION(BlueprintCallable)
    void SetGauge(int32 InGauge);
    
    UFUNCTION(BlueprintCallable)
    void SetAvailablePlacementTag(const TArray<FName>& InTagList);
    
    UFUNCTION(BlueprintCallable)
    void OnStartLinkAction();
    
    UFUNCTION(BlueprintCallable)
    void OnEndLinkAction();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideLinkCommand();
    
    UFUNCTION(BlueprintCallable)
    void MakeLinkCommandList(AActor* InSource, bool& ReCanLink, TArray<FG01BattleLinkCommandStruct>& ReLinkCommand);
    
    UFUNCTION(BlueprintCallable)
    void LotteryLinkIntroSequence(int32 InLinkCount, AG01SequenceControllerBase*& OutSeqCtrl);
    
    UFUNCTION(BlueprintCallable)
    void LoadIntroSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsSystemEnable(bool& OutEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsLinkAvailableGauge(bool& Re);
    
    UFUNCTION(BlueprintCallable)
    void GetSystemJoinCountRange(int32& OutJoinMin, int32& OutJoinMax);
    
    UFUNCTION(BlueprintCallable)
    void GetLinkPlaySetting(int32 InLinkOrder, int32 InLinkNum, FG01BattleLinkPlaySetting& OutSetting);
    
    UFUNCTION(BlueprintCallable)
    void GetLinkExecCountPerJoin(int32 InJoinCount, int32& OutExecCount);
    
    UFUNCTION(BlueprintCallable)
    void GetLinkExecCount(int32& OutExecCount);
    
    UFUNCTION(BlueprintCallable)
    void GetLinkCommandDebugInfo(AActor* InSource, FG01BattleLinkCommandDebugInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelJoinCountRange(int32& OutJoinMin, int32& OutJoinMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGaugeMax(int32& OutGaugeMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGauge(int32& ReGauge);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentJoinCountRange(int32& OutJoinMin, int32& OutJoinMax);
    
    UFUNCTION(BlueprintCallable)
    void GetComboCount(int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAvailableJoinCountRange(int32& OutJoinMin, int32& OutJoinMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttachToCameraRoot(USceneComponent*& OutRoot);
    
    UFUNCTION(BlueprintCallable)
    void FindLinkPlacementOrder(int32 InLinkOrder, bool& OutFound, int32& OutPlacementOrder);
    
    UFUNCTION(BlueprintCallable)
    void FindLinkCameraRange(int32 InLinkOrder, bool& OutFound, EG01BattleLinkCameraRange& OutCameraRange);
    
    UFUNCTION(BlueprintCallable)
    void ConvertOriginTransform(int32 InLinkOrder, const FTransform& InTransform, FTransform& OutTransform);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CollectFx(UNiagaraComponent*& OutIntroEffect, TArray<UNiagaraComponent*>& OutPersonalEffectList);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcLinkGaugeCost(int32 InCount, int32& OutCost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcJoinLimitCount(int32& OutCount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcInvolveAddGauge(int32 InAddGauge, const FG01BattleLinkSettingTableRow& InLinkSetting, int32& OutAddGauge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcConsumeGauge(int32 InCost, int32& OutCost);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CalcCommandTotalScore(EG01BattleLinkCommandPlan InPlan, int32 InPowerScore, int32 InRangeScore, int32 InArtsScore, int32& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CalcCommandScoreForRange(AActor* InCharacter, FName InArtsID, const FG01BattleArtsTableRow& InArts, FName InWeaponId, int32& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CalcCommandScoreForPower(AActor* InCharacter, FName InArtsID, const FG01BattleArtsTableRow& InArts, FName InWeaponId, int32& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcComboAddGauge(int32 InComboCount, int32 InAddGauge, float InPlus, float InMultiply, int32& OutAddGauge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcAddGauge(int32 InAdd, int32& OutAdd);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddGaugeOnSurpriseAttackHit(AActor* InSource, TArray<AActor*> InTargetList);
    
    UFUNCTION(BlueprintCallable)
    void AddGaugeOnExtarnal(AActor* InSource, int32 InGauge);
    
    UFUNCTION(BlueprintCallable)
    void AddGaugeOnDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    

    // Fix for true pure virtual functions not being implemented
};

