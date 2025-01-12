#pragma once
#include "CoreMinimal.h"
#include "EG01AreaId.h"
#include "EG01TelopId.h"
#include "G01UiController.h"
#include "G01ClearAreaTelopUiController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01ClearAreaTelopUiController : public AG01UiController {
    GENERATED_BODY()
public:
    AG01ClearAreaTelopUiController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ShowTelop(const EG01AreaId& ClearAreaID);
    
    UFUNCTION(BlueprintCallable)
    bool ShowAreaTelop(const EG01TelopId& ClearAreaID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestNotice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestInputTelop();
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestInput();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenTelop(const EG01AreaId& ClearAreaID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenAreaTelop(const EG01TelopId& ClearAreaID);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseTelop();
    
};

