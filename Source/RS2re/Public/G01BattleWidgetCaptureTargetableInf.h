#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleWidgetCaptureTargetableInf.generated.h"

class UWidget;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleWidgetCaptureTargetableInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleWidgetCaptureTargetableInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UWidget*> Inf_BattleWidgetCaptureTargetable_GetAllWidget();
    
};

