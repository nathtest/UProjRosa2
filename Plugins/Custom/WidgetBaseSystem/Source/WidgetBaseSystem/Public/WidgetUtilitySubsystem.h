#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "WidgetUtilitySubsystem.generated.h"

class UWidgetBaseSystemGameSetting;

UCLASS(Abstract, Blueprintable)
class WIDGETBASESYSTEM_API UWidgetUtilitySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetBaseSystemGameSetting* MSettingObject;
    
public:
    UWidgetUtilitySubsystem();

    UFUNCTION(BlueprintCallable)
    float GetPointerEnterTriggerDelay();
    
    UFUNCTION(BlueprintCallable)
    float GetPointerEnterTriggerCursorDelta();
    
    UFUNCTION(BlueprintCallable)
    float GetMouseHoldIntervalTriggerDelay();
    
    UFUNCTION(BlueprintCallable)
    float GetMouseHoldEnterTriggerDelay();
    
};

