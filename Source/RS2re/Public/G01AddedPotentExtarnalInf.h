#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01AttackAffinityType.h"
#include "EG01BattleArtsAttribute.h"
#include "EG01MapAspectType.h"
#include "EG01ReasonToIgnoreOfDamageEnum.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01BattleArtsAttrFlags.h"
#include "G01BattleArtsTableRow.h"
#include "G01BattleCharacterSkillUnitStruct.h"
#include "G01BattleCharacterSpellUnitStruct.h"
#include "G01BattleCharacteristic.h"
#include "G01BattleShieldItem.h"
#include "G01AddedPotentExtarnalInf.generated.h"

class AActor;
class AG01SequenceControllerBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01AddedPotentExtarnalInf : public UInterface {
    GENERATED_BODY()
};

class IG01AddedPotentExtarnalInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FG01BattleCharacterSpellUnitStruct> Inf_G01AddedPotentExtarnal_SortSpellUnitList(const TArray<FG01BattleCharacterSpellUnitStruct>& InList, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FG01BattleCharacterSkillUnitStruct> Inf_G01AddedPotentExtarnal_SortSkillUnitList(const TArray<FG01BattleCharacterSkillUnitStruct>& InList, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_ReplaceCommand(const int32& InUniqueID, const int32& InActionCountID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_RemoveCounterOrParry(const FName& InLearnArtsId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_PrepareCounterOrParry(AActor* InSource, AActor* InTarget, const FName& InHitArtsID, bool IsLearn, FName InLearnArtsId, bool& Dummy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_IsHaveExtraWeapon(bool& IsHave);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_InvalidDefeated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_ImmForceFinishParryAction(bool& Dummy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetRecoverMapAspectType(TArray<EG01MapAspectType>& OutMapAspect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01AddedPotentExtarnal_GetPriorityByCounterOrParry();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_GetMapAspectIsFixed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetExtraWeapon(TArray<FName>& OutExtraWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCounterOrParrySuccessPercent(AActor* InSource, AActor* InTarget, const FName& InHitArtsID, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCounterOrParryStatus(bool& IsCounterMode, bool& IsParryMode, bool& isPrepared, bool& IsLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCounterOrParryLearnArtsId(FName& OutArtsID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCounterOrParryArtsID(FName& OutArtsID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_G01AddedPotentExtarnal_GetCorrectionSourceRecover(const FG01BattleArtsTableRow& InArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_G01AddedPotentExtarnal_GetCorrectionSourceDamage(const FG01BattleArtsTableRow& InArts, EG01AttackAffinityType InAffinityType, bool InNotifyAbility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_G01AddedPotentExtarnal_GetCorrectionSourceAttr(EG01BattleArtsAttribute InAttr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_GetCorrectionSourceAffinity(EG01AttackAffinityType InAffinityType, EG01AttackAffinityType& OutAffinity, EG01ReasonToIgnoreOfDamageEnum& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCorrectionShieldActivate(const FG01BattleShieldItem& InShield, int32& OutValue, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCorrectionNextTurnSpeed(int32& OutValue, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_G01AddedPotentExtarnal_GetCorrectionLinkDamage(bool& OutPartyEffect, bool& OutMySelf);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_GetCorrectionLinkCost(bool& OutPartyEffect, float& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_GetCorrectionExp(int32 InBase, int32& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCorrectionDropItemLotPercent(int32 InSlotNo, int32& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCorrectionDropItemCount(int32 InSlotNo, int32& OutValue, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCorrectionDebuffTurn(const FG01AddedPotentBaseKeyStruct& InPotent, int32& OutValue, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCorrectionCurrentTurnSpeed(int32& OutValue, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCorrectionBpCost(FName InArtsID, const FG01BattleArtsTableRow& InArts, float& OutRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_G01AddedPotentExtarnal_GetCorrectionAttr(EG01BattleArtsAttribute InAttr, EG01ReasonToIgnoreOfDamageEnum& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCorrectionArtsPower(int32& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCorrectionAilmentTurn(const FG01AddedPotentBaseKeyStruct& InPotent, int32& OutValue, int32& OutPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCorrectionAddedPotentForTarget(const FG01AddedPotentBaseKeyStruct& InPotent, bool& OutIsOverride, float& OutCorrect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCorrectionAddedPotent(const FG01AddedPotentBaseKeyStruct& InPotent, bool& OutIsOverride, float& OutCorrect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_GetCharacteristic(TArray<G01BattleCharacteristic>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01AddedPotentExtarnal_GetAbilityID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_ForceBreakSequenceByCounterOrParry(AG01SequenceControllerBase* InSequenceController, bool& Dummy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_ExecuteParryAction(bool& OutIsExecute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_CheckUsableSkillArts(FG01BattleCharacterSkillUnitStruct InUnit, bool& OutUsable, TArray<FName>& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_CheckUsableArts(FName InArtsID, bool& OutUsable, TArray<FName>& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckReplaceCommand(const int32& InUniqueID, const int32& InActionCountID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckReactCounterOrParry(FName InArtsID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckNotConsumeLp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckNotConsumeItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckInvolveTargetList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckInvalidExtarnal(const FG01AddedPotentBaseKeyStruct& InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckInvalidDebuff(const FG01AddedPotentBaseKeyStruct& InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckInvalidAttrDamage(FG01BattleArtsAttrFlags InType, EG01AttackAffinityType& OutAffinity, EG01ReasonToIgnoreOfDamageEnum& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckInvalidAilment(const FG01AddedPotentBaseKeyStruct& InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_CheckHpRecoverInvert(int32 InHpRecover, bool& OutIsInvert, int32& OutHpDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckForceInvalidDamage(EG01AttackAffinityType& OutAffinity, EG01ReasonToIgnoreOfDamageEnum& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_CheckForceHitArts(bool& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckForceCriticalArts(bool InNotifyAbility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckEndureDamage(int32& OutEndureHp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckDropItemRob();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckCounterOrParry();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckCanNotLink();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckCanNotLearn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotentExtarnal_CheckBlinkBuffDebuffIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AddedPotentExtarnal_CancelCounterOrParryAction(bool& OutCancel);
    
};

