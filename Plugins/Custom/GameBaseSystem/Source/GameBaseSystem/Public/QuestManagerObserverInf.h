#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "QuestReceiveParamQuestBegin.h"
#include "QuestReceiveParamQuestFinish.h"
#include "QuestReceiveParamQuestOrdered.h"
#include "QuestReceiveParamQuestSectionChanged.h"
#include "QuestReceiveParamQuestSectionCompleted.h"
#include "QuestManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UQuestManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IQuestManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_QuestManager_OnPreUnregisterTarget(FName InQuestID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_QuestManager_OnPreSetupQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_QuestManager_OnPreRestoreQuests();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_QuestManager_OnPreRegisterTarget(FName InQuestID, int32 InInsertIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_QuestManager_OnPostUnregisterTarget(FName InQuestID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_QuestManager_OnPostSetupQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_QuestManager_OnPostRestoreQuests();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_QuestManager_OnPostRegisterTarget(FName InQuestID, int32 InInsertIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManagerObserverInf_OnSectionCompleted(const FQuestReceiveParamQuestSectionCompleted& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManagerObserverInf_OnSectionChanged(const FQuestReceiveParamQuestSectionChanged& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManagerObserverInf_OnQuestOrdered(const FQuestReceiveParamQuestOrdered& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManagerObserverInf_OnQuestEnd(const FQuestReceiveParamQuestFinish& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManagerObserverInf_OnQuestBegin(const FQuestReceiveParamQuestBegin& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManagerObserverInf_OnPreSectionChanged(const FQuestReceiveParamQuestSectionChanged& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManagerObserverInf_OnPostSectionChanged(const FQuestReceiveParamQuestSectionChanged& InParam);
    
};

