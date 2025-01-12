#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01AreaId.h"
#include "G01ClearAreaUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ClearAreaUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01ClearAreaUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ClearAreaUiController_Request(EG01AreaId ClearArea);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ClearAreaUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ClearAreaUiController_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ClearArea_SequenceRequest(EG01AreaId ClearArea);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ClearArea_SequenceFinished(EG01AreaId ClearArea);
    
};

