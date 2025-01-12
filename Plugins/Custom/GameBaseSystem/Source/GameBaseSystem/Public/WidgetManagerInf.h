#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EWidgetType.h"
#include "WidgetManagerInf.generated.h"

class UGameViewWidget;

UINTERFACE(Blueprintable, MinimalAPI)
class UWidgetManagerInf : public UInterface {
    GENERATED_BODY()
};

class IWidgetManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_WidgetManager_ReleaseWidget(EWidgetType InWidgetType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_WidgetManager_IsActiveWidgetType(EWidgetType InWidgetType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UGameViewWidget*> Inf_WidgetManager_GetWidget(EWidgetType InWidgetType);
    
};

