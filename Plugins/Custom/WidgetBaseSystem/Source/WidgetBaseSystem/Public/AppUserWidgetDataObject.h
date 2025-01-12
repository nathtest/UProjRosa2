#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AppUserWidgetDataObject.generated.h"

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API UAppUserWidgetDataObject : public UObject {
    GENERATED_BODY()
public:
    UAppUserWidgetDataObject();

    UFUNCTION(BlueprintCallable)
    void OnDataUpdate(FName InNotifyName);
    
};

