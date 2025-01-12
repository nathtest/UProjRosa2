#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01AreaId.h"
#include "G01ClearAreaTelopUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ClearAreaTelopUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ClearAreaTelopUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ClearAreaTelop_OpenRequest(const EG01AreaId& ClearAreaID);
    
};

