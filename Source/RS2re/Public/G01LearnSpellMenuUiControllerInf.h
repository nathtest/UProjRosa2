#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01LearnSpellMenuUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LearnSpellMenuUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01LearnSpellMenuUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LearnSpellMenuUiController_Open();
    
};

