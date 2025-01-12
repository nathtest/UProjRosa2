#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BattleBossRecordUiControllerResultEnum.h"
#include "G01BattleBossRecordUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleBossRecordUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleBossRecordUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleBossRecordUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleBossRecordUiController_Close(const EG01BattleBossRecordUiControllerResultEnum& InResult);
    
};

