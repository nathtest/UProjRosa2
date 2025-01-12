#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ImperialTestUiControllerInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ImperialTestUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ImperialTestUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G0ImperialTestUiController_RequestFirstTest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G0ImperialTestUiController_Request(AActor* MenuActor);
    
};

