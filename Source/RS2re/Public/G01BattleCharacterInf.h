#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01AttackAffinityType.h"
#include "EG01BattleArtsAttribute.h"
#include "EG01BattleCharacterAnimLearnType.h"
#include "EG01BattleCharacterAnimWaitReason.h"
#include "EG01BattleCharacterSize.h"
#include "EG01MapAspectType.h"
#include "EG01PartyCharacterSkillType.h"
#include "EG01PartyCharacterSpellType.h"
#include "EG01VisualActorSizeType.h"
#include "G01AbilityCharaStatusEffect.h"
#include "G01AddedPotentAilmentStruct.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentEnhanceStruct.h"
#include "G01AttackInfo.h"
#include "G01BattleArtsSequenceSetting.h"
#include "G01BattleCharacterAffinityStruct.h"
#include "G01BattleCharacterArtsStruct.h"
#include "G01BattleCharacterSkillUnitStruct.h"
#include "G01BattleCharacterSpellUnitStruct.h"
#include "G01BattleCharacterStatusStruct.h"
#include "G01BattleLinkCommandStruct.h"
#include "G01CharaResistance.h"
#include "G01CharacterID.h"
#include "G01PartyCategorizeingLearnArtsStruct.h"
#include "G01SeqPlayArg_BattleArts.h"
#include "G01BattleCharacterInf.generated.h"

class AActor;
class AG01AddedPotentExtarnalObjectBase;
class AG01AttackPoint;
class AG01BattleCursorPoint;
class AG01SequenceControllerBase;
class UG01ArtsScriptBase;
class UG01BattleCharacterHandle;
class UG01BattleTask;
class UG01ItemAttachComponent;
class UG01NamePointComponent;
class UG01StatusPointComponent;
class UG01ValuePointComponent;
class USkeletalMeshComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleCharacterInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleCharacterInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_UseSkipActionCamera(bool& ReUse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_UpdateWaitType(EG01BattleCharacterAnimWaitReason InReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_UpdateDisposeTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_UpdateArtsRank();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_TriggerDefeatedFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_TestShieldActivate(AActor* InSource, FName InArtsID, bool& OutActivated);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_TakeRevive(float InHpRate, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_TakePoisonDamage(int32 InDamage, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_TakeLpRecover(int32 InLpRecover, bool& OutIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_TakeLpDamage(int32 InLpDamage, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_TakeLpBreak(int32 InLpDamage, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_TakeLinkStartPose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_TakeHpRecover(int32 InHpRecover, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_TakeDamage(int32 InDamage, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_TakeBpRecover(int32 InBpRecover, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_StopCommandPose(bool InForceChange, float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ShowTimelineForReinforce();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetUsingArts(const FG01AttackInfo& InAttackInfo, AG01SequenceControllerBase* InArtsSequence, const FG01BattleArtsSequenceSetting& InArtsSequenceSetting, UG01ArtsScriptBase* InArtsScript);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleCharacter_SetupPassiveStatus(FName InPassiveStateName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetupInitialArtsList(const FG01PartyCategorizeingLearnArtsStruct& InArtsData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetupAffinityInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetUnnecessaryToWin(bool In);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetStockGauge(int32 InStockCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetStatusAbility(const FG01AbilityCharaStatusEffect& In);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetShieldEquipped(const bool InShieldEquipped, bool& ReIsShieldEquipped);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetRightEquipVisibility(bool Invisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetPoolStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetMyHandle(UG01BattleCharacterHandle* InHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetLpDamageLock(FName InFlagName, bool InIsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetLP(int32 InLp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetLinkSequence(AG01SequenceControllerBase* InSequenceCtrl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetLinkOrder(int32 InLinkOrder, int32 InLinkNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetLinkArtsStartAtFrame(int32 InStartFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetLeftEquipVisibility(bool Invisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetLearnSequence(AG01SequenceControllerBase* InSequenceCtrl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetKeepDeadVisible(bool Invisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetJoinToLink(bool InJoin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetHpMaxPercent(int32 InPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetHP(int32 InHp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetHiddenByBox(bool InHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetFathomLearnReaction(bool InLearnReaction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetFaintLock(FName InFlagName, bool InIsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetEnableReaction(FName InKey, bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetDitherRateByBox(bool InDither, float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetDitherControl(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetDefenseByShield(const bool InDefenseByShield, bool& ReDefenseByShield);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetCharacterVisibility(bool Invisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetCharacterLevel(int32 InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetBP(int32 InBp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetBoss(bool InIsBoss);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetArtsLearnAction(bool InLearnAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetAffinityOpen(EG01BattleArtsAttribute InAttr, bool InIsOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_SetAddedAbilityEffect(const FG01AbilityCharaStatusEffect& In);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_RestoreArtsUnit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_RequestResultPose(AActor* InForcusTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_RequestLoadArtsResource(bool& ReRequested);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_RequestLearnPose(EG01BattleCharacterAnimLearnType InLearnType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_RequestHpDamageReaction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_RequestCommandPose(FName InPoseName, bool InForceChange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_RequestArtsInspirationPose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_RemoveAllAddedPotent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_RemoveAddedPotent(AActor* InSource, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_PriorityLoadArtsResource(FName InArtsID, bool& ReRequested);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_PlayArtsInterruptSequence(AG01SequenceControllerBase* InSequenceController, FName InArtsID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_OverrideCharacterHidden(UG01BattleTask* InTask, bool& OutOverride, bool& OutIsHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_OnSelectWeapon(FName InWeaponId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_OnSelectArts(FName InArtsName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_OnPrepareCommandExec(bool& ReCanExec);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_OnAttachedPartParent(AActor* InPartParent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_OnAttachedPartChild(AActor* InPartChild);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_NotifyPreCalcArtsHitStatusEnded(AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_NotifyOnSequenceStart(AActor* InSource);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_NotifyOnSequenceEnd(AActor* InSource);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_NotifyOnSequenceAdjustReset(AActor* InSource, FName InTaskId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_NotifyOnSequenceAdjustApply(AActor* InSource, FName InTaskId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_Lockon(bool InIsLockon, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsUnnecessaryToWin(bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsSkipAction(bool& ReSkip);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsShieldEquipped(bool& ReIsShieldEquipped);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsParty(bool& ReIsParty);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsLpDamageLock(bool& OutIsLock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsLinkableStatus(bool& ReLinkable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsJoinToLink(bool& ReJoin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsInvisibleToOtherTeam(bool& OutInvisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsInvisibleToAllyTeam(bool& OutInvisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsInvisible(AActor* InSource, AActor* InTarget, bool& OutInvisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsIgnoreInTimeline(bool& ReIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsIgnoreInNextTimeline(bool& ReIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsHiddenInTimeline(bool& ReHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsFaintLock(bool& ReIsLock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsFaint(bool& ReIsFaint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsEnemy(bool& ReIsEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsDefense(bool& ReIsDefense);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsDead(bool& ReIsDead);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsCounter(bool& ReCounter, FName& ReArtsName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsCommandable(bool& ReCommandable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsCanNotPassiveAction(bool& ReCanNot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsBoss(bool& ReIsBoss);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsAttackMiss(TMap<int32, bool>& OutIsAttackMissMap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsAlive(bool& ReIsAlive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IsAffinityOpen(EG01BattleArtsAttribute InAttr, bool& ReIsOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_InvalidAilment(AActor* InSource, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleCharacter_InitPassiveStatus(FName InPassiveStateName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ImmForceKill(bool& Dummy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_IgnoreInNextTimelineByAilment(bool InIgnore, bool InCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_HitAddedPotent(AActor* InSource, FG01AddedPotentBaseKeyStruct InPotent, FName InParameter, bool& OutIsApply);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_HideTimelineForReinforce();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_HasLinkableArts(bool& OutHas);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleCharacter_HasAddedPotent(FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetWeaponAttack(int32& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetVisualSize(EG01VisualActorSizeType& OutSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetVisualID(FName& OutVisualId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetValuePoint(UG01ValuePointComponent*& RePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetUsedArtsListLastTurn(TArray<FName>& OutArtsList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetUsedArtsListCurrentTurn(TArray<FName>& OutArtsList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetTaskTargetList(TArray<AActor*>& OutTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetStockGauge(int32& OutStockCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetStatusPoint(UG01StatusPointComponent*& ReStatusPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetStatusAbility(FG01AbilityCharaStatusEffect& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetStatus(FG01BattleCharacterStatusStruct& ReStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetSpellUnitList(TArray<FG01BattleCharacterSpellUnitStruct>& ReUnitList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetSpellLevel(EG01PartyCharacterSpellType InType, int32& ReLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetSpellLearnSlot(bool& ReHasSlot, int32& ReSlotCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetSpellArts(TArray<FName>& ReArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetSkillUnitList(TArray<FG01BattleCharacterSkillUnitStruct>& ReUnitList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetSkillLevel(EG01PartyCharacterSkillType InType, int32& ReLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetSkillLearnSlot(bool& ReHasSlot, int32& ReSlotCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetSkillArts(FName WeaponId, TArray<FName>& ReArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetShieldResistance(FG01CharaResistance& OutResistance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetShieldPhysicsDefense(int32& OutDefense);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetShieldMagicDefense(int32& OutDefense);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* Inf_G01BattleCharacter_GetRightHandItemSkeletalMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UG01ItemAttachComponent* Inf_G01BattleCharacter_GetRightHandItemAttachComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetNamePoint(UG01NamePointComponent*& RePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetMyHandle(UG01BattleCharacterHandle*& OutHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetMapAspectRecovery(TArray<EG01MapAspectType>& ReMapAspectRecovery);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetLpDamageLock(FName InFlagName, bool& OutIsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetLP(int32& ReLP, int32& ReMaxLP);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetLinkOrder(int32& ReLinkOrder, int32& ReLinkNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetLinkCommandList(TArray<FG01BattleLinkCommandStruct>& ReLinkCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetLinkableArtsList(TArray<FName>& OutArtsList, TArray<FName>& OutWeaponList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* Inf_G01BattleCharacter_GetLeftHandItemSkeletalMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UG01ItemAttachComponent* Inf_G01BattleCharacter_GetLeftHandItemAttachComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetLearnLevel(bool& ReCanLearn, int32& ReLearnLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetLearnedArts(FG01BattleCharacterArtsStruct& ReArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetItemArts(TArray<FName>& ReArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetIsMissMap(TMap<int32, bool>& OutIsMissMap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetIsDefenseByShield(bool& ReIsDefenseByShield);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetInspirationID(int32& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetInitStatus(FG01BattleCharacterStatusStruct& ReStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetInitHP(int32& ReHP);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetInitBP(int32& ReBP);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetHP(int32& ReHP, int32& ReMaxHP);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetHasPlusEnhanceList(TArray<FG01AddedPotentEnhanceStruct>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetHasMinusEnhanceList(TArray<FG01AddedPotentEnhanceStruct>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetHasExtarnalList(TArray<AG01AddedPotentExtarnalObjectBase*>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetHasAllEnhanceList(TArray<FG01AddedPotentEnhanceStruct>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetHasAilmentList(TArray<FG01AddedPotentAilmentStruct>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetFathomLearnSlot(bool& ReHasSlot, int32& ReSlotCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetFathomLearnReaction(bool& OutLearnReaction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetFathomArts(TArray<FName>& ReArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetFaintLock(FName InFlagName, bool& ReIsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetEquipWeapon(FName& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetEnableReaction(FName InKey, bool& OutFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetDisposedTurn(int32& OutTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetCursorPoint(AG01BattleCursorPoint*& ReCursorPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetCounterLearnWeapon(TArray<FName>& OutWeaponList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetConstantStatus(FG01BattleCharacterStatusStruct& OutStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetCharacterLevel(int32& ReLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetCharacterID(FG01CharacterID& ReCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetBP(int32& ReBP, int32& ReMaxBP);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetBattleVoiceDataID(FName& OutDataId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetBattleSize(EG01BattleCharacterSize& OutSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetBattleCharacterID(FName& OutBattleCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetAttackPoint(AG01AttackPoint*& ReAttackPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetArtsTargetSlotActor(AActor*& ReActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetArtsTargetOriginActor(AActor*& ReActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetArtsSourceSlotActor(AActor*& ReActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetArtsSourceOriginActor(AActor*& ReActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetArtsLearnAction(bool& OutLearnAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetArts(FG01BattleCharacterArtsStruct& ReArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetAllWeapon(TArray<FName>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetAffinityInfo(FG01BattleCharacterAffinityStruct& ReInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetAffinity(EG01BattleArtsAttribute InAttr, EG01AttackAffinityType& ReAffinity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetAddedAbilityEffect(FG01AbilityCharaStatusEffect& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetActionCountNextTurn(int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_GetActionCount(int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_FindBattleVoiceDataID(FName InTag, bool& OutExist, FName& OutDataId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_FindArtsUsingWeapon(FName InArtsID, bool& OutFound, FName& OutWeaponId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleCharacter_FathomCheck(FName InArtsID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ExecutionTask(UG01BattleTask* InTask, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_DEL_IsLoadedPlaybackResource(bool& OutIsLoaded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_DEL_GetLinkSeqCamera(AActor*& OutCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_DBG_GetDebugDisplayName(FString& OutName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_CureFaintAtResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_CreateArtsSeqPlayArg(FName InArtsID, FG01SeqPlayArg_BattleArts& OutPlayArg);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ContinueNextLinkAction(bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ClearUsingArts();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ClearPoolStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ClearLpDamageLock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ClearFaintLock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_CheckForceHitArts(bool& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleCharacter_CheckEnableReaction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_CheckCollisionGenerateOerlapEvents(bool& OutIs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ChangeWeapon(FName InWeaponId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_CanArtsLearnStatusAtResult(bool& OutCanLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_CanArtsLearnStatus(bool& ReCanLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_CalcWeaponAttack(FName InWeaponId, int32& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_CalcActionCountSpeedNextTurn(int32 InActionCountID, int32& OutSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_CalcActionCountSpeed(int32 InActionCountID, int32& OutSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ApplyFathom(const FG01AttackInfo& InAttackInfo, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ApplyDefense(const FG01AttackInfo& InAttackInfo, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ApplyAvoid(const FG01AttackInfo& InAttackInfo, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_AddNewSpellArts(FName InArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_AddNewSkillArts(FName InArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_AddNewFathomArts(FName InArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacter_ActionCancelByAilment();
    
};

