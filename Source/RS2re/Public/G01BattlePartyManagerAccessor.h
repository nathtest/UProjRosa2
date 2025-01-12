#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EBattlePartyCommandListType.h"
#include "G01BattleCharacterSkillUnitStruct.h"
#include "G01BattleCharacterSpellUnitStruct.h"
#include "G01BattlePartyFormationTableRow.h"
#include "G01BattlePartyResultPoseStartRange.h"
#include "G01BattlePartyTableRow.h"
#include "G01BattlePresetTableRow.h"
#include "G01PartyFormationData.h"
#include "G01BattlePartyManagerAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattlePartyManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01BattlePartyManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void UseAilmentCureAnimAtCommand(bool& OutUseAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetSortingType(EBattlePartyCommandListType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayHiddenArts(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void GetTargetWeight(TArray<int32>& ReWeightList);
    
    UFUNCTION(BlueprintCallable)
    EBattlePartyCommandListType GetSortingType();
    
    UFUNCTION(BlueprintCallable)
    void GetResultPoseStartRange(FName InKey, FG01BattlePartyResultPoseStartRange& OutRange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPetrifyAnimStopDelay(float& OutDelay);
    
    UFUNCTION(BlueprintCallable)
    void GetLearnSlotOverCapacity(int32& OutSkill, int32& OutSpell, int32& OutFathom);
    
    UFUNCTION(BlueprintCallable)
    void GetFormationData(FName InFormationId, int32 InTargetRank, TArray<FG01BattlePartyFormationTableRow>& ReFormationList);
    
    UFUNCTION(BlueprintCallable)
    bool GetDisplayHiddenArts();
    
    UFUNCTION(BlueprintCallable)
    void FindBattleParty(FName InRowName, bool& OutFound, FG01BattlePartyTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void FindBattleCharacterId(FName InCharacterId, bool& OutSuccess, FName& OutBattleCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void DecideFormation(const FG01BattlePresetTableRow& InBattlePreset, FName& OutMainId, FName& OutSubId, FName& OutBreakId, FG01PartyFormationData& OutInitFormation);
    
    UFUNCTION(BlueprintCallable)
    void CreateSpellUnitList(AActor* InActor, const TArray<FName>& InWeaponList, TArray<FG01BattleCharacterSpellUnitStruct>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void CreateSkillUnitList(AActor* InActor, const TArray<FName>& InWeaponList, TArray<FG01BattleCharacterSkillUnitStruct>& OutList);
    
};

