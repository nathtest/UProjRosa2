#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG1BattleWidgetCaptureErrorLevel.h"
#include "G01BattleWidgetCaptureObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleWidgetCaptureObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleWidgetCaptureObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleWidgetCapture_NotifyOverlapWidgetError(EG1BattleWidgetCaptureErrorLevel InErrorLevel);
    
};

