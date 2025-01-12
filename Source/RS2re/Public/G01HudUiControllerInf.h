#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01DestinationInfos.h"
#include "G01HudUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01HudUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01HudUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudUiController_RemoveDestination(const FG01DestinationInfos& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudUiController_AddDestination(const FName& InKey);
    
};

