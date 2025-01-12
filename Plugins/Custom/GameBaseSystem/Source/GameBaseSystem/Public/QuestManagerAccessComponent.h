#pragma once
#include "CoreMinimal.h"
#include "EQuestEndCheckType.h"
#include "EQuestSectionEvalOp.h"
#include "ManagerAccessor.h"
#include "QuestCategory.h"
#include "QuestCoreDataArray.h"
#include "QuestSectionNameView.h"
#include "QuestSkipOptions.h"
#include "QuestManagerAccessComponent.generated.h"

class AQuestManager;
class AQuestObjectBase;
class AQuestObjectCore;
class UDataTable;
class UQuestCoreData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UQuestManagerAccessComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
    UQuestManagerAccessComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void QuestOrderWithRebuildByQuestID(bool& OutIsSuccess, FName InQuestID, FQuestSectionNameView InTargetSectionName, const FQuestSkipOptions& InOptions, int32 InQuestPrerequisiteIndex, int32 InFlagPrerequisiteIndex);
    
    UFUNCTION(BlueprintCallable)
    void QuestOrderWithRebuildByFName(bool& OutIsSuccess, TSoftClassPtr<AQuestObjectBase> InQuestClass, FName InTargetSectionName, const FQuestSkipOptions& InOptions, int32 InQuestPrerequisiteIndex, int32 InFlagPrerequisiteIndex);
    
    UFUNCTION(BlueprintCallable)
    void QuestOrderWithRebuild(bool& OutIsSuccess, TSoftClassPtr<AQuestObjectBase> InQuestClass, FQuestSectionNameView InTargetSectionName, const FQuestSkipOptions& InOptions, int32 InQuestPrerequisiteIndex, int32 InFlagPrerequisiteIndex);
    
    UFUNCTION(BlueprintCallable)
    AQuestObjectBase* QuestOrderByQuestID(FName InOriginalQuestID, FName InCustomQuestID);
    
    UFUNCTION(BlueprintCallable)
    AQuestObjectBase* QuestOrderByFullQuestID(FName InQuestID);
    
    UFUNCTION(BlueprintCallable)
    AQuestObjectBase* QuestOrderByClass(TSoftClassPtr<AQuestObjectBase> InOrderQuestClass, FName InCustomQuestID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsTargetQuestByClass(TSoftClassPtr<AQuestObjectCore> InQuestClass, bool& ReIsTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IsTargetQuest(FName InQuestID, bool& ReIsTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestRebuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringRestoration() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetQuestSectionName(TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID);
    
    UFUNCTION(BlueprintCallable)
    AQuestManager* GetQuestManager();
    
    UFUNCTION(BlueprintCallable)
    void GetQuestListByCategory(int32 InOrderState, FQuestCategory InCategory, TArray<AQuestObjectBase*>& OutQuestList);
    
    UFUNCTION(BlueprintCallable)
    void GetQuestListAll(int32 InOrderState, TArray<AQuestObjectBase*>& OutQuestList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetQuestAllParamTable() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AQuestObjectBase*> GetOrderedQuestList();
    
    UFUNCTION(BlueprintCallable)
    void GetLastTargetQuestCoreData(UQuestCoreData*& OutCoreData);
    
    UFUNCTION(BlueprintCallable)
    void FindQuestObjectByQuestID(FName InOriginalID, FName InCustomID, AQuestObjectCore*& OutQuest);
    
    UFUNCTION(BlueprintCallable)
    void FindQuestObjectByFullID(FName InQuestID, AQuestObjectCore*& OutQuest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UQuestCoreData* FindQuestCoreDataByClass(TSoftClassPtr<AQuestObjectBase> InQuestClass, FName InCustomQuestID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UQuestCoreData* FindQuestCoreData(FName InQuestID) const;
    
    UFUNCTION(BlueprintCallable)
    void FindAllQuestObjectByOriginalID(FName InOriginalID, TArray<AQuestObjectCore*>& OutQuests);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TMap<FQuestCategory, FQuestCoreDataArray> FindAllQuestCoreDataOfOrdered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TMap<FQuestCategory, FQuestCoreDataArray> FindAllQuestCoreDataOfFailed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TMap<FQuestCategory, FQuestCoreDataArray> FindAllQuestCoreDataOfClear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindAllQuestCoreDataHasAnyOrderState(int32 InOrderState, FQuestCoreDataArray& ReQuestCoreDataArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TMap<FQuestCategory, FQuestCoreDataArray> FindAllQuestCoreData(int32 InOrderState) const;
    
    UFUNCTION(BlueprintCallable)
    bool EvaluateQuestSectionRange(TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID, FQuestSectionNameView InBeginSectionName, EQuestSectionEvalOp InBeginEvalOp, FQuestSectionNameView InEndSectionName, EQuestSectionEvalOp InEndEvalOp);
    
    UFUNCTION(BlueprintCallable)
    bool EvaluateQuestSection(TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID, FQuestSectionNameView InQuestSectionName, EQuestSectionEvalOp InEvalOp);
    
    UFUNCTION(BlueprintCallable)
    bool CheckQuestEndState(TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID, TEnumAsByte<EQuestEndCheckType::Type> InCheckType);
    
};

