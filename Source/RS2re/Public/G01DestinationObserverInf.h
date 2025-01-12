#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01DestinationInfos.h"
#include "G01DestinationObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01DestinationObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01DestinationObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01Destination_OnUpdateDestination();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01Destination_OnUpdateComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01Destination_OnRemoveDestination(const FG01DestinationInfos& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01Destination_OnAddDestination(const FName& InKey);
    
};

