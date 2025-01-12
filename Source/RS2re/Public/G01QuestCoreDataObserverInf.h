#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01QuestChronicleActiveData.h"
#include "G01QuestChronicleHierarchyData.h"
#include "G01QuestCoreDataObserverInf.generated.h"

UINTERFACE(Blueprintable)
class UG01QuestCoreDataObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01QuestCoreDataObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01QuestCoreData_OnUpdateChronicle(const FG01QuestChronicleActiveData& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01QuestCoreData_OnDeactiveChronicle(const FG01QuestChronicleHierarchyData& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01QuestCoreData_OnActiveChronicle(const FG01QuestChronicleActiveData& InData);
    
};

