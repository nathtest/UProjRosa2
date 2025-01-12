#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EKeyConfigType -FallbackName=EKeyConfigType
#include "G01KeyConfigUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01KeyConfigUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01KeyConfigUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01KeyConfigUiController_Open(EKeyConfigType InType);
    
};

