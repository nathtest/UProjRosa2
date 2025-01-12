#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "QuestSectionNameView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestSectionNameView -FallbackName=QuestSectionNameView
#include "EG01BlackSmithMenuStateEnum.h"
#include "G01BlackSmithMenuIDStruct.h"
#include "G01BlackSmithMenuUiControllerInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BlackSmithMenuUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BlackSmithMenuUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_SetLockFlag(FName ItemId, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_SetCompleteFlag(FName ItemId, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_Request(AActor* Actor, bool IsFirst);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_RepetitionFlag(FG01BlackSmithMenuIDStruct BlackSmithMenuID, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_Open(AActor* Actor, bool IsFirst);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetState(FG01BlackSmithMenuIDStruct InItemID, EG01BlackSmithMenuStateEnum& OutState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetSpecialConditionFlag(FG01BlackSmithMenuIDStruct BlackSmithMenuID, FName& OutFlagID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetSectionNames(FG01BlackSmithMenuIDStruct BlackSmithMenuID, FQuestSectionNameView& SectionNameView);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetPeriodJump(FG01BlackSmithMenuIDStruct BlackSmithMenuID, bool& PeriodJump);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetLockFlag(FName ItemId, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetEquipmentDevelopedItemIDConditions(FG01BlackSmithMenuIDStruct BlackSmithMenuID, FName& DevelopmentItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetDistributionDevelopItem(FName inItemCategory, FName& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetDevelopingFlag(FName ItemId, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetDevelopableFlag(FName ItemId, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01BlackSmithMenuUiController_GetDebugBlackSmithLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetCompleteNum(int32& OutCompleteNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetComplateFlag(FName ItemId, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetBlackSmithLevelConditions(FG01BlackSmithMenuIDStruct BlackSmithMenuID, int32& BlackSmithLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetBattleNumConfitions(FG01BlackSmithMenuIDStruct BlackSmithMenuID, int32& BattleNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_GetAreaClearNumConditions(FG01BlackSmithMenuIDStruct BlackSmithMenuID, int32& AreaClearNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_FinishedItem(FName ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_DevelopItem(FName ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BlackSmithMenuUiController_Back(bool IsChange);
    
};

