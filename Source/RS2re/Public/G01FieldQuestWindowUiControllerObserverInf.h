#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01FieldQuestWindowUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FieldQuestWindowUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01FieldQuestWindowUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FieldQuestWindowUiController_DispEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FieldQuestWindowUiController_AnimEnd(const FText& DestinationText);
    
};

