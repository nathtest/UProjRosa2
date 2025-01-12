#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "QuestSectionNameView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestSectionNameView -FallbackName=QuestSectionNameView
#include "EG01ThroneCategoryEnum.h"
#include "G01ThroneMenuUiControllerDataStructID.h"
#include "G01ThroneMenuManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ThroneMenuManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01ThroneMenuManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetThroneEndFlag(FG01ThroneMenuUiControllerDataStructID InID, bool InEndFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetThroneDevelopingFlag(FG01ThroneMenuUiControllerDataStructID InID, bool InDevelopingFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetThroneDevelopableFlag(FG01ThroneMenuUiControllerDataStructID InID, bool InDevelopableFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetThroneComplateFlag(FG01ThroneMenuUiControllerDataStructID InID, bool InComplateFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetEventTargetInstitution(FG01ThroneMenuUiControllerDataStructID InID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetThroneEndFlag(FG01ThroneMenuUiControllerDataStructID InID, bool& OutEndFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetThroneDevelopingFlag(FG01ThroneMenuUiControllerDataStructID InID, bool& OutDevelopingFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetThroneDevelopableFlag(FG01ThroneMenuUiControllerDataStructID InID, bool& OutDevelopableFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetThroneComplateFlag(FG01ThroneMenuUiControllerDataStructID InID, bool& OutComplateFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSectionName(FG01ThroneMenuUiControllerDataStructID InID, FQuestSectionNameView& SectionNameView);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNationPower(FG01ThroneMenuUiControllerDataStructID InID, int32& OutNationalPower);
    
    UFUNCTION(BlueprintCallable)
    void GetInstitutionPrice(FG01ThroneMenuUiControllerDataStructID InID, int32& OutPrice);
    
    UFUNCTION(BlueprintCallable)
    void GetInstitutionMaxLevel(EG01ThroneCategoryEnum InCategory, int32& OutMaxLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFlagName(FG01ThroneMenuUiControllerDataStructID InID, FName& OutFlagName);
    
    UFUNCTION(BlueprintCallable)
    void GetEventTargetInstitution(FG01ThroneMenuUiControllerDataStructID& OutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEmperorTechniqueLvCombinedValue(FG01ThroneMenuUiControllerDataStructID InID, int32& OutEmperorSkillLvCombinedValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEmperorSpellLvCombinedValue(FG01ThroneMenuUiControllerDataStructID InID, int32& OutEmperorSpellLvCombinedValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEmperorBattleNum(FG01ThroneMenuUiControllerDataStructID InID, int32& OutEmperorBattleNum);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentInstitutionLevel(EG01ThroneCategoryEnum InCategory, int32& OutCurrentLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetComplateInstitutionID(FG01ThroneMenuUiControllerDataStructID InID, FName& OutComplateInstitutionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetClearAreaNum(FG01ThroneMenuUiControllerDataStructID InID, int32& OutClearAreaNum);
    
    UFUNCTION(BlueprintCallable)
    void GetBlackSmithLevel(int32& Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattleNum(FG01ThroneMenuUiControllerDataStructID InID, int32& OutBattleNum);
    
};

