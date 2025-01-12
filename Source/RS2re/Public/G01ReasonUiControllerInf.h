#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ReasonUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ReasonUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ReasonUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ReasonUiControllerInf_Request();
    
};

