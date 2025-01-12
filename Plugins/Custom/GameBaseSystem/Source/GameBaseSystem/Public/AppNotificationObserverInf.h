#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "AppNotificationObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UAppNotificationObserverInf : public UInterface {
    GENERATED_BODY()
};

class IAppNotificationObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_AppNotification_OnWindowFocusChanged(const bool IsActive);
    
};

