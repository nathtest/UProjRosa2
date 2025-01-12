#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01DevelopSpellMenuControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01DevelopSpellMenuControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01DevelopSpellMenuControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DevelopSpellMenuUiController_Open();
    
};

