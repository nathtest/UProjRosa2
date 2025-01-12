#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01LoadWaitUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LoadWaitUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01LoadWaitUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LoadWaitUiControllerInf_Request();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LoadWaitUiControllerInf_LoadStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LoadWaitUiControllerInf_GetActiveElapsedTime(float& OutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LoadWaitUiControllerInf_Close();
    
};

