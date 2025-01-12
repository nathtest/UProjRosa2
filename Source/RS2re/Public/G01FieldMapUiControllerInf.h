#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01FieldMapUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FieldMapUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01FieldMapUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldMapUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldMapUiController_Close();
    
};

