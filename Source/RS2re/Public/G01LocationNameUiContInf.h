#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01LocationNameUiContInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LocationNameUiContInf : public UInterface {
    GENERATED_BODY()
};

class IG01LocationNameUiContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LocationNameUiCont_Start(FName InLocationTextId, FName InAreaTextId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LocationNameUiCont_End();
    
};

