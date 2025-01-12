#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01InteractUiContUserInf.generated.h"

class UInteractIconPositionComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01InteractUiContUserInf : public UInterface {
    GENERATED_BODY()
};

class IG01InteractUiContUserInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UInteractIconPositionComponent* Inf_InteractUiContUser_GetInteractRootComponent();
    
};

