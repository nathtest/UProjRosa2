#pragma once
#include "CoreMinimal.h"
#include "G01UiController.h"
#include "G01WalletUiController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01WalletUiController : public AG01UiController {
    GENERATED_BODY()
public:
    AG01WalletUiController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEventWalletCalcCrown(int32 InValue, bool InIsEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetEventWalletActive(bool InIsActive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventWalletCalcCrown(int32 InValue, bool InIsEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventWalletActive(bool InIsActive);
    
};

