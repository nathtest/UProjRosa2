#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01WalletUiControllerEventInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01WalletUiControllerEventInf : public UInterface {
    GENERATED_BODY()
};

class IG01WalletUiControllerEventInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01WalletUiController_CalcFinish();
    
};

