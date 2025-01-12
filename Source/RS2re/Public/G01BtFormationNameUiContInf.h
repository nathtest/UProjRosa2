#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BtFormationNameUiContInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BtFormationNameUiContInf : public UInterface {
    GENERATED_BODY()
};

class IG01BtFormationNameUiContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtFormationNameUiCont_Start(FName InFormationId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtFormationNameUiCont_End();
    
};

