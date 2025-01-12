#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01AbilityCharaStatusEffect.h"
#include "G01AbilityCondition.h"
#include "G01AbilityLearnStat.h"
#include "G01AbilityPerCharacter.h"
#include "G01AbilityTableRow.h"
#include "G01CharaClassID.h"
#include "G01CharacterID.h"
#include "G01AbilityManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01AbilityManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01AbilityManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_StopSimulateAbility(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_StartSimulateAbility(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_SetOpenLevel(int32 InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_SetAddedAbilityEffect(const FG01CharacterID& InCharacterId, const FG01AbilityCharaStatusEffect& In);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_SetAbilityMastery(FName InAbilityId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_SetAbilityLearn(FName InAbilityId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_NotifyBattleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_NotifyBattleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_IsInBattle(bool& OutIsInBattle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetOpenLevel(int32& OutLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetMaxOpenLevel(int32& OutLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetClassTagList(TArray<FName>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetClassTagAbilityIdList(FName InClassTag, TArray<FName>& OutIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetCharaStatusEffect(const FG01CharacterID& InCharacterId, FG01AbilityCharaStatusEffect& OutEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetCharaEquipInfo(const FG01CharacterID& InCharcterId, FG01AbilityPerCharacter& OutEquipInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetCharaAbilityIdList(const FG01CharacterID& InCharacterId, TArray<FName>& OutIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetAllAbilityIdList(TArray<FName>& OutIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetAddedAbilityEffect(const FG01CharacterID& InCharacterId, FG01AbilityCharaStatusEffect& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetAchievemtntForInheritance(int32& OutCurrent, int32& OutMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetAchievementForGet(int32& OutCurrent, int32& OutMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetAbilityMasteryProgress(FName InAbilityId, FG01AbilityCondition& OutCondition, int32& OutProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_GetAbilityLearnProgress(FName InAbilityId, FG01AbilityCondition& OutCondition, int32& OutProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_ForceAbilityMastery(FName InAbilityId, bool InIncludeLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_FindClassID(FName InClassTag, bool& OutIsExist, TArray<FG01CharaClassID>& OutClassIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_FindAbilityDataByOpenLevel(int32 InOpenLevel, bool& OutIsExist, TMap<FName, FG01AbilityTableRow>& OutAbilities);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_FindAbilityData(FName InAbilityId, bool& OutIsExist, FG01AbilityTableRow& OutAbility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_EndAbilitySystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_ConvertItemIdToAbilityID(FName InItemID, FName& OutAbilityId, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_ConvertClassIdToTag(const FG01CharaClassID& InClassId, FName& OutClassTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_ClearSimulateAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_CheckActiveAbilitySystem(bool& IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_BeginAbilitySystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_ApplicateLearnStat(const FG01AbilityLearnStat& InStat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_AbilityIsOpen(FName InAbilityId, bool& OutIsOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_AbilityIsMastery(FName InAbilityId, bool& OutIsMastery);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_AbilityIsLearn(FName InAbilityId, bool& OutIsLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_AbilityIsActivate(FName InAbilityId, bool& OutIsActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_AbilityCanMastery(FName InAbilityId, bool& OutCanMastery);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01AbilityManager_AbilityCanLearn(FName InAbilityId, bool& OutCanLearn);
    
};

