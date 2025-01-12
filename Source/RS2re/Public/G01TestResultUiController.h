#pragma once
#include "CoreMinimal.h"
#include "G01TestResultDataParam.h"
#include "G01UiController.h"
#include "G01TestResultUiController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01TestResultUiController : public AG01UiController {
    GENERATED_BODY()
public:
    AG01TestResultUiController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RequestExamPass(FG01TestResultDataParam DataParam);
    
    UFUNCTION(BlueprintCallable)
    bool RequestExamFailed(FG01TestResultDataParam DataParam);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenExamPass();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenExamFailed();
    
};

