#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01EventTriggerID.h"
#include "G01HistoryManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01HistoryManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01HistoryManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01HistoryManager_RecordEventInfo(FG01EventTriggerID InEventTriggerID);
    
};

