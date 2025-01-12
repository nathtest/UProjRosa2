#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WidgetBaseSystemGameSetting.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class WIDGETBASESYSTEM_API UWidgetBaseSystemGameSetting : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MPointerEnterTriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MPointerEnterTriggerCursorDelta;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMouseHoldEnterTriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMouseHoldIntervalTriggerDelay;
    
public:
    UWidgetBaseSystemGameSetting();

    UFUNCTION(BlueprintCallable)
    float GetPointerEnterTriggerDelay();
    
    UFUNCTION(BlueprintCallable)
    float GetPointerEnterTriggerCursorDelta();
    
    UFUNCTION(BlueprintCallable)
    float GetMouseHoldIntervalTriggerDelay();
    
    UFUNCTION(BlueprintCallable)
    float GetMouseHoldEnterTriggerDelay();
    
};

