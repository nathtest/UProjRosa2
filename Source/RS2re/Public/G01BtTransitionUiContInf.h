#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EBtTransitionType.h"
#include "G01BtTransitionUiContInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BtTransitionUiContInf : public UInterface {
    GENERATED_BODY()
};

class IG01BtTransitionUiContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtTransitionUiCont_StartTransition(int32 InNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtTransitionUiCont_StartScreenTransition(EBtTransitionType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtTransitionUiCont_StartScreenCapture(EBtTransitionType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtTransitionUiCont_StartCapture(int32 InNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BtTransitionUiCont_IsCompleteCapture();
    
};

