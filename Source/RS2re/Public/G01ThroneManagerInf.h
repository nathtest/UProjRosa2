#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "QuestSectionNameView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestSectionNameView -FallbackName=QuestSectionNameView
#include "EG01ThroneCategoryEnum.h"
#include "G01ThroneMenuUiControllerDataStructID.h"
#include "G01ThroneManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ThroneManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ThroneManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThtoneManager_GetInstitutionMaxLevel(EG01ThroneCategoryEnum InCategory, int32& MaxLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThtoneManager_GetEmperorTechniqueLvCombinedValue(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, int32& EmperorTechniqueLvCombinedValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThtoneManager_GetEmperorSpellLvCombinedValue(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, int32& EmperorSpellLvCombinedValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThtoneManager_GetCurrentInstitutionLevel(EG01ThroneCategoryEnum InCategory, int32& CurrentLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_SetThroneEndFlag(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, bool InEndFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_SetThroneDevelopingFlag(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, bool InDevelopingFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_SetThroneDevelopableFlag(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, bool InDevelopableFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_SetThroneComplateFlag(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, bool InComplateFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_SetEventTargetInstitution(const FG01ThroneMenuUiControllerDataStructID& InID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetThroneEndFlag(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, bool& OutEndFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetThroneDevelopingFlag(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, bool& OutDevelopingFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetThroneDevelopableFlag(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, bool& OutDevelopableFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetThroneComplateFlag(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, bool& OutComplateFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetSectionNames(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, FQuestSectionNameView& SectionNameView);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetPrice(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, int32& Price);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetNationalPower(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, int32& NationalPower);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetInstitutionID(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, FName& ComplateInstitutionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetFlagName(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, FName& FlagName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetEventTargetInstitution(FG01ThroneMenuUiControllerDataStructID& OutId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetEmperorDevelopingBattleNum(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, int32& BattleNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetDevelopingBattleNum(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, int32& BattleNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetClearAreaNum(FG01ThroneMenuUiControllerDataStructID ThroneMenuInstitutionID, int32& ClearArea);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_GetBlackSmithLevel(int32& Level);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneManager_CheckCondition();
    
};

