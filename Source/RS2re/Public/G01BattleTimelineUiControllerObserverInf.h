#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleTimelineUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleTimelineUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleTimelineUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleTimelineUiController_OnSimulatedNextTimeLine();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleTimelineUiController_OnFinishedEntryForDangerIcon();
    
};

