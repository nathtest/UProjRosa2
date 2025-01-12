#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "PlatformObserverInf.generated.h"

UINTERFACE(Blueprintable)
class UPlatformObserverInf : public UInterface {
    GENERATED_BODY()
};

class IPlatformObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_Platform_OnChangeWidgetVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_Platform_OnChangeWidgetOpacity(float InOpacity);
    
};

