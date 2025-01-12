#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EBattlePartyCommandListType.h"
#include "G01BattleCharacterSkillUnitStruct.h"
#include "G01BattleCharacterSpellUnitStruct.h"
#include "G01BattlePartyFormationTableRow.h"
#include "G01BattlePartyResultPoseStartRange.h"
#include "G01BattlePartyTableRow.h"
#include "G01BattlePresetTableRow.h"
#include "G01PartyFormationData.h"
#include "G01BattlePartyManagerInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattlePartyManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattlePartyManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_UseAilmentCureAnimAtCommand(bool& OutUseAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_SetSortingType(EBattlePartyCommandListType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_SetDisplayHiddenArts(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_GetTargetWeight(TArray<int32>& ReWeightList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBattlePartyCommandListType Inf_G01BattlePartyManager_GetSortingType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_GetResultPoseStartRange(FName InKey, FG01BattlePartyResultPoseStartRange& OutRange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_GetPetrifyAnimStopDelay(float& OutDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_GetLearnSlotOverCapacity(int32& OutSkill, int32& OutSpell, int32& OutFathom);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_GetFormationData(FName InFormationId, int32 InTargetRank, TArray<FG01BattlePartyFormationTableRow>& ReFormationList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattlePartyManager_GetDisplayHiddenArts();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_FindBattleParty(FName InRowName, bool& OutFound, FG01BattlePartyTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_FindBattleCharacterId(FName InCharacterId, bool& OutSuccess, FName& OutBattleCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_DecideFormation(const FG01BattlePresetTableRow& InBattlePreset, FName& OutMainId, FName& OutSubId, FName& OutBreakId, FG01PartyFormationData& OutInitFormation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_CreateSpellUnitList(AActor* InActor, const TArray<FName>& InWeaponList, TArray<FG01BattleCharacterSpellUnitStruct>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePartyManager_CreateSkillUnitList(AActor* InActor, const TArray<FName>& InWeaponList, TArray<FG01BattleCharacterSkillUnitStruct>& OutList);
    
};

