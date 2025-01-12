#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01StaffRollUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01StaffRollUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01StaffRollUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StaffRollUiController_Request();
    
};

