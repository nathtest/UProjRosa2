#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BlackSmithMenuCloseTypeEnum.h"
#include "EG01BlackSmithMenuStateEnum.h"
#include "G01BlackSmithMenuIDStruct.h"
#include "G01BlackSmithMenuUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BlackSmithMenuUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BlackSmithMenuUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BlackSmithMenuUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BlackSmithMenuUiController_FinishedOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BlackSmithMenuUiController_Close(EG01BlackSmithMenuCloseTypeEnum InCloseType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BlackSmithMenuUiController_ChangeState(FG01BlackSmithMenuIDStruct ItemId, EG01BlackSmithMenuStateEnum State);
    
};

