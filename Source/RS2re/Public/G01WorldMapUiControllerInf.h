#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01WorldMapUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01WorldMapUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01WorldMapUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01WorldMapUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01WorldMapUiController_Close();
    
};

