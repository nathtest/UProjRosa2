#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EQuestSectionEvalOp.h"
#include "QuestBasisParameter.h"
#include "QuestSectionNameView.h"
#include "QuestSkipOptions.h"
#include "QuestManagerInterface.generated.h"

class AQuestObjectBase;
class AQuestObjectCore;
class UQuestCoreData;

UINTERFACE(Blueprintable, MinimalAPI)
class UQuestManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IQuestManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManager_UnregisterTargetQuestByClass(const TSoftClassPtr<AQuestObjectCore>& InQuestClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManager_UnregisterTargetQuest(FName InQuestID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManager_SetVisibleProgressUI(bool InIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManager_SetSectionSkipOptions(const FQuestSkipOptions& InOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManager_SetEnablePrintStatus(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManager_RegisterTargetQuestByClass(const TSoftClassPtr<AQuestObjectCore>& InQuestClass, int32 InInsertIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManager_RegisterTargetQuest(FName InQuestID, int32 InInsertIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_QuestManager_QuestOrderWithRebuildByName(const TSoftClassPtr<AQuestObjectBase>& InQuestClass, const FQuestSectionNameView& InBeginSection, int32 InQuestPrerequisiteIndex, int32 InFlagPrerequisiteIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_QuestManager_QuestOrderWithRebuildByIndex(const TSoftClassPtr<AQuestObjectBase>& InQuestClass, int32 InBeginSectionIndex, int32 InQuestPrerequisiteIndex, int32 InFlagPrerequisiteIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_QuestManager_QuestOrderWithRebuildByFName(const TSoftClassPtr<AQuestObjectBase>& InQuestClass, FName InBeginSection, int32 InQuestPrerequisiteIndex, int32 InFlagPrerequisiteIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AQuestObjectBase* Inf_QuestManager_QuestOrderByID(FName InQuestID, FName InCustomQuestID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AQuestObjectBase* Inf_QuestManager_QuestOrderByClass(const TSoftClassPtr<AQuestObjectBase>& InQuestClass, FName InCustomQuestID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_QuestManager_IsTargetQuestByClass(const TSoftClassPtr<AQuestObjectCore>& InQuestClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_QuestManager_IsTargetQuest(FName InQuestID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_QuestManager_IsQuestRebuilding();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_QuestManager_IsDuringRestoration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_QuestManager_HasTargetQuestAny();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManager_GetLastTargetQuestCoreData(UQuestCoreData*& OutCoreData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManager_FindQuestObjectByQuestID(FName InOriginalID, FName InCustomID, AQuestObjectCore*& OutQuest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManager_FindQuestObjectByFullID(FName InQuestID, AQuestObjectCore*& OutQuest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UQuestCoreData* Inf_QuestManager_FindQuestCoreDataByID(FName InQuestID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UQuestCoreData* Inf_QuestManager_FindQuestCoreDataByClass(const TSoftClassPtr<AQuestObjectBase>& InQuestClass, FName InCustomQuestID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManager_FindQuestBasisParameter(FName InQuestID, bool& OutIsFound, FQuestBasisParameter& OutBasisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_QuestManager_FindAllQuestObjectByOriginalID(FName InOriginalID, TArray<AQuestObjectCore*>& OutQuests);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_QuestManager_EvaluateQuestSectionRange(const TSoftClassPtr<AQuestObjectCore>& InQuestClass, FName InCustomQuestID, const FName& InSectionRangeBeginName, const FName& InSectionRangeEndName, EQuestSectionEvalOp InBeginEvalOp, EQuestSectionEvalOp InEndEvalOp);
    
};

