#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "QuestCoreDataArray.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestCoreDataArray -FallbackName=QuestCoreDataArray
#include "G01MenuQuestFuncLib.generated.h"

class UG01QuestManagerAccessor;
class UObject;

UCLASS(Blueprintable)
class RS2RE_API UG01MenuQuestFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01MenuQuestFuncLib();

    UFUNCTION(BlueprintCallable)
    static void SortQuestCoreDataByQuestID(UPARAM(Ref) FQuestCoreDataArray& InQuestCoreDataArray, const UG01QuestManagerAccessor* InQuestManagerAccessor, FQuestCoreDataArray& ReQuestCoreDataArray, bool& ReIsSortSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void SetTargetQuest(UObject* InWorldContext, FName InTargetQuestID, UG01QuestManagerAccessor* InQuestManagerAccessor, bool& IsChange, bool& IsRegist);
    
    UFUNCTION(BlueprintCallable)
    static void CreateQuestCoreDataListByRegion(UG01QuestManagerAccessor* InQuestManagerAccessor, const TArray<FQuestCoreDataArray>& InSrcQuestCoreDataList, TMap<FName, FQuestCoreDataArray>& ReQuestCoreDataListByRegionID);
    
};

