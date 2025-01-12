#pragma once
#include "CoreMinimal.h"
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "SeqGeneralEventParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqGeneralEventParam -FallbackName=SeqGeneralEventParam
#include "SequenceReplaceObjectInterface.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceReplaceObjectInterface -FallbackName=SequenceReplaceObjectInterface
#include "EG01AbilityConditionType.h"
#include "EG01AttackAffinityType.h"
#include "EG01BattleArtsAttribute.h"
#include "EG01BattleCharacterAnimActionType.h"
#include "EG01BattleCharacterAnimLearnType.h"
#include "EG01BattleCharacterAnimReactionType.h"
#include "EG01BattleCharacterAnimResultType.h"
#include "EG01BattleCharacterDispose.h"
#include "EG01BattleCharacterSize.h"
#include "EG01VisualActorSizeType.h"
#include "G01AddedPotentObserverInf.h"
#include "G01BattleCharacterAffinityStruct.h"
#include "G01BattleCharacterAnimInf.h"
#include "G01BattleCharacterAnimWaitType.h"
#include "G01BattleCharacterArtsStruct.h"
#include "G01BattleCharacterEquip.h"
#include "G01BattleCharacterInf.h"
#include "G01BattleCharacterStatusStruct.h"
#include "G01BattleCharacterViewSwitcherOwnerInf.h"
#include "G01BattleCommandManagerObserverInf.h"
#include "G01BattleManagerObserverInf.h"
#include "G01BattleTaskBridgeComponentObserverInf.h"
#include "G01CharaVariableStatus.h"
#include "G01ItemArmorDataStruct.h"
#include "Templates/SubclassOf.h"
#include "G01BattleCharacterBase.generated.h"

class AActor;
class AG01CharacterVisualActor;
class UAnimInstance;
class UAnimMontage;
class UAnimSequence;
class UG01AbilityManagerAccessor;
class UG01BattleArtsManagerAccessor;
class UG01BattleCharacterHandle;
class UG01BattleManagerAccessor;
class UG01BattleSequencePlayComponent;
class UG01BattleTask;
class UG01BattleTickFlagContainer;
class UG01BattleVisualDataAsset;
class UG01CharacterIDComponent;
class UG01ItemManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleCharacterBase : public AAppActor, public IG01BattleCharacterInf, public IG01BattleCharacterAnimInf, public IG01AddedPotentObserverInf, public ISequenceReplaceObjectInterface, public IG01BattleManagerObserverInf, public IG01BattleCommandManagerObserverInf, public IG01BattleCharacterViewSwitcherOwnerInf, public IG01BattleTaskBridgeComponentObserverInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleCharacterStatusStruct ConstantStatus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleCharacterStatusStruct MInitStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleCharacterStatusStruct MCurrentStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleCharacterStatusStruct MMaxStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleCharacterEquip Equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartParentBattleCharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReactionContinueFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    G01BattleCharacterAnimWaitType LastWaitType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AG01CharacterVisualActor> VisualActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleVisualDataAsset* MBattleVisualAssetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MLastReactionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimPauseReasonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleCharacterHandle* MyHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MyInspirationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UG01BattleTickFlagContainer* TickFlagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01ItemManagerAccessor* ItemManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01CharacterIDComponent* CharacterIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleArtsManagerAccessor* ArtsManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleManagerAccessor* BattleManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleSequencePlayComponent* BattleSequencePlayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01AbilityManagerAccessor* AbilityManagerAccessor;
    
public:
    AG01BattleCharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCharacterStatus();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryProcessSequenceAdjust(const FSeqGeneralEventParam& InParam, UG01BattleTask* InTask, bool& OutProcess);
    
    UFUNCTION(BlueprintCallable)
    void StopReaction(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowTimelineForReinforce();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWeaponPower(int32 InWeaponPower);
    
    UFUNCTION(BlueprintCallable)
    void SetVisualActorClass(TSubclassOf<AG01CharacterVisualActor> InClass);
    
    UFUNCTION(BlueprintCallable)
    void SetupVisualAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupVisualActor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAffinityInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetTickFlag(FName InTag, bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPoolStatus();
    
    UFUNCTION(BlueprintCallable)
    void SetLpDamageLock(FName InFlagName, bool InIsOn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLearnLevel(int32 InLearnLevel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLastWaitAnimType(G01BattleCharacterAnimWaitType InWaitType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInspirationID(int32 InInspirationId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetInReaction(bool In);
    
    UFUNCTION(BlueprintCallable)
    void SetFaintLock(FName InFlagName, bool InIsOn);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCharacterID(FName InCharacterId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAffinityOpen(EG01BattleArtsAttribute InAttr, bool InIsOpen);
    
    UFUNCTION(BlueprintCallable)
    void SetAffinityInfo(EG01BattleArtsAttribute InAttr, EG01AttackAffinityType InAffinity, bool InIsOpen);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetCharacterStatus(const FG01BattleCharacterStatusStruct& InBattleStatus, const FG01ItemArmorDataStruct& InArmorStatus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestAnimPause(FName InReasonTag, bool InIsPause);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayReaction(EG01BattleCharacterAnimReactionType InReaction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMontageDetail(UAnimMontage* InAnimMontage, FName InSectionName, float InPlayRate, float InStartPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMontage(UAnimMontage* InAnimMontage, FName InSectionName);
    
    UFUNCTION(BlueprintCallable)
    void OverrideStatus(const FG01CharaVariableStatus& InPartyVariableStatus, const FG01BattleCharacterStatusStruct& InBattleStatus);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverrideReactionMontage(EG01BattleCharacterAnimReactionType InReaction, UAnimMontage*& OutMontage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTurnElapsed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisposeToBattle(EG01BattleCharacterDispose InDisposeType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangedArtsPlaybackOffset();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginResult();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAvailaleVisualAsset();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyTurnStart(int32 InTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyTurnEnd(int32 InTurn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MarkStatusChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsLpDamageLock(bool& ReIsLock);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInReaction() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsFaintLock(bool& ReIsLock);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailableVisualAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsArtsRelated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimPaused() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsAffinityOpen(EG01BattleArtsAttribute InAttr, bool& ReIsOpen) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideTimelineForReinforce();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasLinkableArts(bool& OutHas);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWaitAnim(G01BattleCharacterAnimWaitType InWaitType, UAnimSequence*& Re);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVisualSize(EG01VisualActorSizeType& OutSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVisualID(FName& OutVisualId) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVisualActorClass(TSubclassOf<AG01CharacterVisualActor>& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetVisualActor(AG01CharacterVisualActor*& OutVisualActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectedWeaponAttack(int32& OutAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResultAnimMontage(EG01BattleCharacterAnimResultType InResultType, UAnimMontage*& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetReactionAnimMontage(EG01BattleCharacterAnimReactionType InReactionType, UAnimMontage*& Re);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartParentBattleCharacterID(FName& OutId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetPartCustomTargetActor(AActor*& OutActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetOverrideWaitAnim(G01BattleCharacterAnimWaitType InWaitType, UAnimSequence*& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetOverrideReactionAnimMontage(EG01BattleCharacterAnimReactionType InReactionType, UAnimMontage*& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMainAnimMontage(UAnimMontage*& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLpDamageLock(FName InFlagName, bool& ReIsOn);
    
    UFUNCTION(BlueprintCallable)
    void GetLinkableArtsList(TArray<FName>& OutArtsList, TArray<FName>& OutWeaponList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLearnAnimMontage(EG01BattleCharacterAnimLearnType InLearnType, UAnimMontage*& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLastReactionMontage(UAnimMontage*& OutMontage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EG01BattleCharacterAnimReactionType GetLastReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInitialCharacterID(FName& OutCharacterId) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGestureAnim(TArray<UAnimSequence*>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFaintLock(FName InFlagName, bool& ReIsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCommandAnimMontage(EG01BattleCharacterAnimActionType InActionType, UAnimMontage*& Out);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UG01BattleVisualDataAsset> GetBattleVisualAssetData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattleSize(EG01BattleCharacterSize& OutSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattleCharacterID(FName& OutBattleCharacterId) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetAnimInstance(UAnimInstance*& OutAnimInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAffinityInfo(FG01BattleCharacterAffinityStruct& ReInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAffinity(EG01BattleArtsAttribute InAttr, EG01AttackAffinityType& ReAffinity) const;
    
    UFUNCTION(BlueprintCallable)
    void FindWeaponSlotForArtsId(FName InArtsID, bool& OutFound, int32& OutSlot);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DEL_GetInitialArts(FG01BattleCharacterArtsStruct& OutArts);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DBG_ShieldLogEnd();
    
    UFUNCTION(BlueprintCallable)
    void DBG_ShieldLogBegin(AActor* InCharacter, FName InItemID);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendShieldLogLottery(int32 InPercent, int32 InLottery, bool InIsActivate);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendShieldLogInt(FName InName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendShieldLogFloat(FName InName, float InValue, int32 InFracMin, int32 InFracMax);
    
    UFUNCTION(BlueprintCallable)
    void ConvertAnimTypeActionToResult(EG01BattleCharacterAnimActionType InActionType, bool& OutSuccess, EG01BattleCharacterAnimResultType& OutResultType);
    
    UFUNCTION(BlueprintCallable)
    void ClearTickFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearPoolStatus();
    
    UFUNCTION(BlueprintCallable)
    void ClearLpDamageLock();
    
    UFUNCTION(BlueprintCallable)
    void ClearFaintLock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableReaction();
    
    UFUNCTION(BlueprintCallable)
    void AddAbilityStat(EG01AbilityConditionType InType, int32 InCount, bool InIsAll);
    

    // Fix for true pure virtual functions not being implemented
};

