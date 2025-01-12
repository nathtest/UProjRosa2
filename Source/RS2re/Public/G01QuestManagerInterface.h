#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "QuestSectionNameView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestSectionNameView -FallbackName=QuestSectionNameView
#include "EG01QuestChronicleState.h"
#include "EG01QuestNotifyCountType.h"
#include "G01DestinationLocationInfo.h"
#include "G01QuestDataStruct.h"
#include "G01QuestDestCheckResult.h"
#include "G01QuestTargetDestData.h"
#include "G01QuestManagerInterface.generated.h"

class AQuestObjectBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01QuestManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01QuestManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01QuestManager_IsEnableAllQuestDestination();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01QuestManager_GetTargetQuestDestination(TArray<FG01QuestTargetDestData>& OutQuestDestList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01QuestManager_GetNotifyCount(EG01QuestNotifyCountType InType, int32& OutNotifyCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01QuestManager_ForceSectionChange(const TSoftClassPtr<AQuestObjectBase>& InQuestClass, const FQuestSectionNameView& InSection, int32 InQuestPrerequisiteIndex, int32 InFlagPrerequisiteIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01QuestManager_FindBrutusQuestSettingData(const FName& InQuestID, bool& OutIsValid, FG01QuestDataStruct& OutQuestData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01QuestManager_DeactivateChronicleData(const TSoftClassPtr<AQuestObjectBase>& InQuestClass, int32 InChronicleIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01QuestManager_CheckQuestDestinationByRegionID(FName InRegionID, TArray<FG01QuestDestCheckResult>& ReResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01QuestManager_CheckQuestDestinationByMapID(FName InMapID, TArray<FG01QuestDestCheckResult>& ReResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01QuestManager_CheckQuestDestination(const FG01DestinationLocationInfo& InCheckLocation, TArray<FG01QuestDestCheckResult>& ReResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01QuestManager_ActivateChronicleData(const TSoftClassPtr<AQuestObjectBase>& InQuestClass, int32 InChronicleIndex, EG01QuestChronicleState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01QuestManager_ActivateAllChronicle();
    
};

