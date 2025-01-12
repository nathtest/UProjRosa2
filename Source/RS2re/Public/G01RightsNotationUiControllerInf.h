#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01RightsNotationUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01RightsNotationUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01RightsNotationUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RightsNotationUiController_Open();
    
};

