#pragma once
#include "CoreMinimal.h"
#include "QuestManagerAccessComponent.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestManagerAccessComponent -FallbackName=QuestManagerAccessComponent
#include "QuestSectionNameView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestSectionNameView -FallbackName=QuestSectionNameView
#include "EG01QuestChronicleState.h"
#include "EG01QuestNotifyCountType.h"
#include "G01DestinationLocationInfo.h"
#include "G01QuestDataStruct.h"
#include "G01QuestDestCheckResult.h"
#include "G01QuestTargetDestData.h"
#include "G01QuestManagerAccessor.generated.h"

class AG01QuestObjectBase;
class AQuestObjectBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01QuestManagerAccessor : public UQuestManagerAccessComponent {
    GENERATED_BODY()
public:
    UG01QuestManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableAllQuestDestination() const;
    
    UFUNCTION(BlueprintCallable)
    void GetTargetQuestDestination(TArray<FG01QuestTargetDestData>& OutQuestDestList);
    
    UFUNCTION(BlueprintCallable)
    void GetNotifyCount(EG01QuestNotifyCountType InType, int32& OutNotifyCount);
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01QuestObjectBase*> G01GetOrderedQuestList();
    
    UFUNCTION(BlueprintCallable)
    void ForceSectionChange(TSoftClassPtr<AQuestObjectBase> InQuestClass, FQuestSectionNameView InSection, int32 InQuestPrerequisiteIndex, int32 InFlagPrerequisiteIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindQuestData(FName InQuestID, bool& OutIsValid, FG01QuestDataStruct& OutQuestData) const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex);
    
    UFUNCTION(BlueprintCallable)
    void CheckQuestDestinationByRegionID(FName InRegionID, TArray<FG01QuestDestCheckResult>& ReResult);
    
    UFUNCTION(BlueprintCallable)
    void CheckQuestDestinationByMapID(FName InMapID, TArray<FG01QuestDestCheckResult>& ReResult);
    
    UFUNCTION(BlueprintCallable)
    void CheckQuestDestination(const FG01DestinationLocationInfo& InCheckLocation, TArray<FG01QuestDestCheckResult>& ReResult);
    
    UFUNCTION(BlueprintCallable)
    void ActivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex, EG01QuestChronicleState InState);
    
    UFUNCTION(BlueprintCallable)
    void ActivateAllChronicle();
    
};

