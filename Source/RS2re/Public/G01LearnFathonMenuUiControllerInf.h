#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01LearnFathonMenuUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LearnFathonMenuUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01LearnFathonMenuUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LearnFathomMenuUiController_Open();
    
};

