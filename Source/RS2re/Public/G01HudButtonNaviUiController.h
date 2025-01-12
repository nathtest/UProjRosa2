#pragma once
#include "CoreMinimal.h"
#include "InputMappingName.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InputMappingName -FallbackName=InputMappingName
#include "G01UiController.h"
#include "G01HudButtonNaviUiController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01HudButtonNaviUiController : public AG01UiController {
    GENERATED_BODY()
public:
    AG01HudButtonNaviUiController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDispParam(FInputMappingName InputParam, FText TextID, float DispTime, bool PushErase);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDisp();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonNaviOpen(FInputMappingName InputParam, const FText& TextID, float DispTime, bool PushErase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonNaviClose();
    
};

