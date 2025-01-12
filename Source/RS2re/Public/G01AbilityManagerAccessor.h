#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01AbilityCharaStatusEffect.h"
#include "G01AbilityCondition.h"
#include "G01AbilityLearnStat.h"
#include "G01AbilityPerCharacter.h"
#include "G01AbilityTableRow.h"
#include "G01CharaClassID.h"
#include "G01CharacterID.h"
#include "G01AbilityManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01AbilityManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01AbilityManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopSimulateAbility(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void StartSimulateAbility(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenLevel(int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetAddedAbilityEffect(const FG01CharacterID& InCharacterId, const FG01AbilityCharaStatusEffect& In);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityMastery(FName InAbilityId);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityLearn(FName InAbilityId);
    
    UFUNCTION(BlueprintCallable)
    void NotifyBattleStart();
    
    UFUNCTION(BlueprintCallable)
    void NotifyBattleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsInBattle(bool& OutIsInBattle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOpenLevel(int32& OutLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMaxOpenLevel(int32& OutLevel);
    
    UFUNCTION(BlueprintCallable)
    void GetClassTagList(TArray<FName>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void GetClassTagAbilityIdList(FName InClassTag, TArray<FName>& OutIdList);
    
    UFUNCTION(BlueprintCallable)
    void GetCharaStatusEffect(const FG01CharacterID& InCharacterId, FG01AbilityCharaStatusEffect& OutEffect);
    
    UFUNCTION(BlueprintCallable)
    void GetCharaEquipInfo(const FG01CharacterID& InCharcterId, FG01AbilityPerCharacter& OutEquipInfo);
    
    UFUNCTION(BlueprintCallable)
    void GetCharaAbilityIdList(const FG01CharacterID& InCharacterId, TArray<FName>& OutIdList);
    
    UFUNCTION(BlueprintCallable)
    void GetAllAbilityIdList(TArray<FName>& OutIdList);
    
    UFUNCTION(BlueprintCallable)
    void GetAddedAbilityEffect(const FG01CharacterID& InCharacterId, FG01AbilityCharaStatusEffect& Out);
    
    UFUNCTION(BlueprintCallable)
    void GetAchievemtntForInheritance(int32& OutCurrent, int32& OutMax);
    
    UFUNCTION(BlueprintCallable)
    void GetAchievementForGet(int32& OutCurrent, int32& OutMax);
    
    UFUNCTION(BlueprintCallable)
    void GetAbilityMasteryProgress(FName InAbilityId, FG01AbilityCondition& OutCondition, int32& OutProgress);
    
    UFUNCTION(BlueprintCallable)
    void GetAbilityLearnProgress(FName InAbilityId, FG01AbilityCondition& OutCondition, int32& OutProgress);
    
    UFUNCTION(BlueprintCallable)
    void ForceAbilityMastery(FName InAbilityId, bool InIncludeLearn);
    
    UFUNCTION(BlueprintCallable)
    void FindClassID(FName InClassTag, bool& OutIsExist, TArray<FG01CharaClassID>& OutClassIDs);
    
    UFUNCTION(BlueprintCallable)
    void FindAbilityDataByOpenLevel(int32 InOpenLevel, bool& OutIsExist, TMap<FName, FG01AbilityTableRow>& OutAbilities);
    
    UFUNCTION(BlueprintCallable)
    void FindAbilityData(FName InAbilityId, bool& OutIsExist, FG01AbilityTableRow& OutAbility);
    
    UFUNCTION(BlueprintCallable)
    void EndAbilitySystem();
    
    UFUNCTION(BlueprintCallable)
    void ConvertItemIdToAbilityID(FName InItemID, FName& OutAbilityId, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void ConvertClassIdToTag(const FG01CharaClassID& InClassId, FName& OutClassTag);
    
    UFUNCTION(BlueprintCallable)
    void ClearSimulateAbility();
    
    UFUNCTION(BlueprintCallable)
    bool CheckActiveAbilitySystem();
    
    UFUNCTION(BlueprintCallable)
    void BeginAbilitySystem();
    
    UFUNCTION(BlueprintCallable)
    void ApplicateLearnStat(const FG01AbilityLearnStat& InStat);
    
    UFUNCTION(BlueprintCallable)
    void AbilityIsOpen(FName InAbilityId, bool& OutIsOpen);
    
    UFUNCTION(BlueprintCallable)
    void AbilityIsMastery(FName InAbilityId, bool& OutIsMastery);
    
    UFUNCTION(BlueprintCallable)
    void AbilityIsLearn(FName InAbilityId, bool& OutIsLearn);
    
    UFUNCTION(BlueprintCallable)
    void AbilityIsActivate(FName InAbilityId, bool& OutIsActivate);
    
    UFUNCTION(BlueprintCallable)
    void AbilityCanMastery(FName InAbilityId, bool& OutCanMastery);
    
    UFUNCTION(BlueprintCallable)
    void AbilityCanLearn(FName InAbilityId, bool& OutCanLearn);
    
};

